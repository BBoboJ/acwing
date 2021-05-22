#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool IsPrimeNum(int num)
{
    if (num <= 1) return false;
    
    for (int i = 2; i <= sqrt(num); i ++ )
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    while (n -- )
    {
        int num;
        cin >> num;
        
        if (IsPrimeNum(num)) cout << num << " is prime" << endl;
        else cout << num << " is not prime" << endl;
    }
    return 0;
}
