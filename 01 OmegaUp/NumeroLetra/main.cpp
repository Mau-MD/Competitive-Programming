#include <iostream>
#include <string>

using namespace std;
/**
 * Esta funcion divide el numero en segmentos de 3 digitos
 * @param grupo el arreglo donde se va a guardar los digitos
 * @param numero el numero que vamos a dividir
 * @return el tamano del arreglo
 */
int dividir_en_segmentos(int grupo[], long long int numero)
{
    long long int i = 0;
    while (numero > 0)
    {
        grupo[i] = numero % 1000;
        numero = numero / 1000;
        i++;
    }
    return i;
}
/**
 * Esta funcion toma como base un numero de 3 digitos y lo nombra. Hay excepciones. Si solo tiene como unidades
 * un 1 y esta en la posicion 1 (pertenece a los miles), no nombra nada. Si tiene una posicion arriba de uno,
 * entonces en vez de decir "uno", dice "un" y asi.
 * @param texto la variable donde vamos a guardar el texto escrito
 * @param numero el numero que vamos a nombrar
 * @param posicion la posicion que indica si son miles, millones, trillones, etc
 * @param plural variable de referencia que nos permitira saber si es plural el numero o no
 * @return el texto ya escrito
 */
string numero_a_texto(string texto, long long int numero, int posicion, bool& plural)
{

    string centenas_texto[] = {"","cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos",
                               "setecientos", "ochocientos", "novecientos"};
    string decenas_texto[] = {"","","","treina", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string menor_de_30[] = {"","uno", "dos", "tres", "cuatro", "cinco" , "seis", "siete", "ocho", "nueve",
                            "diez" , "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete",
                            "dieciocho", "diecinueve", "veinte", "veintiuno", "veintidos", "veintitres",
                            "veinticuatro", "veinticinco", "veintiseis", "veintisiete", "veintiocho",
                            "veintinueve"};


    long long int centenas = numero / 100;
    long long int restante = numero % 100;
    long long int decenas = restante / 10;
    long long int unidades = restante % 10;

    if (unidades == 1 && decenas == 0 && centenas == 0)
    {
        plural = false;
    } else
    {
        plural = true;
    }

    if (!(centenas == 0 && decenas == 0 && unidades == 1 && posicion == 1)) //Si el numero total es 1,000 no hacemos nada
    {
        if (centenas > 0)
        {
            if (centenas == 1 && (unidades!= 0 || decenas != 0)) // Si 100 < x < 200
            {
                texto = texto + "ciento ";
            }
            else
            {
                texto = texto + centenas_texto[centenas] + " ";
            }
        }
        if (restante < 30) // Si el numero restante es menor a 30
        {
            if (posicion > 1 && unidades == 1) // Si estamos en las posiciones de millones o mas
            {
                texto = texto + "un ";
            }
            else
            {
                texto = texto + menor_de_30[restante] + " ";
            }
        }
         else
        {

            if (decenas > 0)
            {
                texto = texto + decenas_texto[decenas] + " ";
            }
            if (decenas > 0 && unidades > 0)
            {
                texto = texto + "y ";
            }
            if (unidades > 0)
            {
                texto = texto + menor_de_30[unidades] + " ";
            }

        }
    }
    return texto;
}

/**
 * Esta funcion le agrega el peso correspondiente a la posicion que se encuentra: pos 1 - mil , pos 2 - millones, etc
 * @param plural si el numero es plural o no
 * @param texto el texto donde se almacena lo escrito
 * @param posicion la posicion que determina si es mil, millones, trillones, etc.
 * @param grupo el arreglo de los segmentos que nos permite saber si es mayor a 0 o no
 * @return el texto con el peso correspondiente
 */
string agregar_peso(bool plural, string texto, long long int posicion, int grupo[])
{
    string pesos_singular[] = {"", "mil", "millon", "billon", "trillon", "cuatrillon", "quintillon"};
    string pesos_plural[] = {"", "mil", "millones", "billones", "trillones", "cuatrillones", "quintillones"};

    if (plural && grupo[posicion] > 0)
    {
        texto =  texto + pesos_plural[posicion] + " ";
    }
    else if (!plural && grupo[posicion] > 0)
    {
        texto =  texto + pesos_singular[posicion] + " ";
    }

    return texto;
}

/**
 * Utiliza las funciones anteriores para generar el texto dado un numero
 * @param numero El numero que queremos generar
 * @return el numero completo en texto
 */
string base(long long int numero)
{
    string texto = ""; //Inicializamos la variable donde vamos a almacenar el numero
    int segmentos[100]; // Inicializamos donde vamos a guardar los segmentos de tres
    bool plural; // Una variable que nos permitira saber si el numero es plural o singular
    long long int i = dividir_en_segmentos(segmentos,numero);
    for (i=i-1; i>=0;i--)
    {
        texto = numero_a_texto(texto,segmentos[i],i, plural);
        texto = agregar_peso(plural, texto, i, segmentos);
        }
    return texto;
}



int main()
{
    long long int numero;
    cin>>numero;
    string texto = base(numero);
    cout<<texto;
    return 0;
}
