#include <bits/stdc++.h>

#define MAX 300

using namespace std;

class Tetris
{
public:
    void inicializar();
    void DEBUG_matriz();
    void piezas();
    void imprimir();
    bool dev[100][100];
    void derecha();
    void izquierda();
    void rotacion();


private:
    int estado_rotacion = 0;
    int numero_pieza;
    int totalFilas, totalColumnas;
    int leds[MAX][MAX];
    int  FILAS;
    int dx[100], dy[100];
    int x=-1;
    struct Pieza
    {
        int x;
        int y;
    }p1, p2, p3, p4;
    void iniciar_piezas()
    {
        p1.x = -1; p1.y = -1;
        p2.x = -1; p2.y = -1;
        p3.x = -1; p3.y = -1;
        p4.x = -1; p4.y = -1;
    }

    struct NuevaPieza
    {
        int x;
        int y;
    }np1, np2, np3, np4;
    void iniciar_nuevaPiezas()
    {
        np1.x = -1; np1.y = -1;
        np2.x = -1; np2.y = -1;
        np3.x = -1; np3.y = -1;
        np4.x = -1; np4.y = -1;
    }
    int random()
    {
        srand(time(NULL));
        rand();rand();rand();
        int num = rand()%7;
        return num;

    }
};




void Tetris::inicializar()
{
    iniciar_piezas();
    iniciar_nuevaPiezas();
    cin>>totalFilas>>totalColumnas;
    FILAS = totalFilas;

    for (int i=0;i<totalFilas; i++)
    {
        for (int j = 0; j < totalColumnas; j++)
        {
            if (j == 0)leds[i][j] = (FILAS - i);
            else if (j % 2 != 0)
            {
                leds[i][j] = leds[i][j - 1] + ((FILAS - ((FILAS + 1) - (i + 1))) * 2 + 1);
            } else
            {
                leds[i][j] = leds[i][j - 2] + (FILAS * 2);
            }

        }
    }
    piezas();
}

