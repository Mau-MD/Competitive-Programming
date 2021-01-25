#include <iostream>
#include <cmath>
using namespace std;

//Un poquito mas de orden
struct Coordenadas
{
    int x1;
    int y1;
    int x2;
    int y2;
    Coordenadas(int x1_1, int y1_1, int x2_1, int y2_1):x1(x1_1), y1(y1_1), x2(x2_1), y2(y2_1){}
};

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Coordenadas cancha1(x1,y1,x2,y2);
    cin>>x1>>y1>>x2>>y2;
    Coordenadas cancha2(x1,y1,x2,y2);
    double area_total;

    // Calculo de las areas
    double a_cancha1 = (cancha1.x2 - cancha1.x1) * (cancha1.y2 - cancha1.y1);
    double a_cancha2 = (cancha2.x2 - cancha2.x1) * (cancha2.y2 - cancha2.y1);


    // Si estan separados totalmente
    if (cancha2.x1 >= cancha1.x1 && cancha2.y1 >= cancha1.y1 && cancha2.x2 >= cancha1.x2 && cancha2.y2 >= cancha1.y2)
    {
        area_total = a_cancha1 + a_cancha2;
    }
    if (cancha2.x1 <= cancha1.x1 && cancha2.y1 <= cancha1.y1 && cancha2.x2 <= cancha1.x2 && cancha2.y2 <= cancha1.y2)
    {
        area_total = a_cancha1 + a_cancha2;
    }

    // Si estan dentro del otro
    if (cancha2.x1 >= cancha1.x1 && cancha2.y1 >= cancha1.y1 && cancha2.x2 <= cancha1.x2 && cancha2.y2 <= cancha1.y2)
    {
        area_total = a_cancha1;
    }
    if (cancha2.x1 <= cancha1.x1 && cancha2.y1 <= cancha1.y1 && cancha2.x2 >= cancha1.x2 && cancha2.y2 >= cancha1.y2)
    {
        area_total = a_cancha2;
    }

    // Si se tocan en la esquina superior derecha
    if (cancha2.x1 < cancha1.x2 && cancha2.y1 < cancha1.y2 && cancha2.x1 > cancha1.x1 && cancha2.y1 > cancha1.y1 &&
    cancha2.x2 > cancha1.x2 && cancha2.y2 > cancha1.y2)
    {
        area_total = a_cancha1 + a_cancha2 - ((abs(cancha1.x2 - cancha2.x1)) * abs(cancha1.y2 - cancha2.y1));
    }
    if (cancha2.x1 > cancha1.x2 && cancha2.y1 > cancha1.y2 && cancha2.x1 < cancha1.x1 && cancha2.y1 < cancha1.y1 &&
        cancha2.x2 < cancha1.x2 && cancha2.y2 < cancha1.y2)
    {
        area_total = a_cancha1 + a_cancha2 - ((abs(cancha1.x2 - cancha2.x1)) * abs(cancha1.y2 - cancha2.y1));
    }

    // Si se tocan en la esquina superior izquierda
    if (cancha2.x1 < cancha1.x1 && cancha2.y1 > cancha1.y1 && cancha2.x2 > cancha1.x1 && cancha2.y2 > cancha1.y2 &&
        cancha2.x2 < cancha1.x2)
    {
        area_total = a_cancha1 + a_cancha2 - ((abs(cancha2.x2 - cancha1.x1)) * abs(cancha1.y2 - cancha2.y1));
    }
    if (cancha2.x1 > cancha1.x1 && cancha2.y1 < cancha1.y1 && cancha2.x2 < cancha1.x1 && cancha2.y2 < cancha1.y2 &&
        cancha2.x2 > cancha1.x2)
    {
        area_total = a_cancha1 + a_cancha2 - ((abs(cancha2.x2 - cancha1.x1)) * abs(cancha1.y2 - cancha2.y1));
    }

    cout<<area_total;







    return 0;
}
