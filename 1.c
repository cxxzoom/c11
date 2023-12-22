//
// Created by Administrator on 2023/12/08.
//
#include <stdio.h>
float change(void);
void smile(void);
void echoSmile(void);
void overflow(void);
void charT(void);
void enterCharater(void);

int main(void)
{
    // echoSmile();
    // overflow();
    // charT();
    enterCharater();
    return 0;
}

void echoSmile(void)
{
    for(int i = 3; i >0; --i){
        int j = i;
        while(j){
            smile();
            --j;
        }
        printf("\n");
    }
}

float change(void){
    float result = 0;
    float input;
    printf("input your size\n");
    scanf("%f",&input);

    result = input * 2.54;
    printf("");
    return result;
}


void smile(void)
{
    printf("Smile!");
}

void overflow(void){
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);
}

void charT(void)
{
    char t = 'T';
    char t1 = "ABCDEF";
    printf("%c",t1);
}

void enterCharater(void)
{
    printf("enter charater\n");
    char t;
    scanf("%c",&t);
    printf("%c is enter,ASCII is %d",t,t);
}