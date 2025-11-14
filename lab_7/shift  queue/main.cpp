#include <iostream>

using namespace std;

class ShiftQueue{
private:
int arr[5];
int topOfQueue;
public:
    ShiftQueue(){
    topOfQueue =0;
    }
    void enQueue(int value){
     if(topOfQueue != 5){
      arr[topOfQueue]= value;
      topOfQueue++;
     }else
     cout<<"qeue is full"<<endl;
    }
    int deQueue (){
    if(topOfQueue != 0 ){

      int temp = arr[0]  ;
      for (int i = 0; i < topOfQueue;  i++)
    {
     arr [i] =arr[i+1];
    }
        topOfQueue --;
     return   temp;
    } else{
    cout<<"qeue is empty"<<endl;
    return -123456789;
    }

    }
  ~ShiftQueue(){
   for (int i = 0; i < topOfQueue;  i++)
    {
        cout<<arr[i]<<",";
    }
  }
};
int main()
{
    ShiftQueue s1 ;

    s1.enQueue(1);
    s1.enQueue(2);
    s1.enQueue(3);
    s1.enQueue(4);
    s1.enQueue(5);

    s1.deQueue();
    s1.deQueue();
    return 0;
}
