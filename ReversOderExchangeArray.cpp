//배열원소 역순으로 교환하는 순서 
#include<stdio.h>

main()
{
	int k, j, temp;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("변경 전 : ");
	
	for(k=0; k<=9; k++)
		printf("%d ",a[k]);
	printf("\n");
	
	for(k=0;k<=4;k++)
	{
		j =9-k;
		temp = a[k];
		a[k] = a[j];
		a[j] = temp;
	}
	printf("변경 후 : ");
	
	for(k=0; k<=9; k++)
		printf("%d ",a[k]);
	printf("\n");
	
}
