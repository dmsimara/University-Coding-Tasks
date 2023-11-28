#include <stdio.h>
#include <conio.h>

int main () {
	
	int hrs, salary;
	char name [80];
	
	printf("Enter your name: ");
	gets(name);
	
	printf("Enter your hours worked: ");
	scanf("%d", &hrs);
	
	if(hrs <= 40) 
		salary = hrs * 10;
	   else 
		salary = (40*10) + (hrs - 40) * 15; 
	
	
	printf("Hello, %s! Your total salary is %d.", name, salary);
	
	return 0;
	
}
