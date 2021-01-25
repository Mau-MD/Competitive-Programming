#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>

// BUGS Una pieza siempre hace cosas randoms
// Agregar isValid al offsetX


using namespace std;

const int LENGTH = 6;
const int WIDTH = 10;
char game_field[10][10];

int tilePosX[4];
int tilePosY[4];

int auxTilePosX[4];
int auxTilePosY[4];

int newTilePosY[4];

int piece_counter = 0;

int currentLevel = 0;
int score = 0;


int JLSTZOffsetDataX[5] = {0, -1, -1, 0, -1};
int JLSTZOffsetDataY[5] = {0, -1, -1, 2, 2};

int IOffsetDataX[5] = {0, -2, 1, -2, 1};
int IOffsetDataY[5] = {0, 0, 0, +1, -2};

int arrayConverter(int i, int j)
{
    if (i % 2 == 0)
    {
        return LENGTH * i + j;
    }
    return (LENGTH * (i+1)) - (j+1);
}


void updateTile(int nTile, int x, int y)
{
    tilePosX[nTile] = x;
    tilePosY[nTile] = y;

    game_field[tilePosY[nTile]][tilePosX[nTile]] = 65 + piece_counter;
}

// Game Assets

bool isOTetrino;
bool isITetrino;

void t_tetrino()
{
    updateTile(0,2,1);
    updateTile(1,3,1); // SIEMPRE LA BASE
    updateTile(2,4,1);
    updateTile(3,3,0);
    isOTetrino = false;
    isITetrino = false;

}

void j_tetrino()
{
    updateTile(0,3,1);
    updateTile(1,2,1);
    updateTile(2,4,1);
    updateTile(3,4,0);
    isOTetrino = false;
    isITetrino = false;

}

void l_tetrino()
{
    updateTile(0,2,1);
    updateTile(1,3,1);
    updateTile(2,4,1);
    updateTile(3,2,0);
    isOTetrino = false;
    isITetrino = true;

}

void s_tetrino()
{
    updateTile(0,2,1);
    updateTile(1,3,1);
    updateTile(2,3,0);
    updateTile(3,4,0);
    isOTetrino = false;
    isITetrino = false;

}

void z_tetrino()
{
    updateTile(0,2,0);
    updateTile(1,3,0);
    updateTile(2,3,1);
    updateTile(3,4,1);
    isOTetrino = false;
    isITetrino = false;

}

void o_tetrino()
{
    updateTile(0,3,0);
    updateTile(1,4,0);
    updateTile(2,3,1);
    updateTile(3,4,1);
    isOTetrino = true;
    isITetrino = false;

}

void generateTetrino()
{
    srand(time(NULL));
    rand(); rand(); rand();

    piece_counter++;

    int selectedPiece = rand()%6;
    switch (selectedPiece)
    {
        case 0: cout<<"t_tetrino\n"; t_tetrino(); break;
        case 1: cout<<"l_tetrino\n";l_tetrino(); break;
        case 2: cout<<"j_tetrino\n";j_tetrino(); break;
        case 3: cout<<"z_tetrino\n";z_tetrino(); break;
        case 4: cout<<"s_tetrino\n";s_tetrino(); break;
        case 5: cout<<"o_tetrino\n";o_tetrino(); break;
        default: break;
    }

}

void deleteCurrent()
{
    for (int i=0;i<4;i++)
    {
        game_field[tilePosY[i]][tilePosX[i]] = '.';
        game_field[tilePosY[i]][tilePosX[i]] = '.';
    }
}


