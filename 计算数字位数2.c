#include <stdio.h>
int main()
{
	//����λ����whileѭ����ϰ��
	int num;
	int n=0;
	printf("num=");
	scanf("%d",&num);
	do	{
		num/=10;
		n++;
	} while(num>0);
	
	printf("���ֵ�λ����%d",n);
	
	
	
	return 0;
 } 
