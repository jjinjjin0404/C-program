//최고 성적과 최저 성적에 해당되는 학생이 몇 명인지 출력. 
#include<stdio.h>
main()
{
	int k, cmax, cmin, max, min;
	int s[10]={11,22,33,44,77,5,5,66,55,66};
	
	cmax = cmin = 0;
	max = s[0];
	min = s[0];
	
	for(k=1; k<=9; k++)
	{
		if (s[k] > max)
			max = s[k];
		if (s[k] < min)
			min = s[k];
	}
	for(k=0; k<=9; k++)
	{
		if (s[k] == max)
			cmax++;
		if (s[k] == min)
			cmin++;
	}
	printf("max = %d, min = %d \n", max, min);
	printf("cmax =%d, cmin = %d \n", cmax, cmin);
	
}
