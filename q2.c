#include <stdio.h>

int reverse(int num) 
{
	int i;
	int rev;
	rev = 0;

	for (i = num; i > 0; i = i / 10) {
		rev = (rev * 10) + (i % 10);	
	}

	return rev;
}

int main(void) {

	int n1, n2, t, sum, i;

	sum = 0;

	scanf("%d", &t);

	for(i = 0; i < t; i++)
	{
		scanf("%d", &n1);
		scanf("%d", &n2);
		sum = reverse(n1) + reverse(n2);
		printf("%d\n", reverse(sum));
	}

	return 0;
}
