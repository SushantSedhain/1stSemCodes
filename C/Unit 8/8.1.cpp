// LAB 1: WAP to demonstrate initializing structure variable.

#include<stdio.h>
struct student{
	int id;
	char name[20];
	float marks;
	char gender;
};
int main(){
	struct student s={1,"Bimochan Poudel",80,'M'};
	printf("ID = %d",s.id);
	printf("\nName = %s",s.name);
	printf("\nMarks = %.2f",s.marks);
	printf("\nGender = %c",s.gender);
	return 0;
}
