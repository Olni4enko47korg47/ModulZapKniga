#include "Custom.h"

Custom::Custom()
    :Event()
{
    this->description = "none";
}

Custom::Custom(Date date, Time_ time, string description)
    :Event(date,time)
{
    this->description = description;
}

void Custom::setDescription(string description)
{
    this->description = description;
}


string Custom::getDescription() const&
{
    return  this->description;
}

string Custom::type() const&
{
    return "Custom";
}

string Custom::toString() const&
{
    string str;
    str = " type of event_" + this->type() + "_" + to_string(this->date.getYear()) + "_" + to_string(this->date.getMonth()) + "_" + to_string(this->date.getDay()) + "_" +
        to_string(this->time.getHour()) + "_" + to_string(this->time.getMinutes()) + "_" +
        this->description + "\n";
    return  str;
}

void Custom::show() const&
{
    cout << " Type of event : " << this->type() << endl;
    cout << " Date ::  " << this->date << endl;
    cout << " Time ::  " << this->time << endl;
    cout << " Description :: " << this->description << endl;
     cout << "******************************************" << endl;
}
