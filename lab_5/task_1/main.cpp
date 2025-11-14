#include <iostream>

using namespace std;

int main()
{    int * ptr ;
ptr =new int;
 cout << "enter value" << endl;
cin>>*ptr;

    cout <<*ptr<< endl;
     delete ptr;
    return 0;
}
