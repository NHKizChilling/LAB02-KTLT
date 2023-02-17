#include <stdio.h>

double capsocong(int n, int a, int r, int count);
double capsonhan(int n, long long a, int q, int count);
void output();

int main()
{
	int count = 0;
	int a,r,n,q;
	printf("Nhap so hang dau: ");
	scanf("%d", &a);
	printf("Nhap cong sai: ");
	scanf("%d", &r);
	printf("Nhap cong boi: ");
	scanf("%d", &q);
	printf("Nhap so lan: ");
	scanf("%d", &n);
	capsocong(n,a,r,count);
	printf("\n");
	capsonhan(n,a,q,count);
	return 0;
}


double capsocong(int n, int a, int r, int count)
{
	int tmp;
	if(count % 10 == 0)
		printf("\n");
	if(n == 1)
		return a;
	else 
	{
		tmp = a+r;
		printf("%d ", tmp);
		return capsocong(n-1,tmp,r, count+1);
	}
}

double capsonhan(int n, long long a, int q, int count)
{
	int tmp;
	if(count % 10 == 0)
		printf("\n");
	if(n == 1)
		return a;
	else 
	{
		tmp = a*q;
		printf("%lld ", tmp);
		return capsonhan(n-1,tmp,q, count+1);
	}
}