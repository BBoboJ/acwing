#include <iostream>

using namespace std;

int main()
{
    int x;
    int max_index = -1;
    int max_num = 0;
    
    for (int i = 1; i <= 100; i ++ )
    {
        cin >> x;
        if (x > max_num)
        {
            max_num = x;
            max_index = i;
        }
    }
    
    cout << max_num << endl;
    cout << max_index << endl;
    
    return 0;
}
