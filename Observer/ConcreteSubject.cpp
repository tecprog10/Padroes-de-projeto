#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject():
	subject()
{
	state = false;
}

bool ConcreteSubject::getState()
{
	return state;
}

void ConcreteSubject::changeState()
{
	state = !state;
	Notify();
}
