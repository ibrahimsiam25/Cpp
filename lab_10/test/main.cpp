
#include <iostream>
using namespace std;

class Test
{
    int x;
public:
    Test() { x = 0; }

    Test(int y) { x = y++; }           // y يتزود بعد الاستخدام

    Test(Test &r) { x = r.x++; }        // copy constructor: يزود x الأصلي ثم ياخد قيمته

    void print() { cout << x; }
};

int main()
{
    Test t(1);     // x = 1 (لأن y=1 → x=y → y++ → y يصير 2)
    t.print();     // يطبع: 1

    Test x(t);     // يستدعي الـ copy constructor
                   // ++t.x → t.x كان 1 → يصير 2
                   // x.x ياخد القيمة الجديدة = 2

    x.print();     // يطبع: 2
    t.print();     // يطبع: 2 (لأن t.x تم تعديله في الـ copy constructor!)

    return 0;
}
