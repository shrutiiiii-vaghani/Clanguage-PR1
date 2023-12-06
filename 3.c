#include<stdio.h>
#include<conio.h>
int main(){
	
	int first,second,third;
	
	printf("First angle :");
	scanf("%d",&first);
	printf("Second angle:");
	scanf("%d",&second);
	
	third = 180 - first - second ;
	        
	printf("third angle is : %d",third);  
	
	
	
	return 0;
}
