#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    int a = 0, b = 1, c;
    
    cin >> n;
    
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
