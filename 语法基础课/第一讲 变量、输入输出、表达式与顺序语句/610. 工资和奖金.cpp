#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
    string name;
    double x, y;
    
    cin >> name >> x >> y;
    
    printf("TOTAL = R$ %.2lf\n", x + 0.15 * y);
    
    return 0;
}
