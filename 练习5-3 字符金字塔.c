//练习5-3 字符金字塔
//本题要求实现函数输出n行字符金字塔。
//其中n和ch是用户传入的参数，n为[1, 9]的正整数。
//要求函数按照如样例所示的格式打印出n行由字符ch构成的字符金字塔。
//注意每个字符后有一个空格。

#include <stdio.h>

int main()
{    
    int n;
    char ch;
    int i;
    int j;
    
    scanf("%d %c", &n, &ch);
    for(i=1;i<=n;i++){
    	for(j=1;j<=n+1-i;j++){
    		printf(" ");
			}
		for(j=1;j<=i;j++){
    		printf("%c ",ch);
    		
			}
		printf("\n");
    
    	
	}
    
    
    return 0;
}


