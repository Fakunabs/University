#include<iostream>
#include<string>
using namespace std;
int s[10000], n;
void init()
{
	for (int i = 1; i <= n; i++)
		s[i] = 0;
}
void out()
{
	for (int i = 1; i <= n; i++)
		cout << s[i];
	cout << "\n";
}
int isthelastconfigure()
{
	for (int i = n; i >= 1; i--)
	{
		if (s[i] == 0)
			return true;
	}
	return false;
}
void Cau_hinh_tiep_theo()
{
	int i = n;
	while (s[i] == 1 && i >= 1)
		i--;
	s[i] = 1;
	for (int j = i + 1; j <= n; j++)
		s[j] = 0;
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
	cin >> n;
	Sinh();
	return 0;
}
