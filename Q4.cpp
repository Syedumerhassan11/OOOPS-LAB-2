#include <stdio.h>
#include <string.h>

struct Employee {
    int employee_id;
    char name[50];
    float salary;
};

struct Organisation {
    char organisation_name[50];
    char organisation_number[20];
    struct Employee emp;
};

int main() {
    struct Organisation org = {"NU-Fast", "NUFAST123ABC", {127, "Linus Sebastian", 400000}};
    
    printf("The size of structure organisation : %lu\n", sizeof(org));
    printf("Organisation Name : %s\n", org.organisation_name);
    printf("Organisation Number : %s\n", org.organisation_number);
    printf("Employee id : %d\n", org.emp.employee_id);
    printf("Employee name : %s\n", org.emp.name);
    printf("Employee Salary : %.2f\n", org.emp.salary);
    
    return 0;
}

