#include <iostream>
class Singleton{
private:
    static Singleton* _instance;
protected:
    ~Singleton();
    Singleton();
public:
    static Singleton* getInstance();
};