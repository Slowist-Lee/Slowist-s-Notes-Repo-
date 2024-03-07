//习题5-5 使用函数统计指定数字的个数
//本题要求实现一个统计整数中指定数字的个数的简单函数。
//其中number是不超过长整型的整数，digit为[0, 9]区间内的整数。
//应返回number中digit出现的次数。

#include <stdio.h>


    
int main()
{
	
    /*int number, digit;
	int CountDigit=0;
    scanf("%d %d", &number, &digit);
    int num2=number;
    
    do{
    	int k=number%10;
    	if(k==digit){
    		CountDigit++;
		}
    	number/=10;
	}while(number>0);
    printf("Number of digit %d in %d: %d\n", digit, num2, CountDigit);
   
    

    int number, digit;
    int countDigit = 0;
    scanf("%d %d", &number, &digit);

    int numberOriginal = number; // 保存原始输入的 number 值

    do {
        int k = number % 10; // 初始化 k 为 number 的个位数
        if (k == digit) {
            countDigit++; // 满足条件时进行累加
        }
        number /= 10;
    } while (number > 0);

    printf("Number of digit %d in %d: %d\n", digit, numberOriginal, countDigit);

    return 0;
#include <stdio.h>

int main()
{
    int number, digit;
    int countDigit = 0;
    scanf("%d %d", &number, &digit);

    int numberOriginal = number; // 保存原始输入的 number 值

    do {
        int k = number % 10; // 取出 number 的个位数
        if (k == digit) {
            countDigit++; // 满足条件时进行累加
        }
        number /= 10;
    } while (number > 0);

    printf("Number of digit %d in %d: %d\n", digit, numberOriginal, countDigit);

    return 0;
}
*/ 
#include <stdio.h>

int main()
{
    int number, digit;
    int countDigit = 0;

    printf("请输入一个整数：");
    scanf("%d", &number);

    printf("请输入要统计的数字：");
    scanf("%d", &digit);

    int numberOriginal = number; // 保存原始输入的 number 值

    do {
        int k = number % 10; // 取出 number 的个位数
        if (k == digit) {
            countDigit++; // 满足条件时进行累加
        }
        number /= 10;
    } while (number > 0);

    printf("Number of digit %d in %d: %d\n", digit, numberOriginal, countDigit);

    return 0;
}

