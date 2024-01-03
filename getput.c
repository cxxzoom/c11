#include<stdio.h>
#include<ctype.h>
#define SPACE ' ' // SPACE表示单引号-空格-单引号
int main(void)
{
    char ch;
    while ((ch = getchar()) != '\n') // 当一行未结束时
    {
        if (isalpha(ch)) // 留下空格
            putchar(ch + 1); // 改变其他字符
        else putchar(ch);
    }
    putchar(ch); // 打印换行符
    return 0;
}
