//本题要求实现一个计算m~n（m<n）之间所有整数的和的简单函数。
#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m,n;
    int i;
    int outcome=0;
    scanf("%d %d", &m, &n);
    for (i=m;i<=n;i++) {
    	outcome+=i;
    	
    	
	}
    printf("sum = %d\n", outcome);
    
    return 0;
}


