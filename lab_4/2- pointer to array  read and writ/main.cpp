#include <iostream>

using namespace std;

int main()
{
   int in[5] ;
   int *ptr = in;
   for(int i =0 ; i<5 ;i++){
       cout<<"enter int at"<< i<<endl;
   cin>>ptr[i];
   }


   cout<<"way 1"<<endl;
  for(int i =0 ; i<5 ;i++){
   cout<<ptr[i]<<endl;
   }

   cout<<"way 2"<<endl;
    for(int i =0 ; i<5 ;i++){
   cout<<*(ptr+i)<<endl;
   }

     cout<<"way 3"<<endl;
    for(int i =0 ; i<5 ;i++){
   cout<<*ptr<<endl;
      ptr++;
   }
     ptr=in;
    return 0;
}
