#include <iostream>

using namespace std;

int getMinVale(int in[],int sizeIn){
int minValue =in[0]  ;
 for(int i =1 ; i<sizeIn ; i++){
  if(minValue> in[i]){
    minValue = in[i];
  }
  }
  cout<< "minValue \t" << minValue <<endl;
return minValue;
}

int main()
{
    int in[10] ;
    int sortedArr[10];
    for(int i =0 ; i<10;i++){
        cin>>in[i];
    }



 for(int i =0 ; i<10 ; i++){
    int tempArrSize = 10-i ;
    int tempArr[tempArrSize] ;
  //  cout<< "tempArrSize \t" << tempArrSize <<endl;

 for(int x = 0 ; x<tempArrSize ; x++){
    tempArr[x] = in [x+i];
 }
 //for(int i =0 ; i<tempArrSize ; i++)
  // cout<< "tempArr \t" << tempArr[i] <<endl;

sortedArr[i]=getMinVale(tempArr,tempArrSize);
cout<< "Arr \t" << sortedArr[i] <<endl;
  }

  cout<<"sorted array \t";
for(int i =0 ; i<10 ; i++)
cout<<sortedArr[i]<<"\t |";

//cout<<getMinVale(in,10);
    return 0;
}
