#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, x, y;
    
    cin >> n;
    while (n -- )
    {
        int sum = 0;
        
        cin >> x >> y;
        if (x > y) swap(x, y);
        
        for (int i = x + 1; i < y; i ++ )
            if (i % 2)
                sum += i;
        
        cout << sum << endl;
    }
    
    return 0;
}
