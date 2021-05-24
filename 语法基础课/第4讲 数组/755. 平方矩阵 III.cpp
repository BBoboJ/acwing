#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;
    while (cin >> n, n)
    {
        for (int i = 0; i < n; i ++ )
        {
            for (int j = 0; j < n; j ++ )
                cout << (int)pow(2, i + j) << ' ';
                //  cout << (1 << (i + j)) << ' ';
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}
