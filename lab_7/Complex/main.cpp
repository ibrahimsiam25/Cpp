#include <iostream>

using namespace std;

class Complex{
 private:
   int real;
   int img;
 public:
   Complex(){
   this-> real =this-> img =0;
    cout<<"complex ctor called"<<endl;
   }
   Complex(int _real ,int _img){
     this-> real=_real;
     this-> img=_img;
     cout<<"complex ctor called"<<endl;
   }
   Complex(int _num){
    this-> real =this-> img =_num;
    cout<<"complex ctor called"<<endl;
   }

   void SetReal(int _real)
    {
        real=_real;
    }
    int GetReal() const
    {
        return real;
    }
    void SetImg(int _img)
    {
        img=_img;
    }
    int GetImg() const
    {
        return img;
    }

   ~Complex(){
   cout<<"complex des called"<<endl;
   }

};
Complex addComplex(Complex left , Complex right){
 Complex result;
    int r=left.GetReal()+right.GetReal();
    int i=left.GetImg()+right.GetImg();
    result.SetReal(r);
    result.SetImg(i);
    return result;

}
int main()
{
    Complex c1(1,2),c2(1,2),c3;
    c3=addComplex(c1,c2);
    return 0;
}
