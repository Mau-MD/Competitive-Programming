#include <bits/stdc++.h>
#define ar array
using namespace std;
using ll = long long int;


int main()
{
    int n;
    cin>>n;

    vector<ar<int,3>>v;

    for (int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b,i});
    }

    sort(v.begin(), v.end());
    priority_queue<ar<int,2>>heap;
    int ans[n];
    int room = 0;
    int maxx = -1;
    for (int i=0;i<n;i++)
    {
        if (heap.empty()) // al inicio
        {
            room = 1;
            heap.push({-v[i][1], room});
            ans[v[i][2]] = room;
            maxx = max(maxx, room);
        }
        else
        {
            if (v[i][0] <= -heap.top()[0]) // Necesito agregar un cuarto
            {
                room++;
                heap.push({-v[i][1], room});
                ans[v[i][2]] = room;
                maxx = max(maxx,room);
            }
            else // Agarro uno desocupado
            {
                ar<int,2> now = heap.top();
                heap.pop();
                ans[v[i][2]] = now[1];
                heap.push({-v[i][1],now[1]});
                maxx = max(maxx,now[1]);
            }
        }
    }

    cout<<maxx<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
