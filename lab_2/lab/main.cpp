#include <iostream>

using namespace std;



int Add(int left,int right){return left+right;}
int Sub(int left,int right){return left-right;}
int Mul(int left,int right){return left*right;}
int Div(int left,int right){return left/right;}
void Calc(){
int x,y;
    char p ;
    cout<<"plz enter #1" << endl;
    cin>>x;
    cout<<"plz enter #2" << endl;
    cin>>y;
    cout<<"plz enter operator" << endl;
    cin>>p;
    switch(p)
    {
      case '*':
        cout<<Mul(x,y)<< endl;
        break;
      case '+':
        cout<<Add(x,y)<< endl;
           break;
      case '-':
        cout<<Sub(x,y)<<endl;
           break;
      case '/' :
        cout<<Div(x,y)<<endl;
           break;
      default:
        cout<<"invalid"<<endl;


    }}


int main()
{
    char ch ;
    do{
     Calc();
       cout<<"Continue ?" << endl;
       cin>>ch;
      }
        while(ch=='y'||ch=='Y');

    return 0;
}
