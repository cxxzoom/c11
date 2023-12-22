#include<stdio.h>
void testAdd(void);
int main(void)
{
    // double a = 2E-10;
    // printf("%le\n",a);
    // printf("%e\n",a);
    // printf("%lf\n",a);
    // printf("%d\n",a);
    // printf("%ld\n",a);
    // float toobig = 3.4E38 * 100.0f;
    // printf("%e\n", toobig);
    // long double c = 0.1234E-20;
    // printf("%ld",c/10);
    testAdd();
    return 0;
}

void testAdd(void)
{
    float a,b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);
}