/* Calcution of simple interest */
/* Author KB Date: 11-01-2019 Saturday */

# include <stdio.h>

int main()
{
	int p, n;
	float r, si;
	
	printf("Enter values of p, n, r: ");
	scanf("%d %d %f", &p, &n, &r);

	si = p * n * 100 /r;
	printf("%f\n", si);
	return 0;
}
