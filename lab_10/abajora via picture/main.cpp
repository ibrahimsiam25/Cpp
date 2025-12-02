#include <iostream>
#include"graphics.h"

using namespace std;

class Point
{
    private:
    int x;
    int y;
    public:
    void SetX(int _x){x=_x;}
    int GetX(){return x;}
    void SetY(int _y){y=_y;}
    int GetY(){return y;}

    Point()
    {
        x=y=0;
        cout<<"point def ctor";
    }
    Point(int _x,int _y)
    {
        x=_x;y=_y;
        cout<<"point 2p ctor";
    }
    //useless
    ~Point(){cout<<"point dest";}
    //useless
    Point(const Point& old)
    {
        x=old.x;
        y=old.y;
        cout<<"point cctor";
    }
};

class Shape
{
    protected:
    int myColor;
    public:
    void SetMyColor(int _mycolor){myColor=_mycolor;}
    int GetMyColor(){return myColor;}
    Shape()
    {
        myColor=0;
    }
    Shape(int _color)
    {
        myColor=_color;
    }
    ~Shape(){}
    virtual void Draw()=0;
};

class MyLine:public Shape
{
    private:
    Point start;
    Point end;
    public:
    void SetStart(Point _start)
    {
        start=_start;
    }
    Point GetStart()
    {
        return start;
    }
    void SetEnd(Point _end)
    {
        end=_end;
    }
    Point GetEnd()
    {
        return end;
    }

    MyLine()
    {

    }

    MyLine(int x1,int y1,int x2,int y2,int _color)
    :start(x1,y1),end(x2,y2),Shape(_color)
    {

    }
    ~MyLine(){}
    MyLine(const MyLine& old)
    {
        start=old.start;
        end=old.end;
        myColor=old.myColor;
    }
    void Draw()
    {
        //built-in fn
        setcolor(myColor);
        line(start.GetX(),start.GetY(),end.GetX(),end.GetY());
    }

};

class Rect:public Shape
{
    private:
    Point ul;
    Point lr;
    public:
    //setters & getters
    Rect()
    {
    }
    Rect(int x1,int y1,int x2,int y2,int _color)
    :ul(x1,y1),lr(x2,y2),Shape(_color)
    {
    }
    ~Rect(){}
    Rect(const Rect& old){

    }
    void Draw()
    {
        setcolor(myColor);
        rectangle(ul.GetX(),ul.GetY(),lr.GetX(),lr.GetY());
    }
};

class MyCircle:public Shape
{
    int radius;
    Point center;
    public:
    MyCircle(){}
    ~MyCircle(){}
    MyCircle(const MyCircle& old){
     center=old.center;
        radius=old.radius;
        myColor=old.myColor;}
    MyCircle(int x, int y ,int _radius ,int _color):center(x,y),Shape(_color){
      radius =_radius;
    }
    void Draw()
    {
        setcolor(myColor);
        circle(center.GetX(),center.GetY(),radius);
    }
};

class MyTri:public Shape
{
    Point p1;
    Point p2;
    Point p3;
    public:
  MyTri(){
    }
       MyTri(int x1,int y1,int x2,int y2,int x3,int y3,int _color)
       :p1(x1,y1),p2(x2,y2),p3(x3,y3),Shape(_color)
       {
    }
    void Draw()
    {
        setcolor(myColor);
        line(p1.GetX(),p1.GetY(),p2.GetX(),p2.GetY());
        line(p2.GetX(),p2.GetY(),p3.GetX(),p3.GetY());
        line(p3.GetX(),p3.GetY(),p1.GetX(),p1.GetY());
    }
};


class Picture
{
    private:
    Shape** sPtr;
    int sSize;
    public:
    Picture()
    {
        sPtr=NULL;
        sSize=0;
    }
    //set relationship
    void SetShapes(Shape** _sPtr,int _sSize)
    {
        sPtr=_sPtr;
        sSize=_sSize;
    }
    //Process
    void Execute()
    {
       for (int i = 0; i < sSize; i++)
       {
            sPtr[i]->Draw();
       }
    }

};



int main()
{
    initgraph();
      MyLine larr[4]={MyLine(175,250,150,450,5),MyLine(225,250,250,450,5),MyLine(190,520,195,500,5),MyLine(205,500,210,520,5)};
    MyCircle carr[2] ={MyCircle (200,250, 50, 0),MyCircle(200,450,100, 0)};
     Rect rarr[1]   = {Rect(0,520,400,620,0)};
     MyTri tarr[1] ={MyTri(380,580,330,580,355,530,10)};
    Shape* sPtrArr[8]={larr,&larr[1],&larr[2],&larr[3],
                       rarr,
                       carr,&carr[1],
                       tarr};

    Picture p1;

    p1.SetShapes(sPtrArr,8);

    p1.Execute();

    p1.SetShapes(NULL,0);


}
