//��������Ĵ��� struct!!

#include<stdio.h>

struct{
	int amount;
	char *name;
}coins[]={
	{1,"penny"},
	{5,"nickle"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollar"}
};
int main()
{
	int k;
	int res=0;
	printf("������ֽ�����");
	scanf("%d",&k); 
	int i;
	for (i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
		if (coins[i].amount==k){
			res=1;
			printf("��%s\n",coins[i].name);
			break;
		
		}
	
	}
    if (res==0){
		printf("û�ж�Ӧֽ��"); 
	
	}
	return 0;
	
 } 
