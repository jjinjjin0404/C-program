//10���� �����͸� �迭�� �о� ���̰� �迭�� ��� ������ ���� ���϶�.
/*#include <stdio.h>
main()
{
	int a[10], sum =0, k;
	
	for(k=0; k<9;k++)
	{
		printf("%d��° �Է�:",k);
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
		printf("%d��° �Է�:",k);
		scanf("%d",&a[k]);
		sum = sum +a[k];
	}
	
	printf("SUM : %d",sum);
	
}
