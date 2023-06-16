#include <iostream>
using namespace std;

int main()
{
	int hour, minute;
	cin >> hour >> minute;
	if (minute >= 45)
	{
		cout << hour << " " << minute - 45 << endl;
	}
	else
	{
		int minus_minute = minute - 45;
		minute = 60 + minus_minute;
		hour = hour - 1;
		if (hour < 0)
		{
			hour = 23;
		}
		cout << hour << " " << minute << endl;
	}
}