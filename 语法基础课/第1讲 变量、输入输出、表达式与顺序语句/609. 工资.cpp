#include <cstdio>

int main()
{
    int number, hour;
    double money;
    scanf("%d%d%lf", &number, &hour, &money);
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, money * hour);
    
    return 0;
}
