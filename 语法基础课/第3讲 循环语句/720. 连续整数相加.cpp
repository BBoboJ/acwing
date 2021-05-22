#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    int a, n;
    
    cin >> a;
    while (cin >> n && n <= 0);
    
    int sum = 0;
    while (n -- ) sum += a ++ ;
    
    cout << sum << endl;
    
    return 0;
}
