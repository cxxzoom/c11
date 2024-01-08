#include<stdio.h>
#include<ctype.h>
#define SPACE ' ' // SPACE表示单引号-空格-单引号
int test2(void);
int test3(void);
int test_eof(void);
int main(void)
{
    test_eof();
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
    char c;
    while((c = getchar()) != '#'){
        putchar(c);
    }
    return 0;
}

int test_eof(void){
    int ch;
    while ((ch = getchar()) != EOF)
    putchar(ch);
    return 0;
    return 0;
}