#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	switch (a)
	{
	case 1:
	{
		cout << "mootj nghin ";
		break;
	}
	case 2:
	{
		cout << "hai nghin ";
		break;
	}
	case 3:
	{
		cout << "ba nghin ";
		break;
	}
	case 4:
	{
		cout << "bon nghin ";
		break;
	}
	case 5:
	{
		cout << "nam nghin ";
		break;
	}
	case 6:
	{
		cout << "sau nghin ";
		break;
	}
	case 7:
	{
		cout << "bay nghin ";
		break;
	}
	case 8:
	{
		cout << "tam nghin ";
		break;
	}
	case 9:
	{
		cout << "chin nghin ";
		break;
	}
	}

	switch (b)
	{
	case 0:
	{
		if (d!=0&&a!=0) cout << "khong tram ";
		break;
	}
	case 1:
	{
		cout << "mootj tram ";
		break;
	}
	case 2:
	{
		cout << "hai tram ";
		break;
	}
	case 3:
	{
		cout << "ba tram ";
		break;
	}
	case 4:
	{
		cout << "bon tram ";
		break;
	}
	case 5:
	{
		cout << "nam tram ";
		break;
	}
	case 6:
	{
		cout << "sau tram ";
		break;
	}
	case 7:
	{
		cout << "bay tram ";
		break;
	}
	case 8:
	{
		cout << "tam tram ";
		break;
	}
	case 9:
	{
		cout << "chin tram ";
		break;
	}
	}

	switch (c)
	{
	case 0:
	{
		if ((d!=0&&a!=0)||(d!=0&&b!=0)) cout << "le ";
		break;
	}
	case 1:
	{
		cout << "muoiwf ";
		break;
	}
	case 2:
	{
		cout << "hai muoiw ";
		break;
	}
	case 3:
	{
		cout << "ba muoiw ";
		break;
	}
	case 4:
	{
		cout << "bon muoiw ";
		break;
	}
	case 5:
	{
		cout << "nam muoiw ";
		break;
	}
	case 6:
	{
		cout << "sau muoiw ";
		break;
	}
	case 7:
	{
		cout << "bay muoiw ";
		break;
	}
	case 8:
	{
		cout << "tam muoiw ";
		break;
	}
	case 9:
	{
		cout << "chin muoiw ";
		break;
	}
	}
	switch (d)
	{
	case 0:
	{
		if (a == 0 && b == 0 && c == 0) cout << "khong";
		break;
	}
	case 1:
	{
		if (c <= 1) cout << "mootj";
		else cout << "moots";
		break;
	}
	case 2:
	{
		cout << "hai";
		break;
	}
	case 3:
	{
		cout << "ba";
		break;
	}
	case 4:
	{
		if (c <= 1) cout << "bon";
		else cout << "tu";
		break;
	}
	case 5:
	{
		if (c == 0) cout << "nam";
		if (c > 0 && c <= 9) cout << "lam";
		break;
	}
	case 6:
	{
		cout << "sau";
		break;
	}
	case 7:
	{
		cout << "bay";
		break;
	}
	case 8:
	{
		cout << "tam";
		break;
	}
	case 9:
	{
		cout << "chin";
		break;
	}
	}
	cin.get();
}