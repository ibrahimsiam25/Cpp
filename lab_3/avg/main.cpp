#include <iostream>

using namespace std;

int main()
{
    int arr[3][4];


    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"Enter # at index"<<i<<","<<j<<endl;
            cin>>arr[i][j];
        }
    }


  for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    int sum[4]={0};

    for (int i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            sum[i]+=arr[j][i];
        }
        cout<<sum[i]<<endl;
    }

      for (int i = 0; i < 4; i++)
    {
         int  avge =  sum[i]/ 3 ;
         cout<<"avge column\t"<<i<<"\t is \t"<< avge <<endl;
    }



}
