#include <cstdio>

int main()
{
    int a[] = {100, 50, 20, 10, 5, 2};
    int b[] = {100, 50, 25, 10, 5, 1};
    double money;
    
    scanf("%lf", &money);
    int n = money * 100;
    
    printf("NOTAS:\n");
    for(int i = 0; i < 6; i ++ )
    {
        printf("%d nota(s) de R$ %.2lf\n", n / (a[i] * 100), (double)a[i]);
        n -= n / (a[i] * 100) * (a[i] * 100);
    }
    
    printf("MOEDAS:\n");
    for(int i = 0; i < 6; i ++ )
    {
        printf("%d moeda(s) de R$ %.2lf\n", n / b[i], b[i] / 100.0);
        n -= n / b[i] * b[i];
    }
    return 0;
}
