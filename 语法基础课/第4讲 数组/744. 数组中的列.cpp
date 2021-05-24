#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double m[12][12];
    int c;
    char t;
    
    cin >> c >> t;
    for (int i = 0; i < 12; i ++ )
        for (int j = 0; j < 12; j ++ )
            cin >> m[i][j];
    
    double sum = 0;
    for (int i = 0; i < 12; i ++ ) sum += m[i][c];
    
    if (t == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / 12);
    
    return 0;
}