void print_state()
{
    for (int i=0;i<WIDTH;i++)
    {
        for (int j=0;j<LENGTH;j++)
        {
            cout<<game_field[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isValid(int currentPositionY, int currentPositionX)
{
    return !isalpha(game_field[currentPositionY][currentPositionX]) && currentPositionY <= WIDTH - 1;
}

/**
 * Esta funcion me deberia regresar el lugar posible el cual se puede rotar
 * @return
 */
bool rotationOffset()
{
    int globalTilePosX[5];
    int globalTilePosY[5];

    int currentOffsetDataX[5];
    int currentOffsetDataY[5];

    int count = 0;

    if (!isITetrino)
    {
        for (int i=0;i<5;i++)
        {
            currentOffsetDataX[i] = JLSTZOffsetDataX[i];
            currentOffsetDataY[i] = JLSTZOffsetDataY[i];
        }
    }
    else
    {
        for (int i=0;i<5;i++)
        {
            currentOffsetDataX[i] = IOffsetDataX[i];
            currentOffsetDataY[i] = IOffsetDataY[i];
        }
    }
    for (int offsetIndex = 0; offsetIndex<5;offsetIndex++)
    {
        count = 0;
        for (int i=0;i<4;i++)
        {
            count++;
            globalTilePosX[i] = auxTilePosX[i] + currentOffsetDataX[offsetIndex];
            globalTilePosY[i] = auxTilePosY[i] + currentOffsetDataY[offsetIndex];

            if (!isValid(globalTilePosY[i],globalTilePosX[i]))break;
        }
        if (count == 4) // Es posible
        {
            for (int i=0;i<4;i++)
            {
                auxTilePosX[i] = globalTilePosX[i];
                auxTilePosY[i] = globalTilePosY[i];
            }
            return 1;
        }
    }
    return 0;
}

void rotateTile(int currentPositionX, int currentPositionY, int nTile) // Origin position is the center of the tile ... Tile #2
{
    int originPositionX = tilePosX[1], originPositionY = tilePosY[1];
    int relativePosX = currentPositionX - originPositionX, relativePosY = currentPositionY - originPositionY;

    /* Now that we have the relative position of the tile, we can multiply by the rotation matrix
     *        0   1             eg.         0   1       0  | x              newX = 0 * 0 + 1 * 1
     *       -1   0                         -1  0       1  | y              new y = 0 * -1 + 1 * 0      */

    int newX = relativePosY * -1;
    int newY = relativePosX;

    int newCurrentX = newX + originPositionX;
    int newCurrentY = newY + originPositionY;


    auxTilePosX[nTile] = newCurrentX;
    auxTilePosY[nTile] = newCurrentY;

   // updateTile(nTile, newCurrentX, newCurrentY);
}

void rotation(bool shouldOffset)
{
    if (isOTetrino)return;
    deleteCurrent();

    // New rotation Index
    for (int i = 0;i<4;i++) // Each piece
    {
        rotateTile(tilePosX[i], tilePosY[i], i); // Center = Tile #2
        cout<<"Piece "<<i<<" x "<<auxTilePosX[i]<<endl;
        cout<<"Piece "<<i<<" y "<<auxTilePosY[i]<<endl;
        cout<<endl;

    }

    bool possible = rotationOffset();

    if (possible)
    {
        for (int i = 0; i < 4; i++)
        {
            tilePosX[i] = auxTilePosX[i];
            tilePosY[i] = auxTilePosY[i];
            updateTile(i, tilePosX[i], tilePosY[i]);
        }
    }
    else
    {
        for (int i=0;i<4;i++)
        {
            updateTile(i,tilePosX[i],tilePosY[i]);
        }
    }

}


int offsetX(int currentPositionX, int offsetX)
{
    return currentPositionX + offsetX;
}

int offsetY(int currentPositionY, int offsetY)
{
    return currentPositionY + offsetY;
}

/*
void movementX(int direction)
{
    deleteCurrent();
    for (int i=0;i<4;i++)
    {
        int newX = offsetX(tilePosX[i],direction);
        updateTile(i,newX,tilePosY[i]);
    }
}
*/
void movementX(int direction)
{
    bool collision = false;
    deleteCurrent();
    for (int i=0;i<4;i++)
    {
        auxTilePosX[i] = offsetX(tilePosX[i],direction);
        if (!isValid(tilePosY[i], auxTilePosX[i]))collision = true;
    }   

    if (collision) // Actualizamos al anterior
    {
        for (int i=0;i<4;i++)
        {
            updateTile(i,tilePosX[i], tilePosY[i]);
        }
    }
    else
    {
        for (int i =0;i<4;i++)
        {
            tilePosX[i] = auxTilePosX[i];
            updateTile(i,tilePosX[i],tilePosY[i]);
        }
    }
}

void allOffset(int yBreak)
{
    for (int i=yBreak;i>=0;i--)
    {

        for (int j=LENGTH-1;j>=0;j--)
        {
            if (i==0)break;
            game_field[i][j] = game_field[i-1][j];
        }
    }
}

void isLine()
{
    int nLines = 0;
    for (int i=0;i<WIDTH;i++)
    {
        int tetronimo_count = 0;
        for (int j=0;j<LENGTH;j++)
        {
            if (isalpha(game_field[i][j]))tetronimo_count++;
        }
        if (tetronimo_count == LENGTH)
        {
            nLines++;
            allOffset(i);
        }
    }

    switch (nLines)
    {
        case 1: score += (40 * (currentLevel + 1)); generateTetrino(); break;
        case 2: score += (200 * (currentLevel + 1)); generateTetrino(); break;
        case 3: score += (300 * (currentLevel + 1)); generateTetrino(); break;
        case 4: score+= (1200 * (currentLevel + 1)); generateTetrino(); break;
        default: generateTetrino(); break;
    }
}

// Debug purposes

void movementY(int direction)
{
    bool end = false;
    bool collision = false;
    deleteCurrent();
    for (int i=0;i<4;i++)
    {
        newTilePosY[i] = offsetY(tilePosY[i],direction);
        // if (isEndOfField(newTilePosY[i]))end = true;
        if (!isValid(newTilePosY[i], tilePosX[i]))collision = true;
    }
    for (int i=0;i<4;i++)
    {
        if (collision)
        {
            updateTile(i,tilePosX[i], newTilePosY[i] - 1);
            end = true;
        }
        else
        {
            updateTile(i,tilePosX[i], newTilePosY[i]);
        }
    }
    if (end)
    {
        isLine();
    }
    /*
    isLine();
    if (end)generateTetrino();
    */
}


int main()
{

    memset(game_field, '.', WIDTH * LENGTH * 10);
    generateTetrino();
    print_state();

    char debug;
    while (cin>>debug)
    {
        switch (debug)
        {
            case 'a': movementX(-1);break;
            case 'd': movementX(1);break;
            case 's': movementY(1);break;
            case 'w': movementY(-1);break;
            default: rotation(true);
        }
        print_state();
    }


    return 0;
}
