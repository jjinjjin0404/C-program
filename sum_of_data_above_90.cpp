//10���� �����͸� �迭�� �о �� �߿� 90�̻��� �������� ������ ���� ���ؼ� ���
#include<stdio.h>
main()
{
	int a[10],k,sum=0,n=0;
	
	for(k=0;k<=9;k++)
	{
		printf("%d��° �Է�",k);
		scanf("%d",&a[k]);
	}
	for(k=0; k<=9;k++)
		if (a[k]>=90)
		{
			sum += a[k];
			n++;
		}
printf("90�̻��� ���� : %d, �� : %d\n",n, sum);
	
}
