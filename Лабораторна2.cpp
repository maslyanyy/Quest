#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double  x, a, b, h, e, sum;
	double current;
	int k;
	cout << "Ok Andy we need[a;b]\n";
	cout << "\n";
	cout << "First we need 'a': \n";
	cin >> a;
	cout << "Now we need 'b':\n";
	cin >> b;
	cout << "Now we need step 'h':\n";
	cin >> h;
	cout << "Now we need error 'e': \n";
	cin >> e;
	for (x = a; x <= b; x += h)
	{
		sum = 0;
		k = 1;
		do
		{
			current = (pow(-1, k))*(pow(x, 2*k+3)) / (2*k+1)*(2*k+1);
			sum += current;
			k++;
		} while (abs(current) > e);
		cout << current;
		cout << "x =" << x << "\t" << "y =" << sum << "\n";
	}
}