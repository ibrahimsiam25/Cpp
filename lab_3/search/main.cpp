#include <iostream>

using namespace std;

int main()
{

    int in[10] ;
    int x ;
   int  index =-1 ;
    for(int i =0 ; i<10;i++){
        cin>>in[i];
    }
 cout<<"enter no" ;
 cin>>x;
   for(int i =0 ; i<10 ;i++){
       if(in[i]==x) index = i;
    }
    if(index!= -1){
        cout <<"index ="<< index;
    }else
    cout<<"not found";
    return 0;
}
