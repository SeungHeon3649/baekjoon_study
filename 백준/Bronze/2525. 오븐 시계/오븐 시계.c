#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C;
	int hour, minute;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	hour = A;
	minute = B + C;
	if (minute >= 60)
	{
		hour += minute / 60;
		minute = minute % 60;
	}
	hour = hour % 24;
	printf("%d %d", hour, minute);
	return 0;
}