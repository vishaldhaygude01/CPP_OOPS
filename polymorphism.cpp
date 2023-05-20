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

protected:
    int contentQuality;

public:
    // Constructors
    Youtube(string Name, string OName)
    {
        name = Name;
        ownerName = OName;
        subscribers = 0;
        contentQuality = 0;
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

    void checkAnalytics()
    {
        if (contentQuality < 5)
        {
            cout << name << "This channel has bad quality content" << endl;
        }
        else
        {
            cout << name << "This channel has good contnent" << endl;
        }
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
        cout << "Hello Cooking" << endl;
        contentQuality++;
    }
};

class SingerYoutube : public Youtube
{
public:
    SingerYoutube(string Name, string OwnerName) : Youtube(Name, OwnerName)
    {
    }
    void Practice()
    {
        cout << "Hello Singer" << endl;
        contentQuality++;
    }
};
int main()
{
    CookingYoutube Cyoutube("CodeVishal", "Vishal");
    SingerYoutube Syoutube("Arijit Singh", "Arijit");

    Cyoutube.Practice();
    Syoutube.Practice();
    Syoutube.Practice();
    Syoutube.Practice();
    Syoutube.Practice();
    Syoutube.Practice();

    Youtube *y1 = &CookingYoutube;
    Youtube *y2 = &SingerYoutube;

    y1->checkAnalytics();
    y2->checkAnalytics();
}