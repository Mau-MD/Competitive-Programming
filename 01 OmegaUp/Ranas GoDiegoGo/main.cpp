    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        double ar[n];
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        double res = 0;
        double inc = ar[0], ninc = 0, aux;

        for (int i=1;i<n;i++)
        {
            aux = inc;
            if (inc < ninc + ar[i])inc = ninc + ar[i];
            ninc = aux;
        }
        cout<<fixed<<setprecision(1)<<inc;
        return 0;
    }
