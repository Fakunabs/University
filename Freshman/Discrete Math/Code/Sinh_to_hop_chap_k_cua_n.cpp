#include<iostream>
#include<string>
using namespace std;
int s[10000], k, n;
void init()
{
	for (int i = 1; i <= k; i++)
		s[i] = i;
}
void out()
{
	for (int i = 1; i <= k; i++)
		cout << s[i];
	cout << "\n";
}
int isthelastconfigure()
{
	for (int i = 1; i <= k; i++)
	{
		if (s[i] != n - k + i)
			return true;
	}
	return false;
}
void Cau_hinh_tiep_theo()
{
	int i = k;
	while (s[i] == n - k + i && i >= 1)
		i--;
	s[i]++;
	for (int j = i + 1; j <= k; j++)
	{
		s[j] = s[i] + j - i;
	}
}
void Sinh()
{
	init();
	out();
	int stop = isthelastconfigure();
	while (stop)
	{
		Cau_hinh_tiep_theo();
		out();
		stop = isthelastconfigure();
	}
}
int main()
{
	cin >> k >> n;
	Sinh();
	return 0;
}
