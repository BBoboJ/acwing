#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << "O JOGO DUROU "<< (b - a <= 0 ? b - a + 24 : b - a) << " HORA(S)" << endl;
    
	return 0;
}
