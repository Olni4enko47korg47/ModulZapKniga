#include "Events.h"

Events::Events()
{
}

Events::~Events()
{
	if (!myEvent.empty()) {
		for (auto& item : myEvent) {
			myEvent.erase(item);
		}
	}
}

void Events::show()const&
{
	multiset<Event*,Compare>::iterator item;
	for (item = myEvent.begin(); item != myEvent.end();item++) {
		(*item)->show();
	}
	
}



void Events::add(Event* obj)
{
	myEvent.insert(obj);
}
