//10개의 데이터를 배열에 읽어 들이고 배열의 모든 원소의 합을 구하라.
/*#include <stdio.h>
main()
{
	int a[10], sum =0, k;
	
	for(k=0; k<9;k++)
	{
		printf("%d번째 입력:",k);
		scanf("%d",&a[k]);
	}
	
	for(k=0;k<=9;k++)
	sum = sum +a[k];
	
	printf("SUM : %d",sum);
	
	
}*/

#include<stdio.h>
main()
{
	
	int a[10], sum =0, k;
	
	for(k=0; k<9;k++)
	{
		printf("%d번째 입력:",k);
		scanf("%d",&a[k]);
		sum = sum +a[k];
	}
	
	printf("SUM : %d",sum);
	
}
