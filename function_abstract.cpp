// Virtual function Abstract method

#include <iostream>
using namespace std;

class Instrument
{
public:
    virtual void makeSound() = 0;

    // {
    //     cout << "Instrument is palying" << endl;
    // }
};

class Accordian : public Instrument
{
public:
    void makeSound()
    {
        cout << "Accordian is palying" << endl;
    }
};

class Paino : public Instrument
{
    void makeSound()
    {
        cout << "Paino is palying" << endl;
    }
};

int main()
{
    Instrument *i1 = new Accordian();
    // i1->makeSound();

    Instrument *i2 = new Paino();
    // i2->makeSound();


//POLYMORPHISM
    Instrument* instrument[2] = {i1, i2};
    for(int i=0;i<2;i++){
        instrument[i]->makeSound();
    }
}