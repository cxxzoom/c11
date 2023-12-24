#include<stdio.h>
#include<string.h>
#define DES  62.4
#define NAME "You are an extraordinary being."
void testArray(void);
void inputName(void);
int main(void)
{
    inputName();
    return 0;
}

void testArray(void)
{
    char name[40];
    scanf("%s",name);
    printf("your input is:%s\n",name);
    printf("size:%d\n",sizeof name);
    printf("size of :%d\n", strlen(name));
}


void inputName(void)
{
    char name[40];
    scanf("%s",name);
    printf("Hello, %s.%s,name str_len=%d\n", name, NAME,strlen(name));
    printf("name sizeof = %d\n", sizeof(name));
    printf("name sizeof = %zd\n", strlen(name));
    printf("NAME sizeof = %d\n", sizeof(NAME));
    printf("NAME sizeof = %zd\n",strlen(NAME));
}