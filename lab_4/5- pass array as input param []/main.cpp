#include <iostream>

using namespace std;
void PrintArrayAsParam(int param[5]){
    for (int i = 0; i < 5; i++)
    {
        cout<<param[i];
    }
}
void PrintArrayAsPointer(int *param,int _size)
{
    for (int i = 0; i < _size; i++)
    {
        cout<<param[i];
    }
}
int main()
{
  int arr[5]={1,2,3,4,5};
  cout<<"as param"<<endl;
  PrintArrayAsParam(arr);
    cout<<"as pointer"<<endl;
  PrintArrayAsPointer(arr,5);
    return 0;
}
