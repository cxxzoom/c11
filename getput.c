#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define SPACE ' ' // SPACE表示单引号-空格-单引号
int test2(void);
int test3(void);
int test_eof(void);
int guess(void);
int print_line();
int cal_char_count(char []);
// 验证输入是一个整数
long get_long(void);
// 验证范围的上下限是否有效
bool bad_limits(long begin, long end,
long low, long high);
// 计算a～b之间的整数平方和
double sum_squares(long a, long b);
int showMenu(void);
int showErr(void);
int i_guess();
int recursion(int n);
int recursion2(int);
int binary(int);
unsigned long fbnc(int);
int main(void)
{
    unsigned long q;
    q = fbnc(5);
    printf("%lu",q);
    return 0;

    printf("input your number:");
    int e ;
    while ((scanf("%d",&e) == 1))
    {
        binary(e);
        return 0;
    }

    int f = recursion2(3);
    printf("%d",f);
    return 0;
    recursion(1);
    return 0;
    i_guess();
    return 0;
    char a[] = "1.c";
    cal_char_count(a);
    return 0;
    char c;
    showMenu();
    while((c = getchar()) != '#'){
        c = tolower(c);
        switch (c)
        {
        case 'a':
            printf("the first character your input is 'A'");
            break;
        case 'b':
            printf("the first character your input is 'B'");
            break;
        case 'c':
            printf("the first character your input is 'C'");
            break;
        case 'd':
            printf("the first character your input is 'D'");
            break;
        
        default:
            system("cls");
            showErr();
            printf("\nenter any key to continue!");
            getchar();
            system("cls");
            showMenu();
            break;
        }

    }

    return 0;
}

int test2()
{
    /**
     * 该程序要记录前一个字符和当前字符。用“Receive your eieio award”这
     *  样的输入来测试。
    */
   char target[] = "ei";
   int count = 0;
   char pre,cur;
   cur = getchar();
   while(cur != '#'){
      pre = cur;
      cur = getchar();
      target[0] == pre && target[1] == cur && ++count;
   }

   printf("times = %d",count);
}

int test3(void){
    int ch;
    ch = getchar(); /* 读取下一个字符 */
    while ((ch = getchar()) != '\n')
    {
        putchar(++ch);
        putchar(ch++);
    }
    return ch;
}

int test_eof(void){
    int ch;
    while ((ch = getchar()) != EOF)
    putchar(ch);
    return 0;
    return 0;
}


int guess(void)
{
    int guess = 1;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while (getchar() != 'y') /* 获取响应，与 y 做对比 */
    {
        printf("Well, then, is it %d?\n", ++guess);
        while(getchar() != '\n'){
            continue;
        }
    }

    printf("I knew I could do it!\n");
    return 0;
}

int print_line()
{
    const long MIN = -10000000L; // 范围的下限
    const long MAX = +10000000L; // 范围的上限
    long start; // 用户指定的范围最小值
    long stop; // 用户指定的范围最大值
    double answer;
    printf("This program computes the sum of the squares of "
    "integers in a range.\nThe lower bound should not "
    "be less than -10000000 and\nthe upper bound "
    "should not be more than +10000000.\nEnter the "
    "limits (enter 0 for both limits to quit):\n"
    "lower limit: ");
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers ");
            printf("from %ld to %ld is %g\n",
            start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both "
        "limits to quit):\n");
        printf("lower limit: ");
        start = get_long();
        printf("upper limit: ");
        stop = get_long();
    }
    printf("Done.\n");
    return 0;
}

long get_long(void)
{
    long input;
    char ch;
    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        putchar(ch); // 处理错误输入
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }
    return input;
}

double sum_squares(long a, long b)
{
    double total = 0;
    long i;
    for (i = a; i <= b; i++)
    total += (double) i * (double) i;
    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;
    if (begin > end)
    {
        printf("%ld isn't smaller than %ld.\n", begin, end);
        not_good = true;
    }

    if (begin < low || end < low)
    {
        printf("Values must be %ld or greater.\n", low);
        not_good = true;
    }

    if (begin > high || end > high)
    {
        printf("Values must be %ld or less.\n", high);
        not_good = true;
    }
    return not_good;
}

int showMenu(void){
    printf("menu\n");
    printf("a:1\n");
    printf("b:2\n");
    printf("c:3\n");
    printf("d:4\n");
    printf("input menu character to do something:\n");
    return 0;
}

int showErr()
{
    printf("bad input\n");
    return 0;
}

int cal_char_count(char a[]){
    char c ;
    int count;
    FILE *fp;
    fp = fopen(a,"r");
    if(fp == NULL){
        printf("open %s error",a);
        exit(1);
    }


    while((c = getc(fp)) != EOF){
        ++count;
        if(c <= 10){
            printf("%c ",c); 
        }else{
            printf("%d ",c);
        }

    }

    printf("file char count is : %d \n",count);

    return 0;

}

/**
 * 二分查找其实是
*/
int i_guess()
{
    const int I_MAX = 1000;
    const int I_MIN  = -I_MAX;
    int left = I_MIN;
    int right = I_MAX;
    int flag = (left + right) / 2;
    printf("input your number:");
    int a ;
    while (scanf("%d",&a) != 1){
        printf("error,input your number:");
    }

    if(a > I_MAX || a < I_MIN){
        printf("error range!");
        exit(1);
    }

    while(1){
        if(flag < a){
            printf("xiao le: %d\n",flag);
            left = flag + 1;
        }else if(flag > a){
            printf("da le: %d\n",flag);
            right = flag - 1;
        }else{
            printf("hao l: %d",flag);
            break;
        }

        flag = (left + right) / 2 ;
    } 

    return 0;
}


int recursion(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if(n < 4){
        recursion(n + 1);
    }

    printf("LEVEL %d: n location %p\n", n, &n); // #2

    return 0;
}

int recursion2(int a)
{
    int arg = 1;
    printf("Level %d: n location %p\n", arg, &arg);
    if(a > 0){
        arg = a * recursion2(a - 1);
    }
    printf("Level %d: n location %p\n", arg, &arg);
    return arg;
}

int binary(int number)
{   
    int r = 0;
    r = number % 2;
    if(number >= 2){
        binary(number / 2);
    }

    printf("%c",r == 0 ? '0' : '1');

    return 0;
}

unsigned long fbnc(int n)
{
    if(n > 2){
        return fbnc(n - 1) + fbnc( n - 2);
    }else{
        return 1;
    }

}

