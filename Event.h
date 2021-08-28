#pragma once
#include"Date.h"
#include"Time_.h"
#include<iostream>
#include<string>
using namespace std;
class Event
{
protected:
	Date date;
	Time_ time;
public:

	Event();
	Event(Date date, Time_ time);
	virtual ~Event();

	void setDate(Date date);
	void setTime(Time_ time);
	Date getDate()const&;
	Time_ getTime()const&;


	virtual void show()const& = 0;
	virtual string type()const& = 0;
	virtual string toString()const& = 0;
	bool operator == (const Event& obj)const&;

};

