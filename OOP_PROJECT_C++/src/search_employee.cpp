#include "search_employee.h"
#include"employee.h"
#include"delete_employee.h"

int SearchEmployee::found = 0;

void SearchEmployee::search_by_id(Employee e[]) {
if(Employee::total==0)
{
    cout<<"NO data to change \n";
}
else{
    int search_id;
    cout << "Enter the ID you want to search about: ";
    cin >> search_id;

    found = 0;

    for (int i = 0; i < total; i++) {
        if (e[i].ID == search_id) {
            found = 1;
            cout << "The employee is found" << endl;
            cout << "Name: " << e[i].name << "\n";
            cout << "ID: " << e[i].ID << "\n";
            cout << "Department: " << e[i].department << "\n";
            cout << "Designation: " << e[i].designation << "\n";

            return;
        }
    }

    cout << "The employee is not found" << endl;
}
}
