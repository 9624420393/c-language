#include<stdio.h>
int main()
{
	int english,maths,gk;
	float total,percentage;
	char grade;
	
	
	// inputs of three subjects marks//
	printf("enter the marks of english:");
	scanf("%d",&english);
	printf("enter the marks of maths:");
	scanf("%d",&maths);
	printf("enter the marks of gk:");
	scanf("%d",&gk);
	
	//find the total of all subjects//
	
	total=english+maths+gk;
	
	// average percantage//
	percentage=(total/300)*100;
	
	printf("percentage:%f\n",percentage);
	
	//  switch case grade logic//
	
	switch((int)percentage/10)
	
	{
		case 9:
			grade='A';
			break;
		case 8:
			grade='B';
			break;
		case 7:
			grade='C';
			break;
		default:
			grade='F';
			break;
	}
	
	printf("grade:%c\n",grade);
	
	return 0;
}
