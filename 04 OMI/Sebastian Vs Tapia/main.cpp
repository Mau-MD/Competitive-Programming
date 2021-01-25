#include <bits/stdc++.h>
using namespace std;

vector<string>duplas;
char mat[21][21];
int u;

bool solve(int i, int j)
{
	if (i>=u)return true;
	for (int x=0;x<26;x++) // Todas las letras
	{
		mat[i][j] = x + 'a';
		//cout<<mat[i][j]<<endl;
		bool flag = false;
		//cout<<endl;
		for (int y = 0; y<duplas.size();y++) // Checar si hay una dupla mala
		{	
			//cout<<duplas[y][0]<<duplas[y][1]<<endl;
			// Bordes
			if (j == 0 && i == 0)
			{
				continue;
			}
			else if (j==0)
			{
				if (mat[i-1][j] == duplas[y][0] && mat[i][j] == duplas[y][1])
				{
					flag = true;
					break;
				}
				continue;
			}
			else if (i == 0)
			{

				cout<<i<<" "<<j<<"  "<<mat[i][j-1]<<" "<<mat[i][j]<<"  "<<duplas[y][0]<<" "<<duplas[y][1]<<endl;

				if (mat[i][j-1] == duplas[y][0] &&  mat[i][j] == duplas[y][1])
				{
					flag = true;
					break;
				}
				continue;
			}



			if ((mat[i][j-1] == duplas[y][0] && mat[i][j] == duplas[y][1]) || 
			(mat[i-1][j] == duplas[y][0] && mat[i][j] == duplas[y][1]))// Si si hay una dupla
			{
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			if (j == u-1)
			{
				if(solve(i+1,0))
				{
					return true;
				}
			}
			else if (solve(i,j+1))
			{
				return true;
			}
		}
		mat[i][j] = '1';
	}
}

// Buscar una combinacion de dos letras donde no existan ambas duplas


void buscaCombinacion()
{
	for (int i=0;i<26;i++)
	{
		char first = i + 'a';
		for (int j=0;j<26;j++)
		{	
			char second = j + 'a';

			cout<<first<<second<<endl;
			// buscar si es valida
			bool existe = false;
			for (int k=0;k<duplas.size();k++)
			{
				if ((first == duplas[k][0] && second == duplas[k][1]) || 
					first == duplas[k][1] && second == duplas[k][0])
				{
					existe = true;
					break;
				}
			}
			if (!existe)
			{
				// ya tengo mi combinacion
				for (int k=0;k<u;k+=2)
				{
					for (int l=0;l<u;l++)
					{
						if (l % 2 == 0)mat[k][l] = first;
						else mat[k][l] = second;
					}
				}

				for (int k=1;k<u;k+=2)
				{
					for (int l=0;l<u;l++)
					{
						if (l % 2 == 0)mat[k][l] = second;
						else mat[k][l] = first;
					}
				}

				return;
			}

		}
	}
}



int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		duplas.push_back(a);
	}
	cin>>u;
	solve(0,0);
	for (int i=0;i<u;i++)
	{
		for (int j=0;j<u;j++)
		{
			cout<<mat[i][j];
		}
		cout<<endl;
	}


	return 0;
}