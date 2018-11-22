#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	const int maxiter = 10000;

	double xn, xk, dx, eps;
	cout << "-1 < x < 1" << endl;
	cout << "Enter xn -> ";
	cin >> xn;
	cout << "Enter xk -> ";
	cin >> xk;
	cout << "Enter dx -> ";
	cin >> dx;
	cout << "Enter eps -> ";
	cin >> eps;

	if ((xn <= -1) || (xk > 1) || (xn > xk) || (dx <= 0) || (eps <= 0))
	{
		cout << "Error";
		return 1;
	}
	cout << "| - - - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - |" << endl;
	cout << "|           x           |    ln(x+1) (mine)     |    ln(x+1) (cmath)    |       iterations      |" << endl;
	cout << "| - - - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - |" << endl;
 
	cout << fixed;
	cout.precision(6);

	for (xn; xn <= xk; xn += dx)
	{
		int n;
		double ln = 0;
		for (n = 0; n <= maxiter; n++)
		{
			double zn = (pow(-1, n)*pow(xn, n + 1)) / (n + 1);
			ln += zn;
			if (abs(zn) < eps) break;
		}
		cout << "|" << setw(8) << xn << setw(8) << "|";
		if (n <= maxiter)
			cout << setw(8) << ln << setw(8) << "|";
		else
			cout << "Error";
		cout << setw(8) << log(xn + 1) << setw(8) << "|" << setw(10) << n << setw(10) << "|" << endl;
	}
	cout << "| - - - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - |" << endl;
	return 0;
}