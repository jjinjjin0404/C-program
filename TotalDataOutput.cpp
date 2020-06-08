//전체 데이터 건수 Cnt 출력 
#include<stdio.h>
main()
{
	int h[60],s[60], cnt=0, k;
	for(k=0;k<=59;k++)
	{
		printf(" %d 번째 학번, 성적 입력 : ",k);
		scanf("%d%d",&h[k],&s[k]);
		
		if(h[k]<0)break;
		cnt++;
	}
	printf("cnt:%d",cnt);
}
