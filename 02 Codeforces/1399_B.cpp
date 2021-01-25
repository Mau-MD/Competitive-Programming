#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 52

int n;

ll minC = 10000000002;
ll minO = 10000000002;


void solve()
{
  int n;
  cin>>n;
  ll o[n];
  ll c[n];

    ll minC = 10000000002;
    
    ll minO = 10000000002;
  for (int i=0;i<n;i++)
  {
      cin>>c[i];
      minC = min(minC,c[i]);
  }

  for (int i=0;i<n;i++)
  {
      cin>>o[i];
      if (o[i] < minO)minO = o[i];
  }

  //Priorizar el doble
  ll steps = 0;

  for (int i=0;i<n;i++)
  {
      // Distancia maxima desde ahi hasta objetivo
      //cout<<"1 "<<c[i] - minC<<" 2 "<<o[i]-minO<<endl;
      if (c[i] - minC < o[i] - minO)
      {
          int minSteps = c[i] - minC;
         //cout<<"minSteps1 "<<minSteps<<endl;
          steps += (minSteps) + (o[i] - minO - minSteps);
      }
      else if (o[i] - minO < c[i] - minC)
      {
          int minSteps = o[i] - minO;
       // cout<<"minSteps2"<<minSteps<<endl;

          steps += (minSteps) + (c[i] - minC - minSteps);
      }
      else
      {
          steps += o[i] - minO;
      }
    //  cout<<"Steps"<<steps<<endl;
  }


  cout<<steps<<endl;
  //  cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}