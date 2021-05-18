#include <iostream>

using namespace std;

int main()
{
    int money;
    int cash[] = {100, 50, 20, 10, 5, 2, 1};
    
    cin >> money;
    
    cout << money << endl;;
    for(int i = 0; i < 7; i ++ )
    {
        cout << money / cash[i] << " nota(s) de R$ " << cash[i] << ",00" << endl;
        money -= (money / cash[i]) * cash[i];
    }
    
    return 0;
}
