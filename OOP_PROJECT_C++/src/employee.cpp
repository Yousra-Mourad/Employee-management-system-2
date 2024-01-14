#include "employee.h"

int Employee::total = 0;


void Employee::setdata()
 {
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter The numeric  ID: ";
    cin >> ID;
    cout << "Enter Department: ";
    cin >> department;
    cout<<"Enter Designation ( department_manager , engineer , senior_engineer , other): ";
    cin>>designation;
    total++;
}
 int Employee::return_ID()
 {
     return ID;
 }
