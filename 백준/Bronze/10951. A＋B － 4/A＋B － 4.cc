#include <iostream>
using namespace std;

int main()
{
	int x, y;
	while (true)
	{
		cin >> x >> y;
		if (cin.eof()) break;
		cout << x + y << endl;
	}
	return 0;
}