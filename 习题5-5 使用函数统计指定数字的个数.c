//ϰ��5-5 ʹ�ú���ͳ��ָ�����ֵĸ���
//����Ҫ��ʵ��һ��ͳ��������ָ�����ֵĸ����ļ򵥺�����
//����number�ǲ����������͵�������digitΪ[0, 9]�����ڵ�������
//Ӧ����number��digit���ֵĴ�����

#include <stdio.h>


    
int main()
{
	
    /*int number, digit;
	int CountDigit=0;
    scanf("%d %d", &number, &digit);
    int num2=number;
    
    do{
    	int k=number%10;
    	if(k==digit){
    		CountDigit++;
		}
    	number/=10;
	}while(number>0);
    printf("Number of digit %d in %d: %d\n", digit, num2, CountDigit);
   
    

    int number, digit;
    int countDigit = 0;
    scanf("%d %d", &number, &digit);

    int numberOriginal = number; // ����ԭʼ����� number ֵ

    do {
        int k = number % 10; // ��ʼ�� k Ϊ number �ĸ�λ��
        if (k == digit) {
            countDigit++; // ��������ʱ�����ۼ�
        }
        number /= 10;
    } while (number > 0);

    printf("Number of digit %d in %d: %d\n", digit, numberOriginal, countDigit);

    return 0;
#include <stdio.h>

int main()
{
    int number, digit;
    int countDigit = 0;
    scanf("%d %d", &number, &digit);

    int numberOriginal = number; // ����ԭʼ����� number ֵ

    do {
        int k = number % 10; // ȡ�� number �ĸ�λ��
        if (k == digit) {
            countDigit++; // ��������ʱ�����ۼ�
        }
        number /= 10;
    } while (number > 0);

    printf("Number of digit %d in %d: %d\n", digit, numberOriginal, countDigit);

    return 0;
}
*/ 
#include <stdio.h>

int main()
{
    int number, digit;
    int countDigit = 0;

    printf("������һ��������");
    scanf("%d", &number);

    printf("������Ҫͳ�Ƶ����֣�");
    scanf("%d", &digit);

    int numberOriginal = number; // ����ԭʼ����� number ֵ

    do {
        int k = number % 10; // ȡ�� number �ĸ�λ��
        if (k == digit) {
            countDigit++; // ��������ʱ�����ۼ�
        }
        number /= 10;
    } while (number > 0);

    printf("Number of digit %d in %d: %d\n", digit, numberOriginal, countDigit);

    return 0;
}

