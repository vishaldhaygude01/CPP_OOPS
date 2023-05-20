#include <iostream>
#include <string>
using namespace std;

struct Youtube
{
    string Name;
    int subscriber;

    Youtube(string name, int subCnt)
    {
        Name = name;
        subscriber = subCnt;
    }
};

ostream &operator<<(ostream &COUT, Youtube &youtube)
{
    COUT << "Name: " << youtube.Name << endl;
    COUT << "Subscribers: " << youtube.subscriber << endl;
    return COUT;
}

int main()
{

    Youtube y1 = Youtube("Vishal", 12345);
    Youtube y2 = Youtube("CodewithVishal", 80000);
    cout << y1 << y2;

    // operator<<(cout, y1);
    // cout << y2;
}