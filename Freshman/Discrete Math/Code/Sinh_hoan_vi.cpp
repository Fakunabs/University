#include<iostream>
#include<string>
using namespace std;
int s[10000], n;
void init()
{
	for (int i = 1; i <= n; i++)
		s[i] = i;
}
void out()
{
	for (int i = 1; i <= n; i++)
		cout << s[i];
	cout << "\n";
}
int isthelastconfigure()
{
	for (int i = 1; i <= n; i++)
	{
		if (s[i] != n - i + 1)
			return true;
	}
	return false;
}
void Cau_hinh_tiep_theo()
{
	int j = n - 1;
	while (s[j] > s[j + 1] && j >= 1)
		j--;
	int k = n;
	while (s[k] <= s[j] && k >= 1)
		k--;
	int temp = s[j];
	s[j] = s[k];
	s[k] = temp;
	int l = j + 1, r = n;
	while (l < r)
	{
		int temp = s[l];
		s[l] = s[r];
		s[r] = temp;
		l++;
		r--;
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
	cin >> n;
	Sinh();
	return 0;
}
