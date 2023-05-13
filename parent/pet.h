#ifndef pet_class
#define pet_class
#include <iostream>
#include <string>
using namespace std;

class Pet abstract
{
protected:
	string name;
	int year;
	string type;
	string color;
public:
	//constructor
	Pet()
	{
		this->name = "unknow";
		this->type = "unknow";
	}
	virtual void  Sound() = 0;
	virtual void  Show() = 0;
	virtual void  Type() = 0;
	//destructor
	virtual ~Pet()
	{
		name.clear();
		type.clear();
	};
};
#endif 