void Tetris::DEBUG_matriz() {
    for (int i=0;i<FILAS;i++)
    {
        for (int j=0;j<totalColumnas;j++)

        {
            cout<<leds[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Tetris::piezas() {
    memset(dev,false, sizeof(dev[0][0]) * FILAS * totalColumnas);

    numero_pieza = random();
    cout<<numero_pieza<<"\n";
    numero_pieza = 4;
    switch (numero_pieza)
    {
        case 0:
        {
            dev[0][1] = true;
            p1.y = 0; p1.x = 1;
            dev[1][0] = true;
            p2.y = 1; p2.x = 0;
            dev[1][1] = true;
            p3.y = 1; p3.x = 1;
            dev[1][2] = true;
            p4.y = 1; p4.x = 2;
            estado_rotacion = 0;
            break;
        }
        case 1:
        {
            dev[0][1] = true;
            p1.y = 0; p1.x = 1;
            dev[1][0] = true;
            p2.y = 1; p2.x = 0;
            dev[1][1] = true;
            p3.y = 1; p3.x = 1;
            dev[0][0] = true;
            p4.y = 0; p4.x = 0;
            estado_rotacion = 0;
            break;

        }
        case 2:
        {
            dev[1][0] = true;
            p1.y = 1; p1.x = 0;
            dev[0][1] = true;
            p2.y = 0; p2.x = 1;
            dev[1][1] = true;
            p3.y = 1; p3.x = 1;
            dev[0][2] = true;
            p4.y = 0; p4.x = 2;
            estado_rotacion = 0;
            break;
        }
        case 3:
        {
            dev[0][0] = true;
            p1.y = 0; p1.x = 0;
            dev[0][1] = true;
            p2.y = 0; p2.x = 1;
            dev[1][1] = true;
            p3.y = 1; p3.x = 1;
            dev[1][2] = true;
            p4.y = 1; p4.x = 2;
            estado_rotacion = 0;
            break;
        }
        case 4: //*
        {
            dev[0][0] = true;
            p1.y = 0; p1.x = 0;
            dev[0][1] = true;
            p2.y = 0; p2.x = 1;
            dev[0][2] = true;
            p3.y = 0; p3.x = 2;
            dev[0][3] = true;
            p4.y = 0; p4.x = 3;
            estado_rotacion = 0;
            break;
        }
        case 5:
        {
            dev[0][0] = true;
            p1.y = 0; p1.x = 0;
            dev[1][0] = true;
            p2.y = 1; p2.x = 0;
            dev[1][1] = true;
            p3.y = 1; p3.x = 1;
            dev[1][2] = true;
            p4.y = 1; p4.x = 2;
            estado_rotacion = 0;
            break;
        }
        case 6:
        {
            dev[0][2] = true;
            p1.y = 0; p1.x = 2;
            dev[1][0] = true;
            p2.y = 1; p2.x = 0;
            dev[1][1] = true;
            p3.y = 1; p3.x = 1;
            dev[1][2] = true;
            p4.y = 1; p4.x = 2;
            estado_rotacion = 0;
            break;
        }

    }


}

void Tetris::imprimir() {

    for (int i=0;i<FILAS;i++)
    {
        for (int j=0;j<totalColumnas;j++)
        {
            cout<<dev[i][j]<<" ";
        }
        cout<<endl;
    }

}

void Tetris::derecha() {

   np1.x = p1.x + 1;
   np2.x = p2.x + 1;
   np3.x = p3.x + 1;
   np4.x = p4.x + 1;
   np1.y = p1.y;
   np2.y = p2.y;
   np3.y = p3.y;
   np4.y = p4.y;

    // Borrar current

    dev[p1.y][p1.x] = false;
    dev[p2.y][p2.x] = false;
    dev[p3.y][p3.x] = false;
    dev[p4.y][p4.x] = false;

    // Agregar nuevo

    dev[np1.y][np1.x] = true;
    dev[np2.y][np2.x] = true;
    dev[np3.y][np3.x] = true;
    dev[np4.y][np4.x] = true;

    // Actualizar current

    p1.x = np1.x;
    p2.x = np2.x;
    p3.x = np3.x;
    p4.x = np4.x;
    p1.y = np1.y;
    p2.y = np2.y;
    p3.y = np3.y;
    p4.y = np4.y;

    imprimir();
}

void Tetris::izquierda() {

    np1.x = p1.x - 1;
    np2.x = p2.x - 1;
    np3.x = p3.x - 1;
    np4.x = p4.x - 1;
    np1.y = p1.y;
    np2.y = p2.y;
    np3.y = p3.y;
    np4.y = p4.y;

    // Borrar current

    dev[p1.y][p1.x] = false;
    dev[p2.y][p2.x] = false;
    dev[p3.y][p3.x] = false;
    dev[p4.y][p4.x] = false;

    // Agregar nuevo

    dev[np1.y][np1.x] = true;
    dev[np2.y][np2.x] = true;
    dev[np3.y][np3.x] = true;
    dev[np4.y][np4.x] = true;

    // Actualizar current

    p1.x = np1.x;
    p2.x = np2.x;
    p3.x = np3.x;
    p4.x = np4.x;
    p1.y = np1.y;
    p2.y = np2.y;
    p3.y = np3.y;
    p4.y = np4.y;

    imprimir();
}

void Tetris::rotacion()
{
    // El centro siempre es la pieza 3
    switch (numero_pieza)
    {
        case 0: // Pieza numero cero
        {
            switch(estado_rotacion)
            {
                case 0:
                {
                    dev[p2.y][p2.x] = false;
                    p2.y = p3.y + 1; p2.x = p3.x;
                    dev[p2.y][p2.x] = true;
                    estado_rotacion = 1;
                    break;
                }
                case 1:
                {
                    dev[p1.y][p1.x] = false;
                    p1.y = p3.y ; p1.x = p3.x-1;
                    dev[p1.y][p1.x] = true;
                    estado_rotacion = 2;
                    break;
                }
                case 2:
                {
                    dev[p4.y][p4.x] = false;
                    p4.y = p3.y - 1; p4.x = p3.x;
                    dev[p4.y][p4.x] = true;
                    estado_rotacion = 3;
                    break;
                }
                case 3:
                {
                    dev[p2.y][p2.x] = false;
                    p1.y = p3.y - 1; p1.x = p3.x;
                    p2.y = p3.y; p2.x = p3.x - 1;
                    p4.y = p3.y; p4.x = p3.x + 1;
                    dev[p1.y][p1.x] = true;
                    dev[p2.y][p2.x] = true;
                    dev[p4.y][p4.x] = true;
                    estado_rotacion = 0;
                    break;
                }
            }
        }
        case 2: // Pieza numero dos
        {
            switch(estado_rotacion)
            {
                case 0:
                {
                    dev[p1.y][p1.x] = false;
                    dev[p4.y][p4.x] = false;

                    p1.x = p3.x + 1;
                    p4.y = p3.y + 1; p4.x = p3.x + 1;

                    dev[p1.y][p1.x] = true;
                    dev[p4.y][p4.x] = true;
                    estado_rotacion = 1;
                    break;
                }
                case 1:
                {
                    dev[p2.y][p2.x] = false;
                    dev[p4.y][p4.x] = false;

                    p2.y = p3.y + 1;
                    p4.x = p3.x - 1;

                    dev[p2.y][p2.x] = true;
                    dev[p4.y][p4.x] = true;
                    estado_rotacion = 2;
                    break;
                }
                case 2:
                {
                    dev[p1.y][p1.x] = false;
                    dev[p4.y][p4.x] = false;

                    p1.x = p3.x - 1;
                    p4.y = p3.y - 1; p4.x = p3.x - 1;

                    dev[p1.y][p1.x] = true;
                    dev[p4.y][p4.x] = true;
                    estado_rotacion = 3;
                    break;
                }
                case 3:
                    dev[p2.y][p2.x] = false;
                    dev[p4.y][p4.x] = false;

                    p2.y = p3.y - 1;
                    p4.x = p3.x + 1;
                    estado_rotacion = 0;

                    dev[p2.y][p2.x] = true;
                    dev[p4.y][p4.x] = true;
                    break;
            }
        }
        case 3: // Pieza numero tres
        {
            switch(estado_rotacion)
            {
                case 0:
                {
                    dev[p1.y][p1.x] = false;
                    dev[p2.y][p2.x] = false;

                    p1.x = p3.x + 1;
                    p2.y = p3.y + 1;

                    dev[p1.y][p1.x] = true;
                    dev[p2.y][p2.x] = true;
                    estado_rotacion = 1;
                    break;
                }
                case 1:
                {
                    dev[p1.y][p1.x] = false;
                    dev[p4.y][p4.x] = false;

                    p1.y = p3.y + 1;
                    p4.x = p3.x - 1;

                    dev[p1.y][p1.x] = true;
                    dev[p4.y][p4.x] = true;
                    estado_rotacion = 2;
                    break;
                }
                case 2:
                {
                    dev[p1.y][p1.x] = false;
                    dev[p2.y][p2.x] = false;

                    p1.x = p3.x - 1;
                    p2.y = p3.y - 1;

                    dev[p1.y][p1.x] = true;
                    dev[p2.y][p2.x] = true;
                    estado_rotacion = 3;
                    break;
                }
                case 3:
                    dev[p1.y][p1.x] = false;
                    dev[p4.y][p4.x] = false;

                    p1.y = p3.y - 1;
                    p4.x = p3.x + 1;

                    dev[p1.y][p1.x] = true;
                    dev[p4.y][p4.x] = true;
                    estado_rotacion = 0;
                    break;
            }
        }
        case 4: // Pieza numero cuatro
        {
            switch(estado_rotacion)
            {
                case 0:
                {
                    dev[p1.y][p1.x] = false;
                    dev[p2.y][p2.x] = false;
                    dev[p3.y][p3.x] = false;

                    p1.y = p4.y - 1; p1.x = p4.x;
                    p2.y = p4.y + 1; p2.x = p4.x;
                    p3.y = p4.y + 2; p3.x = p4.x;

                    cout<<p1.y<<" "<<p1.x<<endl;
                    cout<<p2.y<<" "<<p2.x<<endl;
                    cout<<p3.y<<" "<<p3.x<<endl;
                    cout<<p4.y<<" "<<p4.x<<endl;


                    dev[p1.y][p1.x] = true;
                    dev[p2.y][p2.x] = true;
                    dev[p3.y][p3.x] = true;

                    estado_rotacion = 1;
                    break;
                }
                case 1:
                {
                    // Nos basamos en el dos
                    dev[p1.y][p1.x] = false;
                    dev[p3.y][p3.x] = false;
                    dev[p4.y][p4.x] = false;

                    p1.y = p2.y; p1.x = p2.x - 2;
                    p3.y = p2.y; p3.x = p2.x - 1;
                    p4.y = p2.y; p4.x = p2.x + 1;

                    dev[p1.y][p1.x] = true;
                    dev[p3.y][p3.x] = true;
                    dev[p4.y][p4.x] = true;

                    estado_rotacion = 2;
                    break;
                }
                case 2:
                {
                    dev[p1.y][p1.x] = false;
                    dev[p2.y][p2.x] = false;
                    dev[p4.y][p4.x] = false;

                    p1.y = p3.y - 2; p1.x = p3.x;
                    p2.y = p3.y - 1; p2.x = p3.x;
                    p4.y = p3.y + 1; p4.x = p3.x;

                    dev[p1.y][p1.x] = true;
                    dev[p2.y][p2.x] = true;
                    dev[p4.y][p4.x] = true;

                    estado_rotacion = 3;
                    break;
                }
                case 3:
                {
                    // Usar como base el 2
                    dev[p1.y][p1.x] = false;
                    dev[p3.y][p3.x] = false;
                    dev[p4.y][p4.x] = false;

                    p1.y = p2.y; p1.x = p2.x - 2;
                    p3.y = p2.y; p3.x = p2.x - 1;
                    p4.y = p2.y; p4.x = p2.x + 1;

                    dev[p1.y][p1.x] = true;
                    dev[p3.y][p3.x] = true;
                    dev[p4.y][p4.x] = true;

                    estado_rotacion = 0;
                    break;
                }
            }
        }


        imprimir();
    }


}

int main()
{

    Tetris juego1;
    juego1.inicializar();
    juego1.imprimir();
    int dato;
    while(cin>>dato)
    {
        if (dato == 1)juego1.derecha();
        else if (dato == 0)juego1.izquierda();
        else juego1.rotacion();
    }





    return 0;
}
