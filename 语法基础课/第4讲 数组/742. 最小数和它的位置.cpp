#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a[1001];
    int n, pos = 0;
    
    cin >> n;
    cin >> a[0];
    for (int i = 1; i < n; i ++ )
    {
        cin >> a[i];
        if (a[i] < a[pos]) pos = i;
    }
    
    cout << "Minimum value: " << a[pos] << endl;
    cout << "Position: " << pos << endl;
    
    return 0;
}
