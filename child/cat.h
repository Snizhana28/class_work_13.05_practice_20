#include "../parent/pet.h"

class Cat : public Pet
{
public:
	//constructor
	Cat()
	{
		this->name = "Tom";
		this->type = "siam";
	};
	void Sound() override
	{
		cout << "Cat" << endl;
		cout << "Say: Meow" << endl;
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
	~Cat()
	{
		name.clear();
		type.clear();
	};
};