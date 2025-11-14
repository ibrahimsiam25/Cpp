#include <iostream>

using namespace std;
bool leapYear(int year){
    if(year%4==0) return true;
    else return false;
}
int calcDaysInMonth(int year , int month ){
      if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)   return 31;
      else if(month==4||month==6||month==9||month==11)    return 30;
      else if (month==2){
      int noOfDayes  =leapYear(year)? 29:28;
      return noOfDayes;
         }
      else   return  -1;
}
bool vaildDay(int year , int month , int day){
    if(day<=calcDaysInMonth(year,month)&&day>0) return true;
        else return false;
    }


int main()
{

int currentDay=3;
int currentMonth=11;
int currentYear=2025;

int day,month,year;

int ageYears ,ageMonths, ageDays;
    do{
    cout << "plz enter your year from 1980->2025" << endl;
    cin>> year;
    }while(year>currentYear || year <1980);

     do{
    cout << "plz enter your month 1-12" << endl;
    cin>> month;
    }while(month>12||month<1);

   do{
    cout << "plz enter your day" << endl;
       cin>> day;
    }while(!vaildDay(year,month,day));


    if (day > currentDay) {
    currentMonth -= 1;
      int temp  =calcDaysInMonth(currentYear,currentMonth);
      currentDay +=  temp;

    }

    if(month > currentMonth){
        currentYear -=1;
        currentMonth +=12;
    }

cout<<"you're\t"<<currentYear-year<<"y\t"<<currentMonth-month<<"months and\t"<<currentDay-day<<"days"<< endl;


    return 0;
}
