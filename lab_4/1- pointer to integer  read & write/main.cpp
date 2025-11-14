#include <iostream>

using namespace std;

int main()
{
     int x ;
     int *ptr ;
     ptr = &x;
     cout<<"enter int\t";
     cin >>*ptr;
      cout<<endl;
       cout<<*ptr;
    return 0;
}
