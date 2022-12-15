#include"Set.h"
int main() {
	int a[] = { 1,2,9,8,3,4,5,6 };
	int n = sizeof(a) / 4;
	Set s(a, n);
	Set s1 = s;
	s.remove(8);
	s = s - 1;
	s = s + 100;
	s = s + 7;
	cout << "Set s:" << s << endl;
	cout << "Set s1:" << s1 << endl;
	cout << "s giao s1:" << s * s1 << endl;
	cout << "s hop s1:" << s + s1 << endl;
	Set s2 = s - s1;
	Set s3 = s1 - s;
	if (s2.getSize() == 0)
		cout << "s hieu s1: rong." << endl;
	else cout << "s hieu s1: " << s2 << endl;

	if (s3.getSize() == 0)
		cout << "s1 hieu s: rong." << endl;
	else cout << "s1 hieu s: " << s3 << endl;
}