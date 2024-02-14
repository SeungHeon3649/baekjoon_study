#include <iostream>
using namespace std;

int main()
{
	string word;
	string result = "{";
	cin >> word;
	for (int i = 0; i < word.size() - 2; i++) 
	{
		for (int j = i + 1; j < word.size() - 1; j++) 
		{
			string val;
			for (int u = i; u >= 0; u--)
				val += word[u];

			for (int u = j; u > i; u--)
				val += word[u];

			for (int u = word.size() - 1; u > j; u--)
				val += word[u];

			if (result > val) result = val;
		}

	}
	cout << result << endl;
	return 0;
}