#include<stdio.h>
#define PI 123456.12345600
#define PAGES 395
#define WORDS 65618
void prt2(void);
int intPrt(void);
int floatPrt(void);
int notMatch(void);
int  floatcnv(void);
int main(void)
{
    floatcnv();
    return 0;
}

void prt2()
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    printf("The %d contestants ate %f berry pies.\n", number,pies);
    printf("The value of pi is %.5f.\n", PI);
    printf("The value of pi is %.20f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);
}

/**
 * 这里可以显示字符的宽度
*/
int intPrt()
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    // return 0;
    printf("*%-10d*\n", PAGES);
    return 0;
}

int floatPrt(void)
{
    const double RENT = 123.99;
    printf("*%f*\n", RENT); // 123.990000
    printf("*%e*\n", RENT); // 1.239900e2
    printf("*%4.2f*\n", RENT); // _123.99
    printf("*%3.1f*\n", RENT); // 124.0
    printf("*%10.3f*\n", RENT); // _______123.990
    printf("*%10.3E*\n", RENT); // 1.240E+2
    printf("*%+4.2f*\n", RENT); // +123.99
    printf("*%010.2f*\n", RENT);// 0000000123.99
    char a[10] = "XXX.XXX";
    printf("The NAME family just may be $%-.6s dollars richer!",a);
    return 0;
}

int notMatch()
{
    short num = PAGES; // 959
    short mnum = -PAGES; // 959
    printf("num as short and unsigned short: %hd %hu\n", num,-num); // 959 959
    printf("-num as short and unsigned short: %hd %hu\n", mnum,mnum);// -959 ? 
    printf("num as int and char: %d %c\n", num, num); // 959 
    printf("WORDS as int, short, and char: %d %hd %c\n",WORDS,WORDS,WORDS); // WORDS - __INT_MAX__
    return 0;
}

int  floatcnv()
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
}