#include<stdio.h>
#include<conio.h>
int main(){
	int Celcius;
	float fer;
	
	printf("The temperature in Celcius:");
	scanf("%d",&Celcius);
	
	fer = ( Celcius * 9/5 ) + 32;
	
	printf("The temperature in Fahrenheit: %.1f",fer);
	
	return 0;
}


