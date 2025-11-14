#include <iostream>

using namespace std;

int main()
{
  int x ;
  int *ptr;
  int **ptrToPtr;

  ptr = &x;
  ptrToPtr =&ptr;

  cin>>**ptrToPtr;
  cout<<**ptrToPtr;
    return 0;
}
