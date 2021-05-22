#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m, n > 0 && m > 0)
    {
        int sum = 0;
        int minnum = min(n, m);
        int maxnum = max(n, m);
        
        for (int i = minnum; i <= maxnum; i ++ )
        {
            sum += i;
            cout << i << " ";
        }
        cout << "Sum=" << sum << endl;
    }
    
    return 0;
}
