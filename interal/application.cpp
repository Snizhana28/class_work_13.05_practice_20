#include "../child/cat.h"
#include "../child/dog.h"
#include "../child/hamster.h"
#include "../child/parrot.h"

#include <vector>
int main()
{
	cout << "Pets:" << endl;
	vector<Pet*> pets;
	pets.push_back(new Cat());
	pets.push_back(new Dog());
	pets.push_back(new Hamster());
	pets.push_back(new Parrot());
	for (int i = 0; i < pets.size(); i++)
	{
		pets[i]->Sound();
		pets[i]->Show();
		pets[i]->Type();
		cout << endl;
	}
	for (int i = 0; i < pets.size(); i++)
	{
		delete pets[i];
	}
	pets.clear();

	return 0;
}