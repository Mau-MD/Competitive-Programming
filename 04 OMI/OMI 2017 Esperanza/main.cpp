#include <bits/stdc++.h>
using namespace std;

int n;
string a;

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

set<pair<int,int>>taken;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>n>>a;


	int x = 0, y = 0;
	int lastX, lastY;	
	for (int i=0;i<n;i++)
	{
		lastX = x;
		lastY = y;
		if (a[i] == 'U')
		{
			taken.insert({x, ++y});
		}
		else if (a[i] == 'D')
		{
			taken.insert({x, --y});
		}
		else if (a[i] == 'L')
		{
			taken.insert({--x, y});
		}
		else if (a[i] == 'R')
		{
			taken.insert({++x, y});
		}
		for (int j=0;j<4;j++)
		{
			int ax = x + dx[j];
			int ay = y + dy[j];
			if ((ax != lastX || ay!= lastY) && taken.count({ax, ay}))
			{
				cout<<"N";
				return 0;
			}
		}
	}

	/*
	for (auto x:taken)
	{
		cout<<x.first.first<<" "<<x.first.second<<endl;
	}
	*/
	cout<<"S";

	


	return 0;
}