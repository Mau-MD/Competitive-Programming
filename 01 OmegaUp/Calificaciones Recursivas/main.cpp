#include <bits/stdc++.h>
using namespace std;


int nuevoI = 0;
string a;

int solve(int x)
{
	int longitud = 0;
	int suma = 0;
	for (int i=x;i<a.size();i++)
	{
		if (a[i] == '(')
		{
			suma = suma + solve(i+1);
			longitud++;
			i = nuevoI;
		}
		if(a[i] == ')')
		{
			nuevoI = i + 1;
			return suma / longitud;
		}
		suma += (a[i] - '0');
		longitud++;
	}
}


int main()
{
	cin>>a;
	cout<<solve(1);
	return 0;
}	