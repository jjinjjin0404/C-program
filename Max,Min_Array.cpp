//10���� �����͸� �迭�� �о �ִ밪�� �ּҰ��� ����ϴ� ������

#include<stdio.h>
main()
{
	int a[10],max,min,k;
	
	for(k=0;k<=9;k++)
	{
		printf("%d��° �����͸� �Է��Ͻÿ� :",k);
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
	
	printf("�ִ밪 : %d, �ּҰ� : %d\n",max, min);
 } 
