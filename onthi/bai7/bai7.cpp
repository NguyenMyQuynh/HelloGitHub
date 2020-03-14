#include <iostream>

using namespace std;

int main()
{
	long ng, t, n;

	cin >> ng >> t >> n;
	if (n <= 0)
	{
		cout << "Nam khong hop le.";
		return(0);
	}
	if (t > 12 || t <= 0)
	{
		cout << "Thang khong hop le.";
		return(0);
	}
	if (ng <= 0)
	{
		cout << ng << "/" << t << "/" << n << " la ngay khong hop le.";
		return(0);
	}
	bool kt=false;
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) kt=true;
	if (kt == false && t==2&& ng >= 29)
	{
		cout << ng << "/" << t << "/" << n << " la ngay khong hop le.";
		return(0);
	}
	if (kt)
	{
		if (ng > 29&&t==2) 
		{
			cout << ng << "/" << t << "/" << n << " la ngay khong hop le.";
			return(0);
		}
	}
	if (t != 2)
	{
		if ((t == 4 || t == 6 || t == 9 || t == 11) && (ng > 30))
		{
			cout << ng << "/" << t << "/" << n << " la ngay khong hop le.";
			return(0);
		}
		if ((t == 1 || t == 3 || t == 5 || t == 7||t==8||t==10||t==12) && (ng > 31))
		{
			cout << ng << "/" << t << "/" << n << " la ngay khong hop le.";
			return(0);
		}
	}

	cout<< ng << "/" << t << "/" << n << " la ngay hop le.";
	cin.get();
}