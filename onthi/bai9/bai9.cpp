#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long a, b;
	cin >> a >> b;
	if (a == 0)
	{
		if (b == 0) cout << "Phuong trinh co vo so nghiem";
		else cout << "Phuong trinh vo nghiem";
	}
	else cout << "Phuong trinh co mot nghiem: " << setprecision(2) << fixed << (float)-b/a;
	//else cout << (float)(-b / a);
	//cin.get();
}