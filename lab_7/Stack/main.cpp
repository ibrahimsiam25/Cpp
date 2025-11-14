#include <iostream>

using namespace std;

class Stack{
private:
    int sizeOfStack ;
    int topOfStack;
    int *arr;
public:
    friend void ViewStack(Stack param);
    Stack(){
    topOfStack=0;
    sizeOfStack =5;
   arr = new int[sizeOfStack];
    }
    Stack(int _sizeOfStack){
    topOfStack=0;
    sizeOfStack =_sizeOfStack;
    arr = new int[sizeOfStack];
    }
 void push(int value){
  if(topOfStack != sizeOfStack){
     arr[topOfStack]=value;
     topOfStack++;
  } else
  cout<<"Stack is full"<<endl;

 }
 int pop(){
 if (topOfStack !=0){
    topOfStack --;
    return arr[topOfStack];
 }else {
   cout<<"Stack is empty "<<endl;
  return -123456789;
 }
}
~Stack() {
        delete[] arr;
        cout<<"dest called";
    }
};

void ViewStack(Stack param)
{
    for (int i = 0; i < param.topOfStack;  i++)
    {
        cout<<param.arr[i]<<",";
    }
     cout<<endl;
}
int main()
{
    Stack s1(10);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    ViewStack( s1);
    ViewStack( s1);
    return 0;
}
