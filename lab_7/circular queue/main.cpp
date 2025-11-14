#include <iostream>

using namespace std;
class circularQueue{
 private:
    int arr[5];
    int index ;
    int sizeOfQueue;
 public:
    circularQueue(){
    index=0;
    sizeOfQueue =0;
    }
    void enQueue(int value){
     if(sizeOfQueue != 5){
      arr[(index+sizeOfQueue)%5]= value;
     sizeOfQueue ++;
     }else
     cout<<"qeue is full"<<endl;
    }
    int deQueue (){
    if(sizeOfQueue != 0 ){

      int temp = arr[index]  ;
      sizeOfQueue --;
      index = (index+1)%5;
     return   temp;
    } else{
    cout<<"qeue is empty"<<endl;
    return -123456789;
    }

    }
  ~circularQueue(){
   for (int i = index; i < sizeOfQueue+index;  i++)
    {
       int temp  = i % 5;
        cout<<arr[temp]<<",";
    }
  }
};
int main()
{
  circularQueue c1 ;

  c1.enQueue(1);

  c1.enQueue(2);
  c1.enQueue(3);
 c1.deQueue();
  c1.enQueue(4);
  c1.enQueue(5);
  c1.enQueue(6);

    return 0;
}
