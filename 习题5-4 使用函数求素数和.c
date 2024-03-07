//习题5-4 使用函数求素数和
//本题要求实现一个判断素数的简单函数、以及利用该函数计算给定区间内素数和的函数。
//素数就是只能被1和自身整除的正整数。注意：1不是素数，2是素数。
#include <stdio.h>


int main()
{
    int m, n, p;
    int PrimeSum=0;
    printf("计算给定区间内素数和");
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
    	int k;
    	int prime=1;
		for (k=2;k<=p/2;k++){
			if (p%k==0){
				
				prime=0;
				break;
			}
		} 
        if( prime!= 0 && p!=1 ){
        	printf("%d ", p);
        	PrimeSum+=p;
        }
            
    }
    printf(") = %d\n", PrimeSum);

    return 0;
}


