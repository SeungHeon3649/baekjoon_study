#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int size, num;
	char ch[20];
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d %s", &num, ch);
		for (int j = 0; j < strlen(ch); j++)
		{
			for (int r = 0; r < num; r++)
			{
				printf("%c", ch[j]);
			}
		}
		printf("\n");
	}
	return 0;
}