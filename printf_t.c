#include<stdio.h>
#include<float.h>
#include<string.h>
#define PI 123456.12345600
#define PAGES 395
#define WORDS 65618
void prt2(void);
int intPrt(void);
int floatPrt(void);
int notMatch(void);
int  floatcnv(void);
int testPrint();
int modify();
int test2();
int main(void)
{
    // floatcnv();
    test2();
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

int testPrint()
{
    printf("He sold the painting for $%2.2f.\n", 2.345e2);
    printf("%c%c%c\n", 'H', 105, '\41');
    #define Q "His Hamlet was funny without being vulgar."
    printf("%s\nhas %dcharacters.\n", Q, strlen(Q));
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
    return 0;
}


int modify()
{
    double a = 1.0/3.0;
    float b = 1.0 / 3.0;
    printf("%.6f\n",a);
    printf("%.12f\n",a);
    printf("%.16f\n",a);
    printf("%.6f\n",b);
    printf("%.12f\n",b);
    printf("%.16f\n",b);
    printf("%e\n%e",FLT_DIG,DBL_DIG);
    return 0;
}

/*
编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算
并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。接下来，
使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转
换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示小数点
后面 1 位数字。注意，美国采用的方案测量消耗单位燃料的行程（值越大越
好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。使用
#define 创建符号常量或使用 const 限定符创建变量来表示两个转换系数。
*/

int test2()
{
    const float K = 3.785; // 库到升
    float cast_oil,mail;
    scanf("%f %f",&cast_oil,&mail);
    printf("%.1f\n",mail/cast_oil);
    printf("%.1f",(mail * 3.785)/(cast_oil*1.609));
    return 0;
}