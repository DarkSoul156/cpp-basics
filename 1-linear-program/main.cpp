#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
double a, x1, x2;
cout << "Enter a number:";
cin >> a;
x1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
x2 = tan(3 * a);
cout << "x1=" << x1 << endl << "x2=" << x2 << endl;
return 0;
}