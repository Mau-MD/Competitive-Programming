#include <bits/stdc++.h>

int main()
{
    string a;
    getline(cin,a);

    bool last = false;
    for (int i=0;i<a.size();i++)
    {
        if (a[i] == ' ' || !isalpha(a[i]))continue;
        int up = rand() % 3;
        if ((up == 1 || up == 2) && !last)a[i] = toupper(a[i]), last = true;
        else tolower(a[i]), last = false;
    }
    cout<<a;
    return 0;
}
