#include <stdio.h>
#include <string.h>


union Employee {

	int id;			// 2 Bytes
	char name[20];	// 20 Bytes
	float salary;	// 4 Bytes
					// Memory occupied = 20 Bytes
};

int main() {

	/* WAP to store details of multiple employees. */
	union Employee emp1, emp2;

	puts("Employee details: ");

	emp1.id = 12;
	printf(" Employee ID: %d \n", emp1.id);

	strcpy(emp1.name, "Asmita");
	printf(" Name: %s \n", emp1.name);

	emp1.salary = 25000;
	printf(" Salary: Rs. %0.2f\n\n", emp1.salary);

	puts("Employee details: ");

	emp2.id = 14;
	printf(" Employee ID: %d \n", emp2.id);

	strcpy(emp2.name, "Saksham");
	printf(" Name: %s \n", emp2.name);

	emp2.salary = 45000;
	printf(" Salary: Rs. %0.2f\n\n", emp2.salary);

	return 0;
}
