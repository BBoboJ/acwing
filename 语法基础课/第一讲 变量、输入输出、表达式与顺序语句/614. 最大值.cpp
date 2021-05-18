#include <iostream>

using namespace std;

int main ()
{
    int a, b, c, maxnum;
    
    cin >> a >> b >> c;
    
    maxnum = (a + b + abs(a - b)) / 2;
    maxnum = (maxnum + c + abs(maxnum - c)) / 2;
    
    cout << maxnum << " eh o maior" << endl;
    
    return 0;
}

// max = (a + b + abs(a - b)) / 2;
