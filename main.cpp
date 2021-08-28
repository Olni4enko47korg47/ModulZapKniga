#define _CRT_SECURE_NO_WARNINGS
#include"Events.h"
#include"BirthDay.h"
#include"Custom.h"
#include"Meeting.h"
#include"Event.h"
#include<stdio.h>
int main() {
	Date date;
	Date evDay;
	Time_ time;
	string hero, place;
	int age;
	string person, mPlace;
	string description;
	Events myEvents;
	int menu, d;
	bool isFind;

	multiset<Event*, Compare>::iterator item;
	try
	{


		do
		{
			cout << "\t\t********* NOTEBOOK***********" << endl;
			cout << "\t\t 1--> add Event BrithDay " << endl;
			cout << "\t\t 2--> add Event Meeting " << endl;
			cout << "\t\t 3--> add Description " << endl;
			cout << "\t\t 4 --> show all events " << endl;
			cout << "\t\t 5 --> show  events by date : " << endl;
			cout << "\t\t 6 --> show  events by type : " << endl;
			cout << "\t\t 7 --> save to textfile " << endl;
			cout << "\t\t 8 --> load from textfile " << endl;
			cout << "\t\t\t 0-->EXIT" << endl;
			cout << "\t\t*******************************" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1:
				cout << "input date : " << endl;
				cin >> date;
				cout << "input time : " << endl;
				cin >> time;
				cout << " input name of hero " << endl;
				cin >> hero;
				cout << " input place of birth " << endl;
				cin >> place;
				cout << " input age " << endl;
				cin >> age;
				myEvents.add(new BirthDay(date, time, hero, place, age));
				break;
			case 2:
				cout << "input date : " << endl;
				cin >> date;
				cout << "input time : " << endl;
				cin >> time;
				cout << " input name of person to meet " << endl;
				cin >> person;
				cout << " input place of meeting " << endl;
				cin >> mPlace;

				myEvents.add(new Meeting(date, time, person, mPlace));
				break;
			case 3:
				cout << "input date : " << endl;
				cin >> date;
				cout << "input time : " << endl;
				cin >> time;
				cout << " input description " << endl;
				cin >> description;

				myEvents.add(new Custom(date, time, description));
				break;
			case 4:

				myEvents.show();

				break;
			case 5:
				cout << "Input date to see events : " << endl;
				cin >> evDay;
				isFind = false;
				for (item = myEvents.myEvent.begin(); item != myEvents.myEvent.end(); item++)
				{
					if ((*item)->getDate() == evDay) {
						//myEvents.show();
						(*item)->show();
						isFind = true;
					}

				}
				if (isFind == false) cout << " There are no events for this day !" << endl;
				break;

			case 6:
				try {
					cout << " input:  1 to see BirthDay Events " << endl;
					cout << " input:  2 to see Meeting Events " << endl;
					cout << " input:  3 to see Description  " << endl;
					cin >> d;


					if (d < 1 || d>3) throw exception("Wrong enterig number !!!");

					if (d == 1) {

						for (item = myEvents.myEvent.cbegin(); item != myEvents.myEvent.cend(); item++) {
							if ((*item)->type() == "BirthDay") {

								(*item)->show();
							}
						}
					}
					else if (d == 2) {
						for (item = myEvents.myEvent.cbegin(); item != myEvents.myEvent.cend(); item++) {
							if ((*item)->type() == "Meeting") {

								(*item)->show();
							}
						}
					}
					else if (d == 3) {
						for (item = myEvents.myEvent.cbegin(); item != myEvents.myEvent.cend(); item++) {
							if ((*item)->type() == "Custom") {

								(*item)->show();
							}
						}
					}
					else cout << " Wrong number you input " << endl;
					break;
				}
				catch (const std::exception& ex) {
					cout << ex.what() << endl;
				}
			case 7:

				FILE * file;
				file = fopen("1.txt", "w");
				if (file == NULL)
					cout << " error read or open file " << endl;
				else {
					for (item = myEvents.myEvent.cbegin(); item != myEvents.myEvent.cend(); item++)
					{
						string str = (*item)->toString();
						const int  size = str.length();

						char* str_arr;
						string str_obj((*item)->toString());
						str_arr = &str_obj[0];
						fprintf(file, "%s", str_arr);
						cout << str_arr << endl;
					}
					cout << "write success !!" << endl;
				}
				fclose(file);
				break;
				/*	case 8:      ме ялнц дндекюрэ !!!
						FILE  *file;
						string strType;
						int year,month,day;
						int hour, min;
						string name, place;
						int age;
						string descrip;

						if ((file = fopen("1.txt", "r")) == NULL)
							cout << "Can't open file" << endl;
						else {
							while (!feof(file))
							{
								fscanf(file," type of event_%s_%d_%d_%d_%d_%d_", strType,)
							}
						}*/

			default:
				break;
			}
		} while (menu != 0);

	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	return 0;
}