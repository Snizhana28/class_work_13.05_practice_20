#include "../parent_/list.h"

template <typename T> class stack : public single_link_list<T> 
{
public:
	stack() : single_link_list<T>() {}
	~stack() = default;
	void push_front(T value) override
	{
		Element<T>* temp = new Element<T>(value);
		if (_head == nullptr) {
			_head = temp;
			_tail = temp;
		}
		else {
			temp->next = _head;
			_head = temp;
		}
		_size++;
	}
	void pop_back() {
		if (_head == nullptr) {
			return;
		}
		else if (_head == _tail) {
			delete _head;
			_head = nullptr;
			_tail = nullptr;
		}
		else {
			Element<T>* temp = _head;
			while (temp->next != _tail) {
				temp = temp->next;
			}
			delete _tail;
			_tail = temp;
			_tail->next = nullptr;
		}
		_size--;
	}
};