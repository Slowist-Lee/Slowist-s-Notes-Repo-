//forÑ­»·ÊµÏÖ½×³Ë
#include<stdio.h>
int main()
{
	int n;
	printf("n=");
	scanf("%d",&n);
	int sum=1;
	int i;
	for (i=1;i<=n;i++){
		sum*=i;
	}
	printf("out=%d",sum);
	
	
	return 0;
 } 
