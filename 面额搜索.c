//面额搜索的代码 struct!!

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
	printf("请输入纸币面额");
	scanf("%d",&k); 
	int i;
	for (i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
		if (coins[i].amount==k){
			res=1;
			printf("是%s\n",coins[i].name);
			break;
		
		}
	
	}
    if (res==0){
		printf("没有对应纸币"); 
	
	}
	return 0;
	
 } 
