#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	// Buscar longitud de string
	int length = 0;
	int dist = 0;
	int ans = 0;

	while (true) // Consigue la length de la substrings
	{
		while (s[dist]=='*')dist++;
		if (dist >= n)break;
		int i;
		for (i=dist;i<n;i++)
		{
			if (s[i] == '*')break;
			length++;
		}
		dist = i;

		// Aqui empiezo a trbajar
		// Si es par, puedo poner de los dos
		int da,db;
		if (length % 2 == 0)
		{
			da = min(a,length/2);
			db = min(b,length/2);
		}
		else // Impar -> priorizar el mas grande
		{
			if (a > b) // Entonces coloco primero el a
			{
				// 5 -> ABABA
				da = min(a,(length + 1)/2);
				db = min(b,length/2);
			}
			else
			{
				da = min(a,length/2);
				db = min(b, (length + 1) /2);
			}
		}

		//cout<<da<<" "<<db<<endl;
		a -= da; b -= db;
		ans += da + db;

		//cout<<length<<endl;
		length = 0;
	}

	cout<<ans;

	return 0;
}