#ifndef ARRAY_EMPLOYEES_H_INCLUDED
#define ARRAY_EMPLOYEES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

int menu();

int menuInformes();

int initEmployees (Employee employees[], int len);

int addEmployees(Employee employees[], int len, int id, char nombre[], char lastName[], float salary, int sector);

int findEmployeeById(Employee employees[], int len, int id);

int removeEmployee(Employee employees[], int len, int id);

int sortEmployees(Employee employees[], int len, int order);

int printEmployees(Employee employees[], int length);

int printEmpoyee(Employee employees);

int seachFree(Employee employees[], int len);

Employee newEmployee(int id, char name[], char lastName[], float salary, int sector);

int mostrarSalarios(Employee employees[], int len);


#endif // ARRAY_EMPLOYEES_H_INCLUDED
