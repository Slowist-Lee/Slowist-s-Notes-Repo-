#include <stdio.h>
int main()
{
	//��ʼ��
    int price,bill,change;
    //������
    printf("��������");
    scanf("%d",&price);
  
    //����Ʊ��
    printf("������Ʊ��");
    scanf("%d",&bill);  
    //������������ 
    if (bill>=price){
    	change=bill-price;
    	printf("����%dԪ",change);
	}else{
		printf("����Ǯ����");
	}
	return 0;
	
	
	
	
	
	
}

