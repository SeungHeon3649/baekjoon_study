#include <stdio.h>
#include <string.h>

int main()
{
	char Subject[20][50], class[20][3];
	double credit[20], credit_sum = 0, class_num = 0, class_sum = 0, grade = 0;
	for (int i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", Subject[i], &credit[i], class[i]);
	}
	for (int j = 0; j < 20; j++)
	{
		if (strcmp(class[j], "P") == 0) continue;
		credit_sum += credit[j];
		if (strcmp(class[j], "A+") == 0) class_num = 4.5;
		else if (strcmp(class[j], "A0") == 0) class_num = 4.0;
		else if (strcmp(class[j], "B+") == 0) class_num = 3.5;
		else if (strcmp(class[j], "B0") == 0) class_num = 3.0;
		else if (strcmp(class[j], "C+") == 0) class_num = 2.5;
		else if (strcmp(class[j], "C0") == 0) class_num = 2.0;
		else if (strcmp(class[j], "D+") == 0) class_num = 1.5;
		else if (strcmp(class[j], "D0") == 0) class_num = 1.0;
		else if (strcmp(class[j], "F") == 0) class_num = 0.0;
		class_sum += credit[j] * class_num;
	}
	grade = class_sum / credit_sum;
	printf("%lf", grade);
	return 0;
}