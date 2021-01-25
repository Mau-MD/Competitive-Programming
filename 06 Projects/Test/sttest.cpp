#include <bits/stdc++.h>
using namespace std;

int gdc(int a,int b)
{
	while (b) { a %= b; swap(a,b);}
	return a;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gdc(a,b);

	return 0;
}