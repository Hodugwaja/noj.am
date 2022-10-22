#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << fixed;
	cout.precision(10);

	cout.unsetf(ios::fixed);

	cout << a / (double)b;
}

// https://www.acmicpc.net/problem/1008