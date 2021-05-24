#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long t ,a[61];
    a[0] = 0, a[1] = 1;
    for (int i = 2; i < 61; i ++ ) a[i] = a[i - 1] + a[i - 2];
    
    cin >> t;
    while (t -- )
    {
        int n;
        cin >> n;
        printf("Fib(%d) = %lld\n", n, a[n]);
    }
    
    return 0;
}
