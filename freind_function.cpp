#include <iostream>
using namespace std;

class EquilateralTraingle
{
private:
    float a;
    float circumfernce;
    float area;

public:
    void setA(float length)
    {
        a = length;
        circumfernce = a * 3;
        area = (1.73 * a * a) / 4;
    }

    friend void printResult(EquilateralTraingle);
};

void printResult(EquilateralTraingle et)
{
    cout << "Circumference: " << et.circumfernce << endl;
    cout << "area: " << et.area << endl;
}

int main()
{
    EquilateralTraingle et;
    et.setA(3);
    printResult(et);
}