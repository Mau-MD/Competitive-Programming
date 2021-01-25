#include <iostream>
#include <iomanip>
using namespace std;

void money(float n)
{
    cout<< fixed<< setprecision(2) << "$" <<n;
}

int main() {
    float n;
    cin>>n;
    money(n);

    return 0;
}