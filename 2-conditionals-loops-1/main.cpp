#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, x0, xk, dx, x, F;
	int ac, bc, cc;
	cout << fixed;
	cout.precision(3);
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "x0 = ";
	cin >> x0;
	cout << "xk = ";
	cin >> xk;
	cout << "dx = ";
	cin >> dx;
	ac = a;
	bc = b;
	cc = c;
	cout << string(21, '-') << endl << "|" << setw(5) << "x" << setw(5) << "|" << setw(5) << "F" << setw(5) << "|" << endl << string(21, '-') << endl;
	if (dx > 0)
	{
		for (x = x0; x <= xk; x += dx)
		{
			if ((c < 0) && (x != 0))
				F = -a * x - c;
			if ((c > 0) && (x == 0))
				F = (x - a) / (-c);
			else F = (b*x) / (c - a);
			if ((ac | bc | cc) != 0)
			{
				cout << "|" << setw(5) << x << setw(5) << "|" << setw(5) << F << setw(5) << "|" << endl;
			}
			else
			{
				cout << "|" << setw(5) << x << setw(5) << "|" << setw(5) << int(F) << setw(5) << "|" << endl;
			}

		}
		cout << string(21, '-') << endl;
	}
	return 0;
}