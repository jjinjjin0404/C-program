//��ü ������ �Ǽ� Cnt ��� 
#include<stdio.h>
main()
{
	int h[60],s[60], cnt=0, k;
	for(k=0;k<=59;k++)
	{
		printf(" %d ��° �й�, ���� �Է� : ",k);
		scanf("%d%d",&h[k],&s[k]);
		
		if(h[k]<0)break;
		cnt++;
	}
	printf("cnt:%d",cnt);
}
