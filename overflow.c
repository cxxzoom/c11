#include<stdio.h>
#include <locale.h>
void testSignedInt(void);
void testFloat(void);
void printASCII(void);
void printStr(void);
void printFloat(void);
void printAge2Sec(void);
void printCount(void);
int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");
    // testSignedInt();
    // testFloat();
    // printASCII();
    // printStr();
    // printAge2Sec();
    printCount();
    return 0;
}

void testSignedInt(void)
{
    printf("show int size:");
    printf("%ld\n",sizeof(int));
    int a = __INT_MAX__;
    printf("max = %d\n",a);
    printf("max + 1 = %d\n",a + 1); 
    char str[] = "while int top overflow, the value become minimal\n";
    printf("%s",str);
    int b = 0 - a - 1;
    printf("min = %d\n",b);
    printf("min -1 = %d\n",b -1); 
    char str1[] = "while int down overflow ,the value become maximal\n";
    printf("%s",str1);
    printf("=====================");
}


void testFloat(void){
    float f = 3.4E38 * 100.0f;
    char str[] = "while float top overflow, the value become inf\n";
    printf("%s",str);
    float b =(-3.4E-38 -10)/ 10e100;
    printf("max = %e\n",f);
    printf("min = %e\n",b); 
    char str1[] = "while int down overflow ,the value become -0\n";
    printf("%s",str1);
}


void printASCII(void){
    // 这里要注意输入输出的类型
    printf("\a");
    printf("input a ASCII number, between 0-256\n");
    char a ;
    scanf("%c",&a);
    printf("input is ASCII: %c\n",a);
}

void printStr(void){
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"");
}

/**
 * 编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指
 * 数形式。然后，如果系统支持，再打印成p记数法（即十六进制记数法）。
 * 按以下格式输出（实际显示的指数位数因系统而异）：
*/
void printFloat(void)
{
    float f ;
    scanf("%f",&f);
    
    printf("Enter a floating-point value: %.2f",f);
    printf("fixed-point notation: %f",f);
    printf("exponential notation: 6.425000e+01");
    printf("p notation: 0x1.01p+6");
}

/**
 * 一年大约有3.156×10
 * 7秒。编写一个程序，提示用户输入年龄，然后显
 * 示该年龄对应的秒数。
*/
void printAge2Sec(void)
{
    const float SEC = 3.156e7;
    int age;
    printf("\ninput your age:\n");
    scanf("%d",&age);
    printf("age to sec = %e", SEC * age);
}

/**
 * 1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/

void printCount(void)
{
    const int KT = 950;
    const float water_w = 3.0e-23;
    int w;
    printf("\ninput KT , g :\n");
    scanf("%d",&w);
    printf("age to sec = %e", (w * KT) / water_w);
}

/**
 * 1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
*/
// 同上，太简单了，没必要再重复写

/**
 在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等
 于2大汤勺，1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以
 品脱、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用
 浮点类型比整数类型更合适？
*/

// 也简单，为什么浮点更合适？因为有除法啊，