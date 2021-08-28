#pragma once
#include "Event.h"
class Meeting :
    public Event
{
    string person;
    string mPlace;
public:
    Meeting();
    Meeting(Date date, Time_ time, string person, string mPlace);

    string getPerson()const&;
    string getPlace()const&;

    void setPerson(string person);
    void setPlace(string place);


    string type()const& override;
     string toString()const& override;
    void show()const& override;
};

