#include "delete_employee.h"
#include "show_employee.h"
#include "update_employee.h"
#include"search_employee.h"

 Employee e[100];
int main()
{


    int numEmployees, Proceed = 1;
    deleteEmployee del;
    ShowEmployee show;
    UpdateEmployee update;
    Salary salary[numEmployees];
    SearchEmployee search;
    cout << "\n\n\t\t\t\t HELLO IN OUR PROJECT :) \t\t\t\t\t\n";
      cout << "\n\t\t\tMain Menu \n";
        cout << "\t\t=============================" << endl
             << endl;
        cout << "Press 1.To Add An Employee." << endl;
        cout << "-------------------------------" << endl;
        cout << "Press 2.To Show All Employees Information." << endl;
        cout << "-------------------------------" << endl;
        cout << "Press 3.To Delete An Employee." << endl;
        cout << "-------------------------------" << endl;
        cout << "Press 4.To Modify An Employee's Information." << endl;
        cout << "-------------------------------" << endl;
        cout << "Press 5.To Search For An Employee." << endl;
        cout << "-------------------------------" << endl;
        cout << "Press 6.To Calculate The Net Salary Of An Employee." << endl;
        cout << "-------------------------------" << endl;
        cout << "Press 7.To Exit From the Program." << endl;

    while (Proceed == 1)
    {
        cout << "\n\n==================================================\n\n"
             << "Enter Your Choice : ";
        int value;
        cin >> value;
        cout <<endl;

        switch (value)
        {
        case 1:
            cout << "How Many Employees' Data Do You Want to Enter?" << endl;
            cin >> numEmployees;
            for (int i = 0; i < numEmployees; i++)
            {
                e[i].setdata();
                for(int j=i-1 ; j>=0;j--)
                {
                    if(e[j].return_ID()==e[i].return_ID())
                    {
                        cout<<"can not add this employee ,please try again\n";
                        e[j].setdata();
                        Employee::total--;
                    }
                    else{}
                }
                cout << endl ;

            }
            break;

        case 2:
                show.show_all_data(e);
                break;

        case 3:
            del.set_id();
            del.delete_employee_by_id(e);
            break;

        case 4:
            update.set_data();
            update.change_data(e);
            update.Add_employee(e);
            break;

        case 5:
            search.search_by_id(e);
            break;
        case 6:
            show.showsalary( e, salary);
            break;

        case 7:
            exit(0);
            break;

        default:
            cout << " Your Choise Is Not Correct , Please Try Again ." << endl;
            break;
        }
    }
    return 0;
}
