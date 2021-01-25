#include <bits/stdc++.h>
using namespace std;

int solve(int n,int m,int j)
{
    int esquina_izquierda = 0;
    int esquina_derecha = m-1;

    int ans = 0;

    for (int i=0;i<j;i++)
    {
        int posicion_de_caida;
        cin>>posicion_de_caida;
        posicion_de_caida--;

        if (m == 1)
        {
            ans+= abs(posicion_de_caida - esquina_derecha);
            esquina_derecha = posicion_de_caida;
            continue;
        }
        if (posicion_de_caida >= esquina_izquierda && posicion_de_caida <= esquina_derecha)
        {
            continue;
        }
        int movIzquierda = abs(esquina_izquierda - posicion_de_caida);  // Sin contar la pared
        int movDerecha = abs(esquina_derecha - posicion_de_caida);
       // cout<<"movIzquierda "<<movIzquierda<<endl;
      //  cout<<"movDerecha "<<movDerecha<<endl;

        if (movIzquierda < movDerecha) // Nos movemos hacia la derecha
        {
            esquina_izquierda -= movIzquierda;
            esquina_derecha -=movIzquierda;

            if (esquina_izquierda < 0)
            {
                int regreso = abs(esquina_izquierda);
                esquina_izquierda+=regreso;
                esquina_derecha+=regreso;
                ans+=(movIzquierda - regreso);
            }
            else
            {
                ans+=movIzquierda;
            }
        }
        else 
        {
          esquina_derecha += movDerecha;
          esquina_izquierda += movDerecha;  

          if (esquina_derecha >= n)
          {
              int regreso = esquina_derecha - n + 1;
              esquina_derecha -= regreso;
              esquina_izquierda -= regreso;
              ans+= (movDerecha - regreso);
          }
          else
          {
              ans+=movDerecha;
          }
        }
        
    }
    return ans;
}

int main()
{
    int n,m; // m es el bote
    cin>>n>>m;
    int j;
    cin>>j;
    cout<<solve(n,m, j);


}
long long int gas_restante;
    long long int r;
    for (long long int x=0;x<preguntas;x++)
    {
        cin>>gas_restante;
        long long int i=1, j=numero, medio;
        while (i<=j)
        {

            if (j-i < 2)
            {
                if (gasolina[j-1] <= gas_restante)
                {
                    r = (long long int) gas_restante - gasolina[j-1];
                    cout << (long long int) j << " " << (long long int) r << "\n";
                    break;
                }
                else if (gasolina[i-1] <=gas_restante)
                {
                    r = (long long int) gas_restante - gasolina[i-1];
                    cout<<(long long int) i<<" "<<(long long int) r<<"\n";
                    break;
                }
                else
                {
                    cout<<"0 "<<(long long int) gas_restante<<"\n";
                    break;
                }
            }
            medio = (long long int) ((i+j)/2);
            if (gasolina[medio-1] == gas_restante)
            {
                r = (long long int) gas_restante - gasolina[medio-1];
                cout<<(long long int) medio<<" "<<(long long int) r<<"\n";
                break;
            }
            else if (gasolina[medio-1] > gas_restante)
            {
                j = medio;
            }
            else
            {
                i = medio ;
            }

        }
    }