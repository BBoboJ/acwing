#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    while (cin >> n, n)
    {
        for (int i = 1; i <= n; i ++ )
        {
            for (int j = 1; j <= n; j ++ )
                cout << abs(i - j) + 1 << ' ';
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}
