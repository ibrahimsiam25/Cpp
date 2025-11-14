#include <iostream>
#include <cstring>
using namespace std;


struct Employee
{
    int id;
    char name[18];
    int age;
    float salary;
};

void PrintEmployee(Employee param)
{
    cout<<"id="<<param.id<<endl;
    cout<<"name="<<param.name<<endl;
    cout<<"age="<<param.age<<endl;
    cout<<"salary="<<param.salary<<endl;
}
int main()
{

    Employee e;
    Employee *empPtr;
    empPtr=&e;


      (*empPtr).id=1;
       strcpy((*empPtr).name,"Sara");
      (*empPtr).age=22;
      (*empPtr).salary =100000;

      PrintEmployee(e);

    return 0;
}
