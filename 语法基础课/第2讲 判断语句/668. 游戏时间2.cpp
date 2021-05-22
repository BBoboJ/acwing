#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int t = (c * 60 + d) - (a * 60 + b);
    if (t <= 0) t += 24 * 60;
    
    cout << "O JOGO DUROU " << t / 60 << " HORA(S) E " << t % 60 << " MINUTO(S)" << endl;
	
	return 0;
}
