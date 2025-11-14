#include <iostream>

using namespace std;

int main()
{
     int* ptrArr[3];

    ptrArr[0]=new int[2];
    ptrArr[1]=new int[2];
    ptrArr[2]=new int[2];
 cout << "enter values" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
             cin>>ptrArr[i][j];
        }
    }
cout<<"//////////////////////"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
             cout<<ptrArr[i][j]<<endl;
        }
    }


    delete[] ptrArr[0];
    delete[] ptrArr[1];
    delete[] ptrArr[2];
    return 0;
}
