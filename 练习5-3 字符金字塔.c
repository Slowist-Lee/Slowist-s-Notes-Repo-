//��ϰ5-3 �ַ�������
//����Ҫ��ʵ�ֺ������n���ַ���������
//����n��ch���û�����Ĳ�����nΪ[1, 9]����������
//Ҫ����������������ʾ�ĸ�ʽ��ӡ��n�����ַ�ch���ɵ��ַ���������
//ע��ÿ���ַ�����һ���ո�

#include <stdio.h>

int main()
{    
    int n;
    char ch;
    int i;
    int j;
    
    scanf("%d %c", &n, &ch);
    for(i=1;i<=n;i++){
    	for(j=1;j<=n+1-i;j++){
    		printf(" ");
			}
		for(j=1;j<=i;j++){
    		printf("%c ",ch);
    		
			}
		printf("\n");
    
    	
	}
    
    
    return 0;
}


