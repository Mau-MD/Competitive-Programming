#include<bits/stdc++.h>
using namespace std;

vector<int>izq,der;
priority_queue<int>m;
vector<string>ans;

void take(string val)
{
    if (val == "izq")
    {
        int aux = izq.back();
        der.push_back(aux);
        izq.pop_back();
        ans.push_back("UZMI L L");
        ans.push_back("STAVI L D");


    }
    else
    {
        int aux = der.back();
        izq.push_back(aux);
        der.pop_back();
        ans.push_back("UZMI L D");
        ans.push_back("STAVI L L");

    }
    
}

int rightHand;

void take2(string val)
{
    if (val == "izq")
    {
        rightHand = izq.back();
        izq.pop_back();
        ans.push_back("UZMI D L");
    }
    else
    {
        rightHand = der.back();
        der.pop_back();
        ans.push_back("UZMI D D");
    }
    
}

void put()
{
    der.push_back(rightHand);
    ans.push_back("STAVI D D");
}

int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int d; cin>>d;
        izq.push_back(d);
        m.push(d);
    }

    reverse(izq.begin(),izq.end());
    int sizze = 0;

    while(!izq.empty())
    {
        int obj = m.top();
        m.pop();
        while(true)
        {
            int now = izq.back();
            if (now == obj)break;
            take("izq");
            izq.pop_back();
        }
        take2("izq");
        while(true)
        {
            if (der.empty())break;
            if (der.size() == sizze)break;
            take("der");
            der.pop_back();
        }
        put();
        sizze++;
    }

    for (auto x:ans)cout<<x<<endl;
    return 0;
}