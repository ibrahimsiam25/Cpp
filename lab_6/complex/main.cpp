#include <iostream>

using namespace std;

class Complex
{
    private:
    int real;
    int img;
    public:
    void SetReal(int _real){
        real=_real;
    }
    int GetReal() const {
        return real;
    }
    void SetImg(int _img){
        img=_img;
    }
    int GetImg() const{
        return img;
    }
    void Print(){
        if(img < -1 && real>0)
        cout<<real<<img <<"i"<<endl;

        else if(img == 0 && real==0)
        cout<<"0"<<endl;

        else if (img == 1 && real>0)
        cout<<real <<"+"<<"i"<<endl;

        else if (img == -1 && real>0)
        cout<<real <<"-"<<"i"<<endl;

        else if (img == -1 && real==0)
        cout<<"-i"<<endl;

        else if (img == 1 && real==0)
        cout<<"i"<<endl;

        else if (img == 0 && real==1)
        cout<<"1"<<endl;

        else if (img == 0 && real==1)
        cout<<"1"<<endl;

        else
        cout<<real <<"+"<<img<<"i"<<endl;
    }

    Complex Add(const Complex& right) const{
        Complex result;
        result.real= (*this).real +right.real;
        result.img=img+right.img;
        return result;
    }

};
Complex AddComplex(const Complex& left,const Complex& right){
    Complex result;
    int r=left.GetReal()+right.GetReal();
    int i=left.GetImg()+right.GetImg();
    result.SetReal(r);
    result.SetImg(i);
    return result;
}

int main()
{
    Complex c1 ,c2,c3;

   c2.SetReal(1);
   c2.SetImg(2);

    int tmp;
    cout<<"Enter real\n";
    cin>>tmp;
    c1.SetReal(tmp);
    cout<<"Enter img\n";
    cin>>tmp;
    c1.SetImg(tmp);

    c1.Print();
    c2.Print();

    c3=c1.Add(c2);

    c3.Print();

    return 0;
}
