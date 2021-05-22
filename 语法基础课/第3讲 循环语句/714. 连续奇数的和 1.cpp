#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > y) swap(x, y);
	
    int sum = 0;
    while ( ++ x < y)
        if (x % 2)
            sum += x;
    
    cout << sum << endl;
    
    return 0;
}
