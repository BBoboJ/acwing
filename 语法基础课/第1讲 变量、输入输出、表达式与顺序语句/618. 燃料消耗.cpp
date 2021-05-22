#include <cstdio>

int main()
{
    long long s, t;
    scanf("%lld %lld", &s, &t);
    
    printf("%.3lf",s * t / 12.0);
    
    return 0;
}

// 数据范围(10^18)超过 int(2*10^9)
