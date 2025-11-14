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
    //l1 call this ctor to construct start
    //l1 call this ctor to construct end
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

class MyLine
{
    private:
    Point start;
    Point end;
    int myColor;
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
    void SetMyColor(int _mycolor){myColor=_mycolor;}
    int GetMyColor(){return myColor;}
    MyLine()
    {
        //-> l1 start x|0| y|0|  end x|0| y|0|
        //start.x=0;start.y=0;end.x=0;end.y=0; //inaccessible

        //useless
        // start.SetX(0);
        // start.SetY(0);
        // end.SetX(0);
        // end.SetY(0);

        myColor=0;
        cout<<"Line def ctor";
    }

    MyLine(int x1,int y1,int x2,int y2,int _color)
    {
        //-> l2 start x|0| y|0| end x|0| y|0|
        start.SetX(x1);
        start.SetY(y1);
        end.SetX(x2);
        end.SetY(y2);
        myColor=_color;
        //->
        cout<<"Line 5p ctor";
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

//constructor chaining 1- increase performance   2- reduce written code
class MyRect
{
    private:
    Point ul;
    Point lr;
    int myColor;
    public:
    //setters & getters
    MyRect()
    {
        //r1  ul  x0 y0   lr x0 y0
        myColor=0;
        cout<<"Rect def ctor";
    }
    MyRect(int x1,int y1,int x2,int y2,int _color)
    :ul(x1,y1),lr(x2,y2)
    {
        //-> r2 ul x1 y2  lr x3 y4
        myColor=_color;
        //after ctor chaining -> useless
        // ul.SetX(x1);
        // ul.SetY(y1);
        // lr.SetX(x2);
        // lr.SetY(y2);
        cout<<"Rect 5p ctor";
    }
    ~MyRect(){}
    MyRect(MyRect& old){}
    void Draw()
    {
        setcolor(myColor);
        rectangle(ul.GetX(),ul.GetY(),lr.GetX(),lr.GetY());
    }
};

class MyCircle
{
    int radius;
    Point center;
    int myColor;
    public:
    MyCircle(){
     myColor =0;
    }
     MyCircle(int _radius,int x,int y,int _color):center(x,y){
     myColor =_color;
     radius =_radius;
    }
    void Draw()
    {
        setcolor(myColor);
        circle(center.GetX(),center.GetY(),radius);
    }
};

class MyTri
{
    Point p1;
    Point p2;
    Point p3;
    int myColor;
    public:
    MyTri(){
    myColor=0;
    }
       MyTri(int x1,int y1,int x2,int y2,int x3,int y3,int _color)
       :p1(x1,y1),p2(x2,y2),p3(x3,y3)
       {
    myColor=_color;
    }
    void Draw()
    {
        setcolor(myColor);
        line(p1.GetX(),p1.GetY(),p2.GetX(),p2.GetY());
        line(p2.GetX(),p2.GetY(),p3.GetX(),p3.GetY());
        line(p3.GetX(),p3.GetY(),p1.GetX(),p1.GetY());
    }
};

int main()
{
    initgraph();   // x   y
    MyCircle c1 (50, 200,150, 0);
     c1.Draw();
MyCircle c2 (100,200,450, 0);
     c2.Draw();
 MyRect r(0,520,400,620,0);
   r.Draw();
MyLine l1 (175,150,150,450,5);
l1.Draw();
MyLine l2 (225,150,250,450,5);
l2.Draw();
MyLine l3 (190,520,195,500,5);
l3.Draw();
MyLine l4 (205,500,210,520,5);
l4.Draw();

MyTri t (400,580,350,580,375,530,10);
t.Draw();


}

