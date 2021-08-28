#pragma once
#include "Event.h"
class Custom :
    public Event
{
    string description;

public:
    Custom();
    Custom(Date date, Time_ time, string description);

    void setDescription(string description);
    string getDescription()const&;

    string type()const& override;
    string toString()const& override;
    void show()const& override;
};

