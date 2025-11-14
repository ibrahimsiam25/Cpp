#include <iostream>

using namespace std;

int main()
{
    char name[4];

    int index =-1;
    int i =0;
    cout<<"enter statement \t ";
    cin>>name;

    do{

   if(  name[i] =='\0') {
    index = i;
   }
     i++;
    }while(index == -1);

    for(int x = index -1 ; x>=0 ;x--)

    cout<<name[x];

    return 0;
}
