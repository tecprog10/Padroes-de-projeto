#pragma once
#include <vector>
#include "Observer.h"
#include <iostream>
class subject
{
private:
	std::vector<Observer*> observers;
public:
	subject();
	void Attach(Observer* obs);
	void Detach(Observer* obs);
	virtual void Notify();
};

