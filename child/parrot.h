#include "../parent/pet.h"

class Parrot : public Pet
{
public:
	//constructor
	Parrot()
	{
		this->name = "Kesha";
		this->type = "ara";
	};
	void Sound() override
	{
		cout << "Parrot" << endl;
		cout << "Say: Krrr" << endl;
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
	~Parrot()
	{
		name.clear();
		type.clear();
	};
};