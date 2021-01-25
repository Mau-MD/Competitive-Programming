#include <bits/stdc++.h> // La libreria que le caga a Juarez :)
#define MAXCAR 32
#define cartita(a,b,c) for (int i=a; i<b; i+=c)
#define IO ios_base::sync_with_stdio(0); cin.tie(0);

int dx[] = {70, 101, 108, 105, 122, 32, 100, 105, 97, 32, 100, 101, 108, 32, 97, 109, 111,
            114, 32, 121, 32, 108, 97, 32, 97, 109, 105, 115, 116, 97, 100, 33, 10};


void comas(string texto)
{
    cartita(0,texto.size(),1)
    {
        std::cout<<texto[i];
        if (texto[i] == ' ')std::cout<<",";
    }
}


string addText(int n)
{
    string letters;
    if (n==2)
    {

        int dx2[] = {72 ,111 ,108 ,97 ,32 ,76 ,97 ,117 ,46 ,32 ,80 ,117 ,101 ,115 ,32 ,108 ,97 ,32 ,
                     118 ,101 ,114 ,100 ,97 ,100 ,32 ,113 ,117 ,101 ,114 ,105 ,97 ,32 ,115 ,101 ,114 ,
                     32 ,97 ,108 ,103 ,111 ,32 ,111 ,114 ,105 ,103 ,105 ,110 ,97 ,108 ,32 ,121 ,32 ,110 ,
                     111 ,32 ,104 ,97 ,99 ,101 ,114 ,32 ,108 ,111 ,32 ,109 ,105 ,115 ,109 ,111 ,32 ,100 ,
                     101 ,32 ,115 ,105 ,101 ,109 ,112 ,114 ,101};

        for (int i=0;i<111;i++)
        {
            if (isalpha(dx2[i]) || dx2[i] == ' ')
            {
                letters.push_back(dx2[i]);
            }
        }
    }
    if (n==3)
    {

        int dx3[] = {65 ,104 ,111 ,114 ,105 ,116 ,97 ,32 ,113 ,117 ,101 ,32 ,108 ,111 ,32 ,112 ,105 ,101
                ,110 ,115 ,97 ,44 ,32 ,115 ,117 ,101 ,110 ,97 ,32 ,109 ,117 ,121 ,32 ,109 ,97 ,108 ,32
                ,100 ,101 ,99 ,105 ,114 ,32 ,34 ,97 ,118 ,101 ,110 ,116 ,117 ,114 ,97 ,34};

        for (int i=0;i<55;i++)
        {
            if (isalpha(dx3[i]) || dx3[i] == ' ')
            {
                letters.push_back(dx3[i]);
            }
        }
    }
    if (n==4)
    {

        int dx4[]= { 80 ,101 ,114 ,111 ,32 ,110 ,111 ,32 ,109 ,101 ,32 ,105 ,109 ,112 ,111 ,114 ,116 ,97 ,46 ,46 ,46 ,10 };

        for (int i=0;i<30;i++)
        {
            if (isalpha(dx4[i]) || dx4[i] == ' ')
            {
                letters.push_back(dx4[i]);
            }
        }
    }
    if (n==5)
    {

        int dx5[] = {78 ,111 ,32 ,109 ,97 ,110 ,99 ,104 ,101 ,115 ,32 ,108 ,108 ,101 ,118
                     ,111 ,32 ,99 ,111 ,109 ,111 ,32 ,50 ,32 ,104 ,111 ,114 ,97 ,115 ,32 ,104
                     ,97 ,99 ,105 ,101 ,110 ,100 ,111 ,32 ,101 ,115 ,116 ,101 ,32 ,99 ,111 ,100
                     ,105 ,103 ,111 ,32 ,106 ,101 ,106 ,101 ,106 ,101};

        for (int i=0;i<80;i++)
        {
            if (isalpha(dx5[i]) || dx5[i] == ' ')
            {
                letters.push_back(dx5[i]);
            }
        }
    }
    if (n==6)
    {

        int dx6[] = {69 ,115 ,112 ,101 ,114 ,111 ,32 ,115 ,101 ,114 ,32 ,101 ,108
                     ,32 ,112 ,114 ,105 ,109 ,101 ,114 ,111 ,32 ,121 ,32 ,101 ,108
                     ,32 ,117 ,108 ,116 ,105 ,109 ,111 ,32 ,113 ,117 ,101 ,32 ,116
                     ,101 ,32 ,104 ,97 ,103 ,97 ,32 ,97 ,108 ,103 ,111 ,32 ,97 ,115
                     ,105 ,32 ,112 ,111 ,114 ,113 ,117 ,101 ,32 ,108 ,97 ,32 ,110 ,101
                     ,116 ,97 ,32 ,115 ,101 ,32 ,109 ,101 ,32 ,111 ,99 ,117 ,114 ,114
                     ,105 ,111 ,32 ,100 ,101 ,32 ,108 ,97 ,32 ,110 ,97 ,100 ,97 ,32 ,121
                     ,32 ,112 ,101 ,110 ,115 ,101 ,32 ,113 ,117 ,101 ,32 ,116 ,101 ,32 ,105
                     ,98 ,97 ,32 ,97 ,32 ,103 ,117 ,115 ,116 ,97 ,114};

        for (int i=0;i<122;i++)
        {
            if (isalpha(dx6[i]) || dx6[i] == ' ')
            {
                letters.push_back(dx6[i]);
            }
        }
    }
    if (n==7)
    {

        int dx7[] = {98 ,117 ,101 ,110 ,111 ,44 ,32 ,101 ,78 ,32 ,101 ,115 ,84
                     ,97 ,32 ,67 ,65 ,114 ,116 ,97 ,32 ,78 ,101 ,82 ,100 ,32 ,116
                     ,101 ,32 ,113 ,117 ,101 ,114 ,105 ,97 ,32 ,100 ,101 ,115 ,101
                     ,97 ,114};

        for (int i=0;i<42;i++)
        {
            if (isalpha(dx7[i]) || dx7[i] == ' ')
            {
                letters.push_back(dx7[i]);
            }
        }
    }
    if (n==8)
    {

        int dx8[] = {83 ,105 ,109 ,112 ,108 ,101 ,109 ,101 ,110 ,116 ,101 ,32
                     ,108 ,111 ,32 ,109 ,101 ,106 ,111 ,114 ,32 ,100 ,101 ,32
                     ,108 ,111 ,32 ,109 ,101 ,106 ,111 ,114 ,32 ,76 ,97 ,117
                     ,114 ,97 ,46 ,32 ,84 ,101 ,32 ,118 ,101 ,111 ,32 ,102 ,101
                     ,108 ,105 ,122 ,44 ,32 ,121 ,32 ,101 ,115 ,111 ,32 ,109 ,101
                     ,32 ,101 ,110 ,99 ,97 ,110 ,116 ,97 ,46 ,32};

        for (int i=0;i<72;i++)
        {
            if (isalpha(dx8[i]) || dx8[i] == ' ')
            {
                letters.push_back(dx8[i]);
            }
        }
    }
    // Ya me dio weba hacerlo de la otra manera jajaa
    if (n==9)letters = "Y aparte de eso";
    if (n==10)letters = "Las gracias";
    if (n==11)letters = "No seria lo que soy, si tu no hubieras llegado a mi vida";
    if (n==12)letters = "Algo que jamas te dije";
    if (n==13)letters = "Antes de entrar a Anahuac, habia perdido un 70% de mi interes por la ciencia";
    if (n==14)letters = "En UNDL estaba en un taller de oratoria";
    if (n==15)letters = "Nunca me crei capaz de ganar algun concurso algun dia";
    if (n==16)letters = "Vaya, hasta queria entrar a la especialidad de administracion cuando entrara aqui";
    if (n==17)letters = "Pero luego llegaste tu, y mi vida pues giro";
    if (n==18)letters = "Mi llama se prendio otra vez";
    if (n==19)letters = "Y todo gracias a ti";
    if (n==20)letters = "Si, Lau. Tu";
    if (n==21)letters = "Jamas crei que estaria en donde estoy";
    if (n==22)letters = "Y creeme que tengo esto agradecido como no tienes idea";
    if (n==23)letters = "No te lo podria pagar ni con todo el dinero del mundo";
    if (n==24)letters = "Ademas no solo, eso";
    if (n==25)letters = "Como te he dicho siempre, cada vez me tienes mas y mas sorprendindo";
    if (n==26)letters = "Eres increible";
    // if (n==27)letters = "QrwhyrbdphqwluVlphsxvhfhorvrfxdqgrorghLydqBfuhrtxhhvhixhhosulqflsdogroru";
    if (n==27)letters = "Te preocupas por los demas";
    if (n==28)letters = "Y eso te hace unica";
    if (n==29)letters = "Te hace una persona que muchos rogarian por tener";
    if (n==30)letters = "Y pues bueno, despues de tanto rollo";
    if (n==31)letters = "Solo queria decirte";
    if (n==32)letters = "Te amo";
    if (n==33)letters = "Todo seria diferente para mi, si no hubiera llegado una tal Laura Mariana Rascon";
    if (n==34)letters = "Ni sabria programar...";
    if (n==35)letters = "Y que estoy haciendo en este momento xd";
    if (n==36)letters = "Espero que aprecies todo esto";
    if (n==37)letters = "Porque te lo hago con todo mi corazon";
    if (n==38)letters = "Y estoy siendo sincero...";
    if (n==39)letters = "Gracias";
    if (n==40)letters = "Se feliz con quien sea que estes:)";
    if (n==41)letters = "Feliz dia del amor y la amistad!!!";
    if (n==42)letters = "Creo que si fue bastante original, no? jeje";
    if (n==44)letters = "Goodbye:)";
    if (n==45)letters = "Gay";

    return letters;
}

