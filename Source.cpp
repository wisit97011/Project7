#include <stdio.h>
#include <conio.h>

main() 
{
	int num[6], i, max, min, sum = 0;
	float avg = 0.0;

	for (i = 0; i < 6; i++)
	{
		num[i] = 0;
		printf("Enter Number%d : ", i + 1);
		scanf_s("%d", num[i]);
	}
	max = num[0];
	min = num[0];
	for(i = 0; i < 6; i++)
	{
		if (num[i] > max)
		max = num[i];
		else if (num[i] < min)
		min = num[i];
	sum += num[i];
	}
	avg = float(sum) / 6;
	printf("\nMAX = %d", max);
	printf("\nMIN = %d", min);
	printf("\nSUM = %d", sum);
	printf("\nAVERANGE = %d", avg);
	_getch();
}