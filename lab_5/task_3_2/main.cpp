#include <iostream>

using namespace std;

int main()
{
   int row=3;
    int col=2;
    int ** ptrArr;

    ptrArr=new int*[row];

    ptrArr[0]=new int[col];
    ptrArr[1]=new int[col];
    ptrArr[2]=new int[col];
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


    //deallocation
    delete[] ptrArr[0];
    delete[] ptrArr[1];
    delete[] ptrArr[2];
    delete[] ptrArr;

    return 0;
}
