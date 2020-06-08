//10개의 데이터를 배열에 읽어서 그 중에 90이상인 데이터의 개수와 합을 구해서 출력
#include<stdio.h>
main()
{
	int a[10],k,sum=0,n=0;
	
	for(k=0;k<=9;k++)
	{
		printf("%d번째 입력",k);
		scanf("%d",&a[k]);
	}
	for(k=0; k<=9;k++)
		if (a[k]>=90)
		{
			sum += a[k];
			n++;
		}
printf("90이상인 갯수 : %d, 합 : %d\n",n, sum);
	
}
