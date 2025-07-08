#include<stdio.h>
int main()
{
    long long int A, B, C, D ;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    int DIFERENCA = (A * B) - (C * D);
    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}
