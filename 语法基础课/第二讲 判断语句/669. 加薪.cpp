#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    double salary;
    int rate;
    
    cin >> salary;
    
    if (salary <= 400) rate = 15;
    else if (salary <= 800) rate = 12;
    else if (salary <= 1200) rate = 10;
    else if (salary <= 2000) rate = 7;
    else rate = 4;
    
    printf("Novo salario: %.2lf\n", salary + salary * rate / 100);
    printf("Reajuste ganho: %.2lf\n", salary * rate / 100);
    printf("Em percentual: %d %%\n", rate);
    
	return 0;
}

// Êä³ö %  printf("%%");
