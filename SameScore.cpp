// 두 개의 배열 A,B에 기억된 내용 중에서 같은 첨자 위치에 기억되어 있는 내용이 일치하 는 항목 개수 
#include<stdio.h> 
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={2,2,3,3,5,4,5,5,6,6};
	int cnt = 0, k;
	
	for(k=0; k<=9; k++)
	{
		if (a[k] == b[k])
			cnt = cnt +1;
	}
	
	 printf("일치하는 항목의 개수: %d \n",cnt);
}
