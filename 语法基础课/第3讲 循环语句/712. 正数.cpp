#include <iostream>

using namespace std;

int main ()
{
    double x;
    int cnt = 0;
    
    for (int i = 0; i < 6; i ++ )
    {
        cin >> x;
        if (x > 0) cnt ++ ;
    }
    
    cout << cnt << " positive numbers" << endl;
    
    return 0;
}
