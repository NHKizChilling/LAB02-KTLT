#include <stdio.h>

int xuatnhiphan(int n);

int main()
{
	int n;
	printf("Nhap so: ");
	scanf("%d", &n);
	printf("Dang nhi phan la: %d", xuatnhiphan(n));
	return 0;
}

int xuatnhiphan(int n)
{
	if(n == 0)
		return 0;
	else
	{
		return n % 2 + 10 * xuatnhiphan(n/2);
	}
}
