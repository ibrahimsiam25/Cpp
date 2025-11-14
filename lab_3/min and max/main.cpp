#include <iostream>

using namespace std;

int main()
{
    int in[10] ;
    for(int i =0 ; i<10;i++){
        cin>>in[i];
    }
 int minValue =in[0] , maxValue=in[0] ;

  for(int i =1 ; i<10 ; i++){
  if(minValue> in[i]) minValue = in[i];
  }
    for(int i =1 ; i<10 ; i++){
  if(maxValue< in[i]) maxValue = in[i];
  }

cout<<"min value \t"<<minValue<<endl;
cout<<"max value \t"<<maxValue<<endl;
    return 0;
}
