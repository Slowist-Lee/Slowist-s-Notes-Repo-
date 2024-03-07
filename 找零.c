#include <stdio.h>
int main()
{
	//初始化
    int price,bill,change;
    //输入金额
    printf("请输入金额");
    scanf("%d",&price);
  
    //输入票面
    printf("请输入票面");
    scanf("%d",&bill);  
    //计算找零和输出 
    if (bill>=price){
    	change=bill-price;
    	printf("找您%d元",change);
	}else{
		printf("您的钱不够");
	}
	return 0;
	
	
	
	
	
	
}

