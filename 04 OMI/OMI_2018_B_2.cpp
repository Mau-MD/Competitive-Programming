#include<bits/stdc++.h>
#define MAX 10000002
using namespace std;


int n, d, querries;
bitset<MAX>v;

bool isCycleUtil(vector<int> list[], int current)
{
    if (v[current])return true;

    v[current] = true;
    bool flag = false;
    for (int i=0;i<list[current].size();i++)
    {
        flag = isCycleUtil(list,list[current][i]);
        if (flag == true)
        {
            return true;
        }
    }
    return false;
}


void isCycle(vector<int> list[])
{
    bool flag = false;
    for (int i=0;i<n;i++) // Voy a pasar por todos los nodos
    {
        if (v[i])continue;
        v[i] = true;
        for (int j=0;j<list[i].size();j++)
        {
            flag = isCycleUtil(list,list[i][j]);
            if (flag == true)
            {
                break;
            }
        }
        if(!flag)v[i] = false;
    }
}


/*
bool cicle(int n, vector<int> list[], bool v[])
{
    stack<int>Cola;
    Cola.push(n);
    while(!Cola.empty())
    {
        int now = Cola.top();
        Cola.pop();
        if (v[now])return true;
        v[now] = true;
        for (int i=0;i<list[now].size();i++)
        {
            Cola.push(list[now][i]);
        }
    }
    return false;
}
*/


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>d>>querries;
    vector<int>list[n];
    for (int i=0;i<d;i++)
    {
        // que puerta y a que conecta
        int p; // indice
        cin>>p;
        int cuantas;
        cin>>cuantas;
        for (int j=0;j<cuantas;j++)
        {
            int dato;
            cin>>dato;
            list[p].push_back(dato);
        }
    }

    isCycle(list);

    bool flag = false;
    for (int i=0;i<querries;i++)
    {
        int q;
        cin>>q;
        for (int j=0;j<q;j++)
        {
            int dato;
            cin>>dato;
            if (!flag && v[dato])
            {
                cout<<"N"<<endl;
                flag = true;
            }
        }
        if (!flag)
        {
            cout<<"S"<<endl;
        }
    }
    /*
    for (int i=0;i<querries;i++)
    {
        bool flag = false;
        int q;
        cin>>q;
        for (int i=0;i<q;i++)
        {
            bool v[MAX];
            memset(v,false,sizeof(v));

            int dato;
            cin>>dato;
            cout<<dato<<" ";
            cout<<cicle(dato,list,v);
            if (!flag && cicle(dato, list, v))
            {
                flag = true;
                cout<<"N"<<endl;
            }
        }
        if (flag)
        {
            cout<<"Y"<<endl;
        }
    }
*/

    return 0;
}