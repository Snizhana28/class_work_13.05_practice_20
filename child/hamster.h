#include "../parent/pet.h"

class Hamster : public Pet
{
public:
	//constructor
	Hamster()
	{
		this->name = "Bob";
		this->type = "hamster";
	};
	void Sound() override
	{
		cout << "Hamster" << endl;
		cout << "Say: Pshhh" << endl;
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
	~Hamster()
	{
		name.clear();
		type.clear();
	};
};