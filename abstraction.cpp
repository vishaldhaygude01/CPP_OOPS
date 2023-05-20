#include <iostream>
using namespace std;

class SmartPhone
{
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;
};

class Android : public SmartPhone
{
public:
    void takeSelfie()
    {
        cout << "Android selfie.." << endl;
    }
    void makeCall()
    {
        cout << "Android call.." << endl;
    }
};

class Iphone : public SmartPhone
{
public:
    void takeSelfie()
    {
        cout << "Iphone selfie.." << endl;
    }
    void makeCall()
    {
        cout << "Iphone selfie.." << endl;
    }
};

int main()
{

    SmartPhone *s1 = new Android();
    s1->takeSelfie();
    s1->makeCall();
}