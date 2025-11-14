#include<iostream>
using namespace std;
class Stack
{
    private:
    int* arr;
    int size;
    int tos;
    public:
    Stack()
    {
        tos=0;
        size=5;
        arr=new int[size];
        cout<<"Stack def ctor"<<endl;
    }
    Stack(int _size)
    {
        tos=0;
        size=_size;
        arr=new int[size];
        cout<<"Stack 1p ctor"<<endl;
    }
Stack(const Stack& oldObject)
    {
        // //tatataaaaa
        // oldObject.tos=-123;
        // //
        tos=oldObject.tos;
        this->size=oldObject.size;
        this->arr=new int[size];
        for (int i = 0; i < tos; i++)
        {
            this->arr[i]=oldObject.arr[i];
        }
        cout<<"cpy ctor"<<endl;
    }

    ~Stack()
    {
        //useless
        for (int i = 0; i < size; i++)
        {
            arr[i]=-1;
        }
        delete[] arr;
        cout<<"Stack dest"<<endl;
    }


    void Push(int value)
    {
        if(!IsFull())
        {
            arr[tos]=value;
            tos++;
        }
        else
        {
            cout<<"FULL!!!\n";
        }
    }
    int Pop()
    {
        int result=-123;
        if(!this->IsEmpty())
        {
            tos--;
            result=arr[tos];
        }
        else
        {
            cout<<"EMPTY!!!\n";
        }
        return result;
    }
    //
    int IsFull(){return tos==size;}
    int IsEmpty(){return tos==0;}

    friend void ViewStack(Stack param);

    Stack Reverse( )
    {
        int  sixeOfStack =  tos ;
        Stack  result(sixeOfStack);
        int* arr;

       arr = new int[ sixeOfStack];
      for(int i =0 ; i<sixeOfStack ;i++ )
        {

            arr[i]=Pop();
        }

           for(int i =0 ; i<sixeOfStack ; i++ )
        {

           result.Push(arr[i]);
        }

        return result;
    }
   Stack& operator=(const Stack& right)
    {
        delete[] arr;
        tos=right.tos;
        size=right.size;
        arr=new int[size];
        for (int i = 0; i < tos; i++)
        {
            arr[i]=right.arr[i];
        }
        return *this;
    }

       bool operator==( Stack& right)
    {
        int  sixeRightOfStack =  right.tos ;
        int   sixeLeftOfStack =  tos ;
        int* arrRight;
        arrRight = new int[ sixeRightOfStack];
      for(int i =0 ; i<sixeRightOfStack ;i++ )
        {

           arrRight[i]=right.Pop();

           for(int j =0 ; j<sixeLeftOfStack  ;j++ ){

            if(arr[j]==  arrRight[i])
               {

                Pop();}
           }

        }
        bool x  =  tos == 0&&right.tos==0 ? true : false ;
        if(x == 1){
             cout<<"====== equal"<<endl;
        } else{
             cout<<"======  not equal"<<endl;
        }
        return   x ;
    }
};
void ViewStack(Stack param)
{
    for (int  i = 0; i < param.tos; i++)
    {
        cout<<param.arr[i]<<endl;
    }
}

int main()
{
    Stack s1(10);

    Stack s2 (10);

    s1.Push(10);
    s1.Push(20);
    s1.Push(30);
    s1.Push(40);
    s1.Push(50);
    s1.Push(60);
    s1.Push(70);


    s2.Push(10);
    s2.Push(20);
    s2.Push(30);
    s2.Push(40);
    s2.Push(50);
    s2.Push(60);
    s2.Push(70);

    s1==s2;

    //ViewStack(s1);
   // s2 = s1.Reverse();
  //  ViewStack(s2);
}
