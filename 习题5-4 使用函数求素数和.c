//ϰ��5-4 ʹ�ú�����������
//����Ҫ��ʵ��һ���ж������ļ򵥺������Լ����øú���������������������͵ĺ�����
//��������ֻ�ܱ�1��������������������ע�⣺1����������2��������
#include <stdio.h>


int main()
{
    int m, n, p;
    int PrimeSum=0;
    printf("�������������������");
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


