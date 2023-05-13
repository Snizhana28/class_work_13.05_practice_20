#include "../parent/pet.h"

class Dog : public Pet
{
public:
	//constructor
	Dog()
	{
		this->name = "Bob";
		this->type = "doberman";
	};
	void Sound() override
	{
		cout << "Dog" << endl;
		cout << "Say: Gav" << endl;
	}
	void Show() override
	{
		cout << "Name: " << name << endl;
	}
	void Type() override
	{
		cout << "Type: " << type << endl;
	}
	//destructor
	~Dog()
	{
		name.clear();
		type.clear();
	};
};