#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// declare functions
void input(int Q[], int &n);
void output(int Q[], int n);
long sum_rec(int Q[], int n);
int max_rec(int Q[], int n);
int min_rec(int Q[], int n);
long sum(int Q[], int n);

//  It takes 1 min 3 sec to finish using recursion, the non-recursion takes 2 sec
//  => Recursion is slower 

int main()
{
    int n; // size of array Q 
    int Q[100]; // array Q

    input(Q, n);
    output(Q, n);

    printf("\nTong theo de quy: %ld", sum_rec(Q,n));
    printf("\nSo lon nhat: %d", max_rec(Q, n));
    printf("\nSo be nhat la: %d", min_rec(Q, n));
    printf("\nTong theo duyet mang la: %ld", sum(Q, n));
    
    return 0;
}

void input(int Q[], int &n)
{
    printf("Nhap so phan tu trong mang(lon hon 1, be hon 100): ");
    scanf("%d", &n);
    
    srand((int)time(0)); // Create seed
    for(int i = 0; i < n; i++)
        Q[i] = rand(); // Create random number 
}

void output(int Q[], int n)
{
    printf("So phan tu trong mang la: %d\n", n);
    for(int i = 0; i < n; i++)
    {
        printf("Q[%d] = %d\n", i, Q[i]);
    }
}

long sum_rec(int Q[], int n)
{
    if(n == 0)
        return Q[0]; // return Q[0] if n = 0
    else 
        return Q[n-1] + sum_rec(Q, n-1); // return Q[n-1] + Q[n-2] + Q[n-3] + ... + Q[0]
}

int max_rec(int Q[], int n) 
{
    if(n == 0)
        return Q[0]; // return Q[0] if n = 0
    else 
    {
        if(Q[n-1] > max_rec(Q, n - 1))  // loop through array to find the biggest number 
            return Q[n-1]; // return Q[n-1] if biggest
        else 
            return max_rec(Q, n - 1); // continue the recursion to find if Q[n-1] isn't the biggest 
    }
    // Non-recursion:
    //  int max = Q[0];
    // for(int i = 1; i < n; i++)
    // {
    //    if(max < Q[i])
    //         max = Q[i];
    // }
    //  return max;
}

int min_rec(int Q[], int n)
{
    if(n == 0)
        return Q[0]; // return Q[0] if n = 0
    else 
    {
        if(Q[n-1] < min_rec(Q, n - 1)) // loop through array to find the smallest number  
            return Q[n-1]; // return Q[n-1] if smallest
        else 
            return min_rec(Q, n - 1); // continue the recursion to find if Q[n-1] isn't the smallest
    }
}

long sum(int Q[], int n)
{
    int sum = 0; // sum of all number of array Q
    for(int i = 0; i < n; i++)
        sum += Q[i]; // sum = Q[0] + Q[1] + ... + Q[n-1]
    return sum; 
}