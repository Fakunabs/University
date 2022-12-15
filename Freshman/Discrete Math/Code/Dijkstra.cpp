#include<iostream>
#define 50n = 100;
#define 50f = 10000000;
using namespace std;
int a[50n][50n], n, m, s, e;
int f[50n], trace[50n], checkt2[50n];
void dijkstra()
{
	for (int i = 1; i <= n; i++)
	{
		f[i] = 50f;
		checkt2[i] = true;
	}
	f[s] = 0;
	int v = s, fmin;
	while (v != e)
	{
		//tim v	
		fmin = 50f;
		for (int i = 1; i <= n; i++)
			if (f[i] < fmin && checkt2[i])
			{
				fmin = f[i];
				v = i;
			}
		if (fmin == 50f)
			break;
		//xoa v khoi t2
		checkt2[v] = false;
		//toi uu cac dinh trong t2
		for (int i = 1; i <= n; i++)
		{
			if (a[v][i] > 0 && f[i] > f[v] + a[v][i])
			{
				f[i] = f[v] + a[v][i];
				trace[i] = v;
			}
		}
	}
}
void output()
{
	cout << "Duong di de co tong khoang cach nho nhat tu dinh " << s << " toi dinh " << e << " la:\n";
	int v = s, d = 0, tmin;
	while (d != n)
	{
		tmin = 50f;
		for (int i = 1; i <= n; i++)
			if (trace[i] < tmin && i != e)
			{
				tmin = trace[i];
				v = i;
			}
		trace[v] = 50f;
		if (d != 5)
			cout << v << "->";
		else
			cout << e;
		d++;
	}
	cout << "\nTong duong di nho nhat la: " << f[e];
}
int main()
{
	cin >> n >> m >> s >> e;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			a[i][j] = -1;
	for (int i = 1; i <= m; i++)
	{
		int u, v;
		cin >> u >> v;
		cin >> a[u][v];
		a[v][u] = a[u][v];
	}
	dijkstra();
	output();
	return 0;
}
