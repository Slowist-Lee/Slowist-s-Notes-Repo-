#include <stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	printf("first");
	scanf("%d %d",&hour1,&minute1);
	printf("second");
	scanf("%d %d",&hour2,&minute2);
	
	int ih=hour2-hour1;
	int im=minute2-minute1;
	if (im<0){
		im=60+im;
		ih--;
	
	}
	printf("%dʱ%d��",ih,im);
	return 0;
}
