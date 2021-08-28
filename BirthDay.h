#pragma once
#include "Event.h"
class BirthDay :
    public Event
{
    string hero;
    string place;
    int age;

public:
    BirthDay();
    BirthDay(Date date, Time_ time, string hero, string place, int age);

    string getHero()const&;
    string getPlace()const&;
    int getAge()const&;
    // сеттеры нам не пригодятся наверно
    void setHero(string hero);
    void setPlace(string place);
    void setAge(int age );

    string type()const& override;
    string toString()const& override;
    void show()const& override;

};

