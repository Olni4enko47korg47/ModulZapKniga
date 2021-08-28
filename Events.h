#pragma once
#include<set>
#include"Event.h"

struct Compare  
{
	bool operator()(const Event* lhs, const Event* rhs) const
	{
		if (lhs->getDate() < rhs->getDate())
			return true;
		else if (lhs->getDate() == rhs->getDate()) {
			if (lhs->getTime() < rhs->getTime())
				return true;
		}
		else
			return false;
	}
};


class Events
{

public:
	multiset<Event*, Compare> myEvent;

	Events();
	
	~Events();

	void show()const&;

	void add(Event* obj);
};

