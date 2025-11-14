#include <iostream>

using namespace std;

int main()
{
    int *ptr;

    ptr=new int[4];

 cout << "enter values" << endl;
     for (int j = 0; j < 4; j++)
        {
           cin>> ptr[j];
        }


       cout << "way 1" << endl;

        for (int j = 0; j < 4; j++)
        {
           cout << *(ptr+j) << endl;
        }

    cout << "way 2" << endl;

        for (int j = 0; j < 4; j++)
        {
           cout << ptr[j] << endl;
        }
   delete ptr;
    return 0;
}
