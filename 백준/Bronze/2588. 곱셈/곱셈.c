#include<stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	int ans1, ans2, ans3, ans4;
	ans1 = x * (y % 10);
	ans2 = x * ((y % 100) / 10);
	ans3 = x * (y / 100);
	ans4 = x * y;
	printf("%d\n%d\n%d\n%d\n", ans1, ans2, ans3, ans4);
	return 0;
}