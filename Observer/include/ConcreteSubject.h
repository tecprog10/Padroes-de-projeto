#pragma once
#include "subject.h"
class ConcreteSubject : public subject
{
private:
	bool state;
public:
	ConcreteSubject();
	bool getState();
	void changeState();
};

