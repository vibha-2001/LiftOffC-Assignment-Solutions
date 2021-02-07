#include<stdio.h>

int main()
{ 
	int mark1,mark2,mark3,mark4,mark5,sum;
	float percentage;
	printf("Enter the marks obtained by the student in Physics");
	scanf("%d",&mark1);
	printf("Enter the marks obtained by the student in Chemistry");
	scanf("%d",&mark2);
	printf("Enter the marks obtained by the student in Biology");
	scanf("%d",&mark3);
	printf("Enter the marks obtained by the student in Mathematices");
	scanf("%d",&mark4);
	printf("Enter the marks obtained by the student in Computer");
	scanf("%d",&mark5);
	
	sum=(mark1+mark2+mark3+mark4+mark5);
	percentage=(sum*0.2);
	printf("Percentage=%.2f\n",percentage);
	
	if(percentage>=90)
	printf("Grade A");
	if(percentage>=80 && percentage<90)
	printf("Grade B");
	if(percentage>=70 && percentage<80)
	printf("Grade C");
	if(percentage>=60 && percentage<70)
	printf("Grade D");
	if(percentage>=40 && percentage<60)
	printf("Grade E");
	if(percentage<40)
	printf("Grade F");
	
	return 0;
}
