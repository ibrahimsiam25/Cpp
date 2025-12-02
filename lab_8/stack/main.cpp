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
bool operator==(Stack& right)
{

    Stack temp1(*this);
    Stack temp2(right);

    for(int i = 0; i < tos; i++)
    {
        int val = temp1.Pop();
        bool found = false;
        for(int j = 0; j < temp2.tos; j++)
        {
            int tempVal = temp2.Pop();
            if(tempVal == val)
            {
                found = true;
            }
            else
            {
                temp2.Push(tempVal);
            }
        }

        if(!found) {
            cout << "====== not equal" << endl;
            return false;
        }
    }

    cout << "====== equal" << endl;
    return true;
}
Stack operator+(Stack& right)
{

    int newSize = this->tos + right.tos;
    Stack result(newSize);


    for(int i = 0; i < this->tos; i++)
    {
        result.Push(this->arr[i]);
    }

    for(int i = 0; i < right.tos; i++)
    {
        result.Push(right.arr[i]);
    }

    return result;
}
Stack& operator=(const Stack& right) {
    if (this != &right) {
        delete[] arr;
        size = right.size;
        tos = right.tos;
        arr = new int[size];
        for (int i = 0; i < tos; i++)
            arr[i] = right.arr[i];
    }
    return *this;
}
void ViewStack()
{
    for (int  i = 0; i < tos; i++)
    {
        cout<<arr[i]<<endl;
    }
}
};


int main()
{
    Stack s1(10);
    Stack s2 (10);
    Stack s3 (30);

    s1.Push(10);
    s1.Push(20);
    s1.Push(30);
    s1.Push(40);
    s1.Push(50);
    s1.Push(70);
    s1.Push(70);


    s2.Push(10);
    s2.Push(20);
    s2.Push(30);
    s2.Push(40);
    s2.Push(50);
    s2.Push(60);
    s2.Push(70);



   s1==s2;
  //   s3=s1+s2;
  s1.ViewStack();  s1.ViewStack();

   // s2 = s1.Reverse();
  //  ViewStack(s2);
}
