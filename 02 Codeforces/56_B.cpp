#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int high = 0,low = 0;
    bool found = false;
    for (int i=0;i<n;i++)
    {
        if (a[i] != i+1)
        {
            if (found)
            {
                cout<<"0 0";
                return 0;
            }
            
            // que numero es 
            int indexActual = a[i]; // 4
            //longitud = 2 - 0
            if (a[indexActual - 1] != i+1)
            {
                cout<<"0 0";
                return 0;
            }

            int l = indexActual - i;


            // si en el index esta este numero

            int s;

            if (l%2 == 1)
            {
                s = l / 2 + 1;
                for (int j=i, k = a[i]-1;j<s;j++, k--)
                {
                    // 1 4 3 2 5
                    //   ^   ^
                //    cout<<a[k]<<" "<<j+1<<endl;
                    if (a[k] != j + 1)
                    {
                        cout<<"0 0";
                        return 0;
                    }
                }

                low = i + 1;
                high = a[i];
                found = true;
            }

            else 
            {
                s = l / 2;
                for (int j=i, k = a[i]-1;j<s;j++, k--)
                {
                    // 1 4 3 2 5
                    //   ^   ^
        //            cout<<a[k]<<" "<<j+1<<endl;
                    if (a[k] != j + 1)
                    {
                        cout<<"0 0";
                        return 0;
                    }
                }
                low = i + 1;
                high = a[i];
                found = true;
            }

            i = high-1;
            //cout<<i<<endl;
           
        }

    }

    cout<<low<<" "<<high;

    return 0;
}