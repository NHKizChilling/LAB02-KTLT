#include <stdio.h>
#include <stdlib.h>
#define lai_xuat_co_dinh 0.1 // fixed interest rate at 10%


float lai_kep(float y, int n);

int main()
{
    system("cls");
    float y; // funds
    int n; // years
    printf("Nhap so tien gui vao: ");
    scanf("%f", &y);
    printf("Nhap so nam gui: ");
    scanf("%d", &n);
    printf("So tien nhan duoc sau %d nam la: %.3f", n, y + lai_kep(y,n));
    return 0;
}

float lai_kep(float y, int n)
{
    if(n == 1)
        return y * lai_xuat_co_dinh; // return profit if year = 1
    else 
        return y * lai_xuat_co_dinh + lai_kep( y + y * lai_xuat_co_dinh, n - 1);
        // return profit + lai_kep(funds + profit, year - 1)
}