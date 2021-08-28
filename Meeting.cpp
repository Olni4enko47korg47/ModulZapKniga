#include "Meeting.h"

Meeting::Meeting()
	:Event()
{
	this->person = "noPerson";
	this->mPlace = "noPlace";
}

Meeting::Meeting(Date date, Time_ time,string person, string mPlace)
	:Event(date, time)
{
	this->person = person;
	this->mPlace = mPlace;
}

string Meeting::getPerson() const&
{
	return this->person;
}

string Meeting::getPlace() const&
{
	return this->mPlace;
}

void Meeting::setPerson(string person)
{
	this->person = person;
}

void Meeting::setPlace(string place)
{
	this->mPlace = mPlace;
}

string Meeting::type() const&
{
	return "Meeting";
}

string Meeting::toString() const&
{
	string str;
	str = " type of event_" + this->type() + "_" + to_string(this->date.getYear()) + "_" + to_string(this->date.getMonth()) + "_" + to_string(this->date.getDay()) + "_" +
		to_string(this->time.getHour()) + "_" + to_string(this->time.getMinutes()) + "_" +
		this->person + "_" + this->mPlace + "\n";
	return str;
}

void Meeting::show() const&
{
	cout << " Type of event : " << this->type() << endl;
	cout << " Date ::  " << this->date << endl;
	cout << " Time ::  " << this->time << endl;
	cout << " Persont to  Meet :: " << this->person << endl;
	cout << " Place of Meeting :: " << this->mPlace << endl;
	cout << "******************************************" << endl;
}
