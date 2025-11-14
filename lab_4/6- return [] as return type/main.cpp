#include <iostream>

using namespace std;
/*
 int []  returnArray(){
    int arr[5]={1,2,3,4,5};
  return arr;
} */
int *  returnPointer()
{
   int arr[5]={1,2,3,4,5};
  return arr;
}
int main()
{


  //returnArray();
  returnPointer();


    return 0;
}
