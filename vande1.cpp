#include <stdio.h>

long tong(int n);
long tich(int n);
double luythua(int a, int n);

int main()
{
	int a, n;
	printf("Nhap so a: ");
	scanf("%d", &a);
	do
	{
		printf("Nhap so lan: ");
	    scanf("%d", &n);
	    if(n <= 0)
	    printf("Du lieu khong hop le. Nhap lai n");
	} while(n <= 0);
	printf("Tong la %d\n", tong(n));
	printf("Tich la %d\n", tich(n));
	printf("Luy thua la %.2lf", luythua(a,n));
	return 0;	
}

long tong(int n)
{
	if(n == 1)
		return 1; 
	else 
		return n + tong(n-1);
}

long tich(int n)
{
	if(n == 1)
		return 1;
	else 
		return n * tich(n - 1);
}

double luythua(int a, int n)
{
	if(n == 1)
		return a;
	else 
		return a * luythua(a, n-1);
}
