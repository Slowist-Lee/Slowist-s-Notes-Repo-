#include <stdio.h>
int main()
{
	//����λ����whileѭ����ϰ��
	int num;
	int n=0;
	printf("num=");
	scanf("%d",&num);
	while(num>0){
		num/=10;
		n++;
	} 
	printf("���ֵ�λ����%d",n);
	
	
	
	return 0;
 } 
