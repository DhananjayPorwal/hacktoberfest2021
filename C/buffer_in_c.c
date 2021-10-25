#include<stdio.h>

int main() {
	
	char name[40] , gender;
	int id,  age;
	
	printf("Enter Name : ");
	scanf("%s",name);
	printf("Name is %s",name);
	
	printf("\nEnter Id : ");
	scanf("%d",&id);
	printf("Id is %d",id);
	
	while ((getchar()) != '\n');
	
	printf("\nEnter Gender 'M' or 'F' : ");
	scanf("%c",&gender);
	printf("Gender is %c",gender);
	
	printf("\nEnter age : ");
	scanf("%d",&age);
	printf("Age is %d",age);
}
