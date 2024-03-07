//练习5-2 找两个数中最大者
//本题要求对两个整数a和b，输出其中较大的数。
#include <stdio.h>


int main()
{    
    int a, b;
    int max;
    scanf("%d %d", &a, &b);
    max=a;
    if(b>a){
    	max=b;
	} 
    printf("max = %d\n", max);
    
    return 0;
}


