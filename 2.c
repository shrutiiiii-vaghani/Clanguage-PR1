#include<stdio.h>
#include<conio.h>
int main(){
	
	int base,HRA,DA,TA;
	int grosssalary;
	
	printf("Enter a base:");
	scanf("%d",&base);
	printf("Enter a HRA:");
	scanf("%d",&HRA);
	printf("Enter a DA:");
	scanf("%d",&DA);
	printf("Enter a TA:");
	scanf("%d",&TA);
	
	grosssalary = base + HRA + DA + TA;
	
	printf("grosssalary is : %d",grosssalary);
	
	return 0;
}
