#include <bits/stdc++.h>
using namespace std;
const int maxN = 32;
int mat[maxN][maxN];

int n,m,x;

double distance(int y1, int x1, int y2, int x2)
{
    return sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
}

int main()
{
    cin>>n>>m>>x;
    set<int>exist;
    vector<pair<int,int>>shifts;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            exist.insert(mat[i][j]);
            if (mat[i][j] == 'S')shifts.push_back(make_pair(i,j));
        }
    }

    int q;
    cin>>q;
    string a;
    cin>>a;

    int ans = 0;
    for (int i=0;i<q;i++)
    {
        if (!exist.count(a[i]))
        {
            cout<<"-1";
            return 0;
        }
        if (isupper(a[i])) // Upper case
        {
            bool flag = false;
            for (int j=0;j<n;j++)
            {
                for (int k=0;k<m;k++)
                {
                    if (mat[j][k] == a[i]) // Encontre un candidato
                    {
                        // Buscar si hay un shift a menos de x 
                        for (auto y:shifts)
                        {
                            double dis = distance(j,k,y.first,y.second);
                            if (dis <= x) // Si puedo presionar la tecla sin shift...
                            {
                                flag = true;
                                break;
                            }
                        }
                    }
                    if (flag)break;
                }
                if (flag)break;
            }

            if (!flag)ans++;
        }
    }

    cout<<ans;



    return 0;
}