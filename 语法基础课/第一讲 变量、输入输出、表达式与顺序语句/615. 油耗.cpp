#include <cstdio>

int main ()
{
    int s;
    double oil;
    
    scanf("%d %lf", &s, &oil);
    
    printf("%.3lf km/l\n", s / oil);
    
    return 0;
}
