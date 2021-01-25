#include <iostream>
using namespace std;
int main () {
    int n,chocolates[1000],dias=1,i,fin=0,total=0,pos1,pos2,mayor;

    cin>>n;
    for (i=0;i<n;i++) {
        cin>>chocolates[i];
        mayor=i;
    }
    pos1=0;
    pos2=mayor;

    do {
        if (chocolates[pos1]<chocolates[pos2]) {
            total+=(chocolates[pos1]*dias);
            pos1++;
            fin++;

        }
        else if (chocolates[pos2]<chocolates[pos1]) {
            total+=(chocolates[pos2]*dias);
            pos2--;
            fin++;

        }
        else if (chocolates[pos1]==chocolates[pos2]) {
            if (chocolates[pos1+1]<chocolates[pos2-1]) {
                total = total+ (chocolates[pos1] * dias);
            }
            else if (chocolates[pos1+1]>chocolates[pos2-1]) {
                total=total+(chocolates[pos2]*dias);
            }
            else {
                total=total+(chocolates[pos1]*dias);
            }

            pos1++;
            fin++;
        }
        dias++;

    } while (fin!=n);

cout<<total;






    return 0;
}