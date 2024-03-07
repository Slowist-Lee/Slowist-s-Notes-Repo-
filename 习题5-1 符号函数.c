//本题要求实现符号函数sign(x)。
//其中x是用户传入的整型参数。
//符号函数的定义为：
//若x大于0，sign(x) = 1；若x等于0，sign(x) = 0；否则，sign(x) = -1。
#include <stdio.h>

int sign( int x );

int main()
{
    int x;
    int out;
    scanf("%d", &x);
    
    if(x>0){
    	out=1;
    	
	}
      
    else if(x==0){
    	out=0;
    	
	}
      
    else{
    	out=-1;
    	
	}
        
    printf("sign(%d) = %d\n", x, out);
    
    return 0;
}


