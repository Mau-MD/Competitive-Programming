#include <stdio.h>

#define INF (1 << 30)
#define MAXN 500000
#define LOGN 20

struct pizza{
    int padre[LOGN];
    int diametro;
    int visibles;
} P[MAXN];

int logaritmo(int n){
    for(int i = 0; true; i++)
        if(n <= 1 << i) return i;
}

void apilar(int d, int p){
    int u = p - 1;
    int log = logaritmo(p);

    if(P[u].diametro <= d){
        for(int i = log; i >= 0; i--)
            if(P[P[u].padre[i]].diametro <= d)
                u = P[u].padre[i];

        for(int i = 0; i <= log; i++)
            P[p].padre[i] = P[u].padre[i];
    }
    else {
        P[p].padre[0] = u;
        for(int i = 1; i <= log; i++){
            P[p].padre[i] = P[u].padre[i - 1];
            u = P[u].padre[i - 1];
        }
    }

    u = P[p].padre[0], P[p].diametro = d;
    P[p].visibles = P[u].visibles + 1;
}

int main(){
    int n, d, ins;
    scanf("%d", &n);

    int pizzas = 0;
    P[0].diametro = INF;

    for(int i = 0; i < n; i++){
        scanf("%d", &ins);
        if(ins != 0) scanf("%d", &d);

        switch(ins){
            case 0: printf("%d\n", P[pizzas].visibles); break;
            case 1: apilar(d, ++pizzas); break;
            case 2: pizzas -= d;
        }
    }

    return 0;
}