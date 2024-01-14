
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
    string name,
          department,
          designation;
      int ID;
    int overtimeHours;

public:
    static int total;
    int set_overtimehourse;

    void setdata();
    int return_ID();

friend class ShowEmployee;
friend class UpdateEmployee;
friend class deleteEmployee;
friend class SearchEmployee;
friend class Salary;

};

#endif // EMPLOYEE_H
