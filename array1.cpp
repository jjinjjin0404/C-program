//create array[1,2,3,4,5,6,7,8,9,10]-> [10,9,8,7,6,5,4,3,2,1] 
#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},b[10];
	int k, j;
	
	for(k=0;k<=9;k++)
	b[k] = a[9-k];
	
	for(k=0;k<=9;k++)
	printf("%d ", b[k]);
	
}
