#include "Event.h"

Event::Event()
{
    this->date = Date();
    this->time = Time_();
}

Event::Event(Date date, Time_ time)
{
    this->date = date;
    this->time = time;
}

Event::~Event()
{
}

void Event::setDate(Date date)
{
    this->date = date;
}

void Event::setTime(Time_ time)
{
    this->time = time;
}

Date Event::getDate() const&
{
    return this->date;
}

Time_ Event::getTime() const&
{
    return this->time;
}

void Event::show() const&
{
    cout << " Type of event : " << this->type() << endl;
    cout << " Date ::  " << this->date << endl;
    cout << " Time ::  " << this->time << endl;
}

string Event::type() const&
{
    return "notype";
}

bool Event::operator==(const Event& obj) const&
{
    if (this->type() == obj.type())
        return true;
    else return false;
}


