#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float t, l, h, tb; 
	cin >> t >> l >> h;
	tb = (t + l + h) / 3;
	long c;
	c = pow(10.0, 2);
	tb = round(tb * c)/c;
	cout << "DTB = " << tb<<endl;
	cout << "Loai: ";
	if (tb <= 10 && tb >= 9) cout << "XUAT SAC";
	if (tb >= 8 && tb < 9) cout << "GIOI";
	if (tb >= 7 && tb < 8) cout << "KHA";
	if (tb >= 6 && tb < 7) cout << "TB KHA";
	if (tb >= 5 && tb < 6) cout << "TB";
	if (tb >= 4 && tb < 5) cout << "YEU";
	if (tb >= 0 && tb < 4) cout << "KEM";
	cin.get();
}
