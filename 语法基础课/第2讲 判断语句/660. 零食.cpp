#include <cstdio>

int main()
{
    int x, y;
    double p[] = {0, 4, 4.5, 5, 2, 1.5};
    scanf("%d %d", &x, &y);
    
    printf("Total: R$ %.2lf\n", p[x] * y);
    
	return 0;
}
