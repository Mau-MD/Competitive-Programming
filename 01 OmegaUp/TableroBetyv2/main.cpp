#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<deque<int>>a;
    deque<int>temp = {1,2,3};
    a.resize(3);
    a[0].resize(3);
    a[1].resize(3);
    a[2].resize(3);
    temp = {3,2,1};
    a.push_back(temp);
    deque<int>::iterator iter = a[0].begin();
    deque<int>::iterator end = a[0].end();
    a[0].erase(iter, end);

    for (int i=0;i<a.size();i++)
    {
        for (int j=0;j<a[0].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
