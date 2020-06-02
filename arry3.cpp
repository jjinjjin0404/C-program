//5명의 학생 성적을 입력받아서 평균출력
//intput the 5 students scores
#include<stdio.h>
#define STUDENTS 5
int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;
	for(i=0;i<STUDENTS;i++)
	{
		printf("students score :");
		scanf("%d", &scores[i]);
	}
	for(i=0;i<STUDENTS;i++)
		sum +=scores[i];
	average = sum/STUDENTS;
	printf("average score:%d\n",average);
	
	return 0;
 } 
