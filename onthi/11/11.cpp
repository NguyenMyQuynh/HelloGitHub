#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.141592653589793

using namespace std;

int main()
{
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	double de = b * b - 3 * a * c;
	if (de == 0)
	{
		if (b * b * b - 27 * a * a * d == 0) cout << "Phuong trinh co mot nghiem boi:" << endl
			<< setprecision(2) << fixed << -b / (3 * a);
		else cout << "Phuong trinh co mot nghiem duy nhat:" << endl
			<< setprecision(2) << fixed << ((-b+(pow(b*b*b-27*a*a*d,1.0/3)))/(3*a));
	}
	else if (de < 0)
	{
		// x=(sqrt(fabs(dt))/(3*a))*(pow((k+sqrt(k*k+1)),1.0/3)-pow(-(k-sqrt(k*k+1)),1.0/3))-(b/(3*a));
		double k = (9 * a * b * c - 2 * b * b * b - 27 * a * a * d) / (2 * sqrt(fabs(de) * fabs(de) * fabs(de)));
		double tam = pow(k+sqrt(k*k+1),1.0/3)-pow(-(k-sqrt(k*k+1)),1.0/3);
		double x = ((sqrt(fabs(de)) / (3 * a)) * tam - (b / (3 * a)));
		cout << "Phuong trinh co mot nghiem duy nhat:" << endl<< setprecision(2) << fixed << x ;
	}
	else 
	{
		double k = (9 * a * b * c - 2 * b * b * b - 27 * a * a * d) / (2 * sqrt(fabs(de) * fabs(de) * fabs(de)));
		double x, x1, x2, x3;
		if (fabs(k) <= 1)
		{
			x1 = (2 * sqrt(de) * cos(acos(k) / 3) - b) / (3 * a);
			x2 = (2 * sqrt(de) * cos(acos(k) / 3 - (2 * PI / 3)) - b) / (3 * a);
			x3 = (2 * sqrt(de) * cos(acos(k) / 3 + (2 * PI / 3)) - b) / (3 * a);
			cout << "Phuong trinh co ba nghiem:" << endl;
			cout << setprecision(2) << fixed << x1 << " ";
			cout << setprecision(2) << fixed << x2 << " ";
			cout << setprecision(2) << fixed << x3 ;
		}
		if (fabs(k) > 1)
		{
			x = ((sqrt(de) * fabs(k)) / (3 * a * k)) * (pow((fabs(k) + sqrt(pow(k, 2) - 1)), 1.0 / 3) + pow((fabs(k) - sqrt(pow(k, 2) - 1)), 1.0 / 3)) - (b / (3 * a));
			cout << "Phuong trinh co mot nghiem duy nhat:"<< endl<< setprecision(2) << fixed << x ;
		}
	}
	cin.get();
}