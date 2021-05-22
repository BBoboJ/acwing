#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    int n, a;
    char t;
    int c = 0, r = 0, f = 0;
    
    cin >> n;
    
    while (n -- )
    {
        cin >> a >> t;
        if (t == 'C') c += a;
        else if (t == 'R') r += a;
        else f += a;
    }
    
    printf("Total: %d animals\n", c + r + f);
    printf("Total coneys: %d\n", c);
    printf("Total rats: %d\n", r);
    printf("Total frogs: %d\n", f);
    printf("Percentage of coneys: %.2lf %%\n", c * 100.0 / (c + r + f));
    printf("Percentage of rats: %.2lf %%\n", r * 100.0 / (c + r + f));
    printf("Percentage of frogs: %.2lf %%\n", f * 100.0 / (c + r + f));
    
    return 0;
}
