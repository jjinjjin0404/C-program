//create array[1,2,3,4,5,6,7,8,9,10]-> [6 7 8 9 10 1 2 3 4 5] 
#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},b[10];
	int k, j;
	
	for(k=0;k<=9;k++)
	if(k<5)
	{
		j=k+5; b[j] = a[k];
	}
	else
	{
		j=k-5; b[j] = a[k];
	}
	
	for(k=0;k<=9;k++)
	printf("%d ", b[k]);
	
}
