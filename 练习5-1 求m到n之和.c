//����Ҫ��ʵ��һ������m~n��m<n��֮�����������ĺ͵ļ򵥺�����
#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m,n;
    int i;
    int outcome=0;
    scanf("%d %d", &m, &n);
    for (i=m;i<=n;i++) {
    	outcome+=i;
    	
    	
	}
    printf("sum = %d\n", outcome);
    
    return 0;
}