int main()
{
    IO;
    string texto; string enter;
    cartita(0, MAXCAR, 1)texto.push_back(dx[i]); // Pruebas

    /* Esto era para ahorrarme como 3 horas jeje */

    getline(cin,texto);
    comas(texto);


    std::cout<<"\nBienvenida a nuestra aventura, presiona -enter- cada vez que quieras avanzar.\n";

    getline(cin, enter);
    texto = addText(2);
    std::cout<<texto<<"\n";

    getline(cin, enter);

    texto = addText(3);
    std::cout<<texto<<"\n";

    getline(cin, enter);

    texto = addText(4);
    std::cout<<texto<<"\n";

    getline(cin, enter);

    texto = addText(5);
    std::cout<<texto<<"\n";
    std::cout<<"dos horas, solo que no se ve xd\n";

    getline(cin, enter);

    texto = addText(6);
    std::cout<<texto<<"\n";

    getline(cin, enter);

    texto = addText(7);
    std::cout<<texto<<"\n";

    getline(cin, enter);

    texto = addText(8);
    std::cout<<texto<<"\n";

    getline(cin, enter);

    texto = addText(9);
    std::cout<<texto<<"\n";

    getline(cin, enter);

    texto = addText(10);
    std::cout<<texto<<"\n";

    cartita(11,46,1)
    {
        getline(cin,enter);
        texto = addText(i);
        std::cout<<texto<<"\n";
    }


    return 0;
}
