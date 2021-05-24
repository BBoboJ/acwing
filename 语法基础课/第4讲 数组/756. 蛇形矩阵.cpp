#include <iostream>
#include <cstdio>

using namespace std;

const int N = 110;

int n, m;
int a[N][N];

int main()
{
    cin >> n >> m;
    
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int x = 0, y = 0, d = 0;
    
    for (int i = 1; i <= n * m; i ++ )
    {
        a[x][y] = i;
        
        int tx = x + dx[d];
        int ty = y + dy[d];
        if (tx >= n || tx < 0 || ty >= m || ty < 0 || a[tx][ty]) 
            d = (d + 1) % 4;
            
        x += dx[d];
        y += dy[d];
    }
    
    for (int i = 0; i < n; i ++ )
    {
        for (int j = 0; j < m; j ++ )
            cout << a[i][j] << ' ';
        cout << endl;
    }
    
    return 0;
}
