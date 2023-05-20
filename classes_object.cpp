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

    // ENCAPSULATION
    void publishVedio(string title)
    {
        videoTitles.push_back(title);
    }
};

int main()
{
    // Youtube vishal("CodewithVishal", "Vishal");
    // vishal.publishVedio("AAA");
    // vishal.publishVedio("BBB");
    // vishal.publishVedio("CCC");

    // vishal.name = "CodewithVishal";
    // vishal.ownerName = "VishalDhaygude";
    // vishal.subscribers = 1000000;
    // vishal.videoTitles = {"AAA", "BBB", "CCC", "DDD"};

    // cout << "Name: " << vishal.name << endl;
    // cout << "Ownername: " << vishal.ownerName << endl;
    // cout << "Subscribers: " << vishal.subscribers << endl;
    // for (string videoT : vishal.videoTitles)
    // {
    //     cout << videoT << endl;
    // }

    // vishal.Subscribe();
    // vishal.Subscribe();
    // vishal.Subscribe();
    // vishal.Unsubscribe();
    // vishal.GetInfo();
}