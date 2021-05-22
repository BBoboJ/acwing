#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    int sum = 0;
    
    cin >> x >> y;
    if (x > y) swap(x, y);
    
    while ( ++ x < y)
        if (x % 2)
            sum += x;
    
    cout << sum << endl;
    
    return 0;
}
