
#include"graphics.h"
#include<iostream>
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
    MyLine *lPtr;
    int lSize;
    Rect *rPtr;
    int rSize;
    MyCircle *cPtr;
    int cSize;
    MyTri *tPtr;
    int tSize;

    public:
    Picture()
    {
        lPtr=NULL;
        lSize=0;
        rPtr=NULL;
        rSize=0;
        cPtr =NULL;
        cSize =0;
        tPtr =NULL;
        tSize=0;
    }
    //set relationship
    void SetLines(MyLine* _lPtr,int _lSize)
    {
        lPtr=_lPtr;
        lSize=_lSize;
    }
     void SetRects(Rect* _rPtr,int _rSize)
    {
        rPtr=_rPtr;
        rSize=_rSize;
    }
       void SetCircuts(MyCircle* _cPtr,int _cSize)
    {
        cPtr=_cPtr;
        cSize=_cSize;
    }   void SetTri(MyTri* _tPtr,int _tSize)
    {
        tPtr=_tPtr;
        tSize=_tSize;
    }
    //Process
    void Execute()
    {
        for (int i = 0; i < lSize; i++)
        {
            lPtr[i].Draw();
        }
        for (int i = 0; i < rSize; i++)
        {
            rPtr[i].Draw();
        }
  for (int i = 0; i < cSize; i++)
        {
            cPtr[i].Draw();
        }  for (int i = 0; i < tSize; i++)
        {
            tPtr[i].Draw();
        }

    }

};

int main()
{
    initgraph();
     Picture p1;
    MyLine larr[4]={MyLine(175,150,150,450,5),MyLine(225,150,250,450,5),MyLine(190,520,195,500,5),MyLine(205,500,210,520,5)};
    MyCircle carr[2] ={MyCircle (200,150, 50, 0),MyCircle(200,450,100, 0)};
     Rect rarr[1]   = {Rect(0,520,400,620,0)};
     MyTri tarr[1] ={MyTri(400,580,350,580,375,530,10)};
    p1.SetLines(larr,4);
    p1.SetCircuts(carr,2);
    p1.SetRects(rarr,1);
    p1.SetTri(tarr,1);
    p1.Execute();

}


