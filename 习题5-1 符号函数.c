//����Ҫ��ʵ�ַ��ź���sign(x)��
//����x���û���������Ͳ�����
//���ź����Ķ���Ϊ��
//��x����0��sign(x) = 1����x����0��sign(x) = 0������sign(x) = -1��
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


