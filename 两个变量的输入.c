#include<stdio.h>

int main()
{
	int a=0;
	int b=0;
	printf("输入a和b，带空格");
	scanf("%d %d",&a,&b);
	printf("a=%d,b=%d",a,b);
	int c=0;
	int d=0;
	printf("输入c和d，带回车");
	scanf("%d %d",&c,&d);
	printf("c=%d,d=%d",c,d);
	return 0;
}
