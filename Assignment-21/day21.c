#include<stdio.h>

typedef struct employee {
	char *firstname;
	char *lastname;
	int employee_id;
	int SSN;
	char* title;
} Employee;

typedef struct employees {
	Employee e[2];
} Employees;

int main() {
	Employees emp;
	for(int i=0; i<2; i++) {
		Employee *e = &emp.e[i];
		printf("Enter the employee's first name: ");
		scanf("%ms", &e->firstname);
		printf("Enter the employee's last name: ");
		scanf("%ms", &e->lastname);
		printf("Enter the employee's ID number: ");
		scanf("%d", &e->employee_id);
		printf("Enter the last four diigts of the employee's SSN: ");
		scanf("%d", &e->SSN);
		printf("Enter the employee's job title (do not include the word 'Engineer'): ");
		scanf("%ms", &e->title);
		puts("");
	}

	for(int i=0; i<2; i++) {
		printf("\nEmployee information for %s %s\n", emp.e[i].firstname, emp.e[i].lastname);
		printf("ID: %d\n", emp.e[i].employee_id);
		printf("SSN: %d\n", emp.e[i].SSN);
		printf("Title: %s\n", emp.e[i].title);
		puts("");
	}
}
