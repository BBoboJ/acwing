#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    int in = 0, out = 0;
    
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        
        if (x >= 10 && x <= 20) in ++ ;
        else out ++ ;
    }
    
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    
    return 0;
}
