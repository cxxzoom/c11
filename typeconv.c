#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
void float2int();
void checkScanf();
long pow3(int,int);
double pow2(double ,int );
void testPtr();
void ptr26();
void ptrA();
void reverse();
int main()
{
    reverse();
}

void float2int()
{
    // float a = 123.4;
    // int b = a;
    // printf("%f\n",30.0 / 4.0 * 5.0);
    // printf("%f\n",30.0 / (4.0 * 5.0));
    // printf("%f\n", 30 * 5 / 4);
    // printf("%f\n",30 / 4.0 * 5);
    // printf("%f\n",30 / 4.0 * 5);
    // printf("%f\n",30 / 4 * 5.0);
    // #define FORMAT "%s! C is cool!\n"
    // int num = 10;
    // printf(FORMAT,FORMAT);
    // printf("%d\n", ++num);
    // printf("%d\n", num++);
    // printf("%d\n", num--);
    // printf("%d\n", num);
    // int i = 0;
    // while(++i < 3){
    //     printf("%d\n",i);
    // }
    #define MESG "COMPUTER BYTES DOG"
    int n = 0;
    while ( n < 5 )
    printf("%s\n", MESG);
    n++;
    printf("That's all.\n");
}

void checkScanf()
{
    #define SIZE 10
    #define PAR 72
    int score[SIZE];
    int sum = 0;
    int avg = 0;
    for(int  i = 0;i < SIZE; ++i){
        if(! scanf("%d",&score[i])){
            printf("input with error!") ;
            exit(1);
        }
        sum += score[i];
    }

    avg = sum / SIZE;

    printf("%d",avg);

}


double pow2(double a,int p){

    double res = a;
    for (int i = 0; i < p; i++)
    {
        /* code */
        res *= a;
    }

    return res; 
}

long pow3(int a,int b){
    long int res = a;
    for (int i = 0; i < b; i++)
    {
        /* code */
        res *=  a;
    }

    return res;
}

void testPtr(){
    int k;
    for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k),k*k < 26; k += 2, printf("Now k is %d\n", k))
    printf("k is %d in the loop\n", k);
}

void ptr26(){  
    int target = 1;
    for (size_t i = 'a',j  = 1; i < 'z'; i++,j++)
    {
        printf("%c",i);
        if(j == target){
            j = 0;
            ++target;
            printf("\n");
        }
    }
    
}

void ptrA()
{
    for (size_t i = 'A'; i < 'E'; i++)
    {
        if(i == 'A'){
            printf("A\n");
            continue;
        }

        char max_c = i;
        for (size_t j = 'A'; j < max_c; j++)
        {
            printf("%c",j);
        }

        for (size_t j = max_c; j >= 'A'; j--)
        {
            printf("%c",j);
        }

        printf("\n");
    }
    
}

void reverse(){
    char a[99];
    char copy[99];
    printf("input your name:\n");
    scanf("%s",a) == 1 && printf("\nyour inputs is:%s\n",a);
    for (size_t i = 0; i < strlen(a) ; i++)
    {
        printf("%c",a[strlen(a) - i - 1]);
    }
    
}
