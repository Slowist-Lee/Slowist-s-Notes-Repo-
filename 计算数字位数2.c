#include <stdio.h>
int main()
{
	//计算位数（while循环练习）
	int num;
	int n=0;
	printf("num=");
	scanf("%d",&num);
	do	{
		num/=10;
		n++;
	} while(num>0);
	
	printf("数字的位数是%d",n);
	
	
	
	return 0;
 } 
