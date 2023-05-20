#include <iostream>
#include <list>
using namespace std;
class Youtube
{
private:
    string name;
    string ownerName;
    int subscribers;
    list<string> videoTitles;

public:
    // Constructors
    Youtube(string Name, string OName)
    {
        name = Name;
        ownerName = OName;
        subscribers = 0;
    }

    void GetInfo()
    {

        cout << "Name: " << name << endl;
        cout << "Ownername: " << ownerName << endl;
        cout << "Subscribers: " << subscribers << endl;
        for (string videoT : videoTitles)
        {
            cout << videoT << endl;
        }
    }

    void Subscribe()
    {
        subscribers++;
    }
    void Unsubscribe()
    {
        if (subscribers > 0)
        {
            subscribers--;
        }
    }
    void publishVedio(string title)
    {
        videoTitles.push_back(title);
    }
};

class CookingYoutube : public Youtube
{
public:
    CookingYoutube(string Name, string OwnerName) : Youtube(Name, OwnerName)
    {
    }
    void Practice()
    {
        cout << "Hello how are you" << endl;
    }
};
int main()
{
    CookingYoutube vishal("CodeVishal", "Vishal");
    vishal.publishVedio("ABC");
    vishal.publishVedio("DEF");
    vishal.publishVedio("XYZ");
    vishal.Subscribe();
    vishal.Subscribe();

    vishal.GetInfo();
    vishal.Practice();

    Youtube v("CodeVishal", "Vishal");
}