#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5: 
		cout << "A"; 
		break;
	case 6:
	case 7: 
		cout << "B"; 
		break;
	default: 
		cout << "ABOBA";
	}
	return 0;
}