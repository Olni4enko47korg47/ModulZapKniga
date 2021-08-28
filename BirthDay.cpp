#include "BirthDay.h"

BirthDay::BirthDay()
    :Event()
{
    this->hero = "noHero";
    this->place = "noPlace";
    this->age = 0;
}

BirthDay::BirthDay(Date date, Time_ time, string hero, string place, int age)
    :Event(date,time)
{
    this->hero = hero;
    this->place = place;
    this->age = age;
}

string BirthDay::getHero() const&
{
    return this->hero;
}

string BirthDay::getPlace() const&
{
    return this->place;
}

int BirthDay::getAge() const&
{
    return this->age;
}

void BirthDay::setHero(string hero)
{
    this->hero = hero;
}

void BirthDay::setPlace(string place)
{
    this->place = place;
}

void BirthDay::setAge(int age)
{
    this->age = age;
}

string BirthDay::type() const&
{
    return "BirthDay";
}

string BirthDay::toString() const&
{
    string str;
    str = " type of event_"+ this->type()+"_" + to_string(this->date.getYear()) + "_" + to_string(this->date.getMonth()) + "_" + to_string(this->date.getDay()) + "_" +
        to_string(this->time.getHour()) + "_" + to_string(this->time.getMinutes()) + "_" +
        this->hero + "_" + this->place + "_" + to_string(this->age) + "\n";
    return str;
}

void BirthDay::show() const&
{
    cout << " Type of event : " << this->type() << endl;
    cout << " Date ::  " << this->date << endl;
    cout << " Time ::  " << this->time << endl;
    cout << " Hero of BirthDay :: " << this->hero << endl;
    cout << " Place of Birth :: " << this->place << endl;
    cout << " Age : " << this->age << endl;
    cout << "******************************************" << endl;

}
