#include <stdio.h>
int main()
{
	float i, area,tmp = 0.000000, sum = 0.000000,b=0;
	for (i = 1.000000;; i *= 0.500000)
	{
		area = i*i;
		sum += area;//sum=sum+area;
		
		if (sum - tmp >= 0.0000009)
		{
			printf("x�� %f�϶� ������ ���� %f - %f = %f�Դϴ�.\n", i, sum, tmp, sum - tmp);
		}
			tmp = sum;
		
		
	}
	return 0;
}
