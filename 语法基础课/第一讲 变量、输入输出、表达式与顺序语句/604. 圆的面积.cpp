#include <cstdio>

const double pi = 3.14159;

int main ()
{
    double r;
    
    scanf("%lf", &r);
    
    printf("A=%.4lf\n", pi * r * r);
    
    return 0;
}

// 浮点数一般用double(精度问题)
// 保留几位小数的时候一般用 scanf printf 进行输入输出
