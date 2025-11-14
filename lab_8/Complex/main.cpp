#include <iostream>
/////////////////////////////////////////
//lab assignments
//1-Complex
////cpy ctor [useless]
////= operator [useless]
////c1+c2
////c1+10
////c1+=c2
////c1++
////++c1
////c1>c2

//10+c1 [standalone]

/////////////////////////////////
using namespace std;
class Complex {
 private:
     int real;
     int img;
 public:
    void setReal(int _real){
     this-> real=_real;
    }
    void setImg(int _img){
    this -> img =_img;
    }
    int getReal(){
      return real;
    }
    int getImg(){
      return img;
    }
   Complex(int _real , int _img){
       this-> real = _real;
       this-> img = _img;
   }
    Complex(){
       this-> real = 0;
       this-> img = 0;
   }
  Complex(const Complex& old){
   this-> real =old.real;
   this -> img = old.img;
  }
  ~Complex(){
    cout<<"complex des"<<endl;
  }
    void Print()
    {
        cout<<real<<"+"<<this->img<<"i"<<endl;
    }

  // =
  Complex& operator=(const Complex& right){
  this ->real = right.real;
  this -> img = right.img;
  return *this ;
  }
  //c+c
  Complex operator+(const Complex& right){
   return  Complex( this->real +right.real,this -> img +right.img);
  }
  //c+num
   Complex operator+(int _num){
    return Complex (this->real+_num,this->img);
    }

   //c1+=c2
   Complex& operator+=(const Complex& right){
    real += right.real ;
    img += right.img;
    return *this;
    }
       //++c1
    Complex operator++()
    {
        this->real++;
        this->img++;
        return *this;
    }
      //c3=c1++
      Complex operator++(int){
        Complex result(real,img);
        this->real++;
        this->img++;
        return result;
    }
     //c1>c2
    int operator>(const Complex& right)
    {
        return real>right.real&& img>right.img;
    }
};

Complex operator+(int _num,Complex right)
{
    Complex result;
    result.setReal(_num+right.getReal());
    result.setImg(right.getImg());
    return result;
}
int main(){
 Complex c1(3,4),c2(5,6),c3;

    c3=c1  +  c2;

    c3=c1+10;
    c1.Print(); //3+4i
    c3.Print(); //13+4i


    c3=++c1;  //c1.operator++()
    c3.Print(); //4+5i
    c1.Print(); //4+5i



    c3=c1++;
    c3.Print(); //4+5i
    c1.Print(); //5+6i

    c3=10+c1;
    c3.Print(); //15+6i
    c1+=c2;
    c1.Print(); //8+10i
    c2.Print(); //5+6i


    if(c1>c2)
    {
        cout<<"B";
    }




    c3=c1;

    return 0;
}
