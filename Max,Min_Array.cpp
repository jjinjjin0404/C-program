//10개의 데이터를 배열에 읽어서 최대값과 최소값을 출력하는 순서도

#include<stdio.h>
main()
{
	int a[10],max,min,k;
	
	for(k=0;k<=9;k++)
	{
		printf("%d번째 데이터를 입력하시오 :",k);
		scanf("%d",&a[k]);
	}
	
	max = a[0];
	min = a[0];
	
	for (k=1; k<=9; k++)
	{
		if (a[k]>max)
			max = a[k];
		
		if (a[k]<min)
			min = a[k];
	}
	
	printf("최대값 : %d, 최소값 : %d\n",max, min);
 } 
