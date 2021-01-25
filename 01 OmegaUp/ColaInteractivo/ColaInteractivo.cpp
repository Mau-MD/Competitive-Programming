#include "ColaInteractivo.h"
#include <bits/stdc++.h>
using namespace std;
queue<int>cola;
void agrega(int n) {
    	cola.push(n);
}

int saca() {
    if (cola.empty()) {
        return -1;
    }
    else {
        int aux = cola.front();
        cola.pop();
        return aux;
    }

}