#include <iostream>
#define MAX 1000002
using namespace std;

bool criba[MAX];

void generarCriba()
{
    for (int i=2;i * i < MAX; i++)
    {
        if (criba[i])
        {
            for (int j = i; j < MAX/ i; j++)
            {
                criba[i * j] = false;
            }
        }
    }
    criba[1] = false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    memset(criba,true,MAX);
    generarCriba();

    while (true)
    {
        int n;
        cin >> n;
        if (n==0)break;
        int i = n - 2, j = 2;
        while (true)
        {
            if (i + j > n)i--;
            else if (i + j == n)
            {
                if (criba[i] && criba[j])
                {
                    cout <<n<<" = "<< j << " + " << i << endl;
                    break;
                }
                i--;
            } else if (i + j < n)j++;
        }

    }

    return 0;
}
