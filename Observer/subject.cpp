#include "subject.h"



subject::subject()
{
	observers.clear();
}

void subject::Attach(Observer* obs)
{
	observers.push_back(obs);
}

void subject::Detach(Observer* obs)
{
	auto it = observers.begin();
	while (it != observers.end()) {
		if ((*it) == obs) {
			observers.erase(it);
			return;
		}
		it++;
	}
}


void subject::Notify()
{
	auto it = observers.begin();
	while (it != observers.end()) {
		(*it)->update();
		it++;
	}
}
