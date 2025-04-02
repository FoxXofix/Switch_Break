#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "choose from 1 to 7\n" ;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "A";
		break;
	case 2:
		cout << "B";
		break;
	case 3:
		cout << "C";
		break;
	case 4:
		cout << "D";
		break;
	case 5:
		cout << "E";
		break;
	case 6:
		cout << "F";
		break;
	case 7:
		cout << "G";
		break;
	default:
		cout << "you put wrong meaning";
	}
	return 0;
}
