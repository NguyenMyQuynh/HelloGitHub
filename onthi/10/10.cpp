#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	long a, b, c;
	cin >> a >> b >> c;
	long d = b*b-4*a*c;
	if (d < 0) cout << "Phuong trinh vo nghiem";
	else if (d == 0) 
		cout << "Phuong trinh co mot nghiem kep: " << setprecision(2) << fixed << (float) -b/(2*a) ;
	else
	{
		float x1, x2;
		x1 = ((float)-b + sqrt(d)) / (2 * a);
		x2 = ((float)-b - sqrt(d)) / (2 * a);
		cout << "Phuong trinh co hai nghiem: " << setprecision(2) << fixed << (float)x1 << " " << (float)x2;
	}
	cin.get();
}