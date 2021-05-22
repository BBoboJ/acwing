#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double n1, n2, n3, n4, x, y, z;
    cin >> n1 >> n2 >> n3 >> n4;
    
    x = 0.2 * n1 + 0.3 * n2 + 0.4 * n3 + 0.1 * n4;
    printf("Media: %.1lf\n", x);
    
    if (x >= 7) puts("Aluno aprovado.");
    else if (x >= 5)
    {
        puts("Aluno em exame.");
        cin >> y;
        printf("Nota do exame: %.1lf\n", y);
        z = (x + y) / 2;
        if (z >= 5) puts("Aluno aprovado.");
        else puts("Aluno reprovado.");
        printf("Media final: %.1lf\n", z);
    }
    else puts("Aluno reprovado.");
    
	return 0;
}
