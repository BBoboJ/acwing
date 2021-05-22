#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a = 0, b = 1, c;
    while (n -- )
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    
    return 0;
}
