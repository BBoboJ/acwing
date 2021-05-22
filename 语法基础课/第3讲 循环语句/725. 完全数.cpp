#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool IsPerfectNum(int num)
{
    int sum = 0;
    
    for (int i = 1; i <= sqrt(num); i ++ )
    {
        if (num % i == 0)
        {
            if (i < num) sum += i;
            if (num / i != i && num / i < num) sum += num / i;
        }
    }
    
    return sum == num;
}

int main()
{
    int n;
    cin >> n;
    while (n -- )
    {
        int num;
        cin >> num;
        
        if (IsPerfectNum(num)) cout << num << " is perfect" << endl;
        else cout << num << " is not perfect" << endl;
    }
    
    return 0;
}
