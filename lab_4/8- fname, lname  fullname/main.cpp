#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char fname[15]="ibrahim";
    char lname[15]="siam";
    char fullName[30];

    strcpy(fullName,fname);
    strcat(fullName," ");
    strcat(fullName,lname);

   cout<<fullName;

    return 0;
}
