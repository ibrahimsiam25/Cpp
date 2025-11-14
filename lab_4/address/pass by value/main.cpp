#include <iostream>
using namespace std;

void SwapV(int left,int right)
{
    int tmp;
    tmp=left;
    left=right;
    right=tmp;
}
void SwapA(int* left,int* right)
{
    int tmp;
    tmp=*left;
    *left=*right;
    *right=tmp;
}
int main()
{
    int x=3,y=5;
    cout<<"Before Swap\n";
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    SwapV(x,y);
    cout<<"After Swap By Value\n";
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    SwapA(&x,&y);
    cout<<"After Swap\n";
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    return 0;
}

