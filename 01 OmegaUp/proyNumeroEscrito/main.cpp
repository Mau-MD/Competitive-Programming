#include <iostream>
#include <string>

using namespace std; //729

void centenas (int n, string& base, int unidades, int decenas)
{
    if ((unidades!=0 || decenas!=0) && n==1)
    {
        base = "ciento";
    }
    else if (n==1)
    {
        base = "cien";
    }

    switch (n)
    {
        case 2: base = "doscientos"; break;
        case 3: base = "trescientos"; break;
        case 4: base = "cuatrocientos"; break;
        case 5: base = "quinientos"; break;
        case 6: base = "seiscientos"; break;
        case 7: base = "setecientos"; break;
        case 8: base = "ochocientos"; break;
        case 9: base = "novecientos"; break;
    }

}

void decenas (int n, string& base, int unidades)
{
    if (n==2 && unidades!=0)
    {
        base += " veinti ";
    }
    else if (n==2){
        base +=" veinte";
    }

    switch (n)
    {
        case 1: base += "diez"; break;
        case 3: base += " treinta"; break;
        case 4: base += " cuarenta"; break;
        case 5: base += " cincuenta"; break;
        case 6: base += " sesenta"; break;
        case 7: base += " setenta"; break;
        case 8: base += " ochenta"; break;
        case 9: base += " noventa"; break;
    }

}

void unidades (int n, string& base)
{
    switch (n)
    {
        case 1: base += " uno"; break;
        case 2: base += " dos"; break;
        case 3: base += " tres"; break;
        case 4: base += " cuatro"; break;
        case 5: base += " cinco"; break;
        case 6: base += " seis"; break;
        case 7: base += " siete"; break;
        case 8: base += " ocho"; break;
        case 9: base += " nueve"; break;
    }

}
void especiales (int n, string& base)
{
    switch (n)
    {
        case 11: base += " once"; break;
        case 12: base += " doce"; break;
        case 13: base += " trece"; break;
        case 14: base += " catorce"; break;
        case 15: base += " quince"; break;
    }

}

int main()
{
    int n, xcentenas=0, xdecenas=0, xunidades=0;string base;
    cin>>n; // 712

        xcentenas = n / 100;

        n %= 100;

        xdecenas = n / 10;

        int aux = n;

        xunidades = n % 10;


    centenas(xcentenas, base, xunidades, xdecenas);

    if (aux>=11 && aux<=15)
    {
        especiales(aux,base);
    }
    else
    {
        decenas(xdecenas, base, xunidades);

        if (n % 10 != 0 && n >= 16) {
            base += " y";
        }
        unidades(xunidades, base);

    }


    cout<<base;




    return 0;
}