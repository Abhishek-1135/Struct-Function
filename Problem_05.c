//what will be the difference if the above program is going to implemented through union, implement the same program through union and difference the output as well as memory allocation.


#include <stdio.h>

union personal {
    char name[50];
    char doj[20];
    float salary;
};

int main() {

    union personal p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter date of joining: ");
    scanf("%s", p.doj);

    printf("Enter salary: ");
    scanf("%f", &p.salary);

    printf("\n---- PERSONAL DETAILS (Using Union) ----\n");

    printf("Name = %s\n", p.name);
    printf("Date of Joining = %s\n", p.doj);
    printf("Salary = %.2f\n", p.salary);

    return 0;
}


// code will not show the name and date of joining only shoeing the salary