//�迭 a[8]�� �迭 b[8]�� ���Ǿ� �ִ� 2������ ���� ����� �迭 s[8]�� �����ϱ� ���

#include<stdio.h>
main()
{
	int a[8] = {0,0,1,0,0,0,0,1};
	int b[8] = {1,1,1,0,1,1,1,0};
	int s[8], c=0, k, z;
	
	for(k=0; k<=7; k++)
	{
		z=a[k]+b[k]+c;
		if(z<2)
		{
			c=0;
			s[k]=z;
		}
		else
		{
			c=1;
			s[k]=z-2;
		}
	}
	
	if(c=1)
		printf("overflow");
	else
		printf("%d",s[8]);
 } 
