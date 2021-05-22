#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    for (int i = 0, k = 1; i < n; i ++ )
    {
        for (int j = 0; j < m - 1; j ++ )
            cout << k ++ << " ";
        cout << "PUM" << endl;
        k ++ ;
    }
    
    return 0;
}
