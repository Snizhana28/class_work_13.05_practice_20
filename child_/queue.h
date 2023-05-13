#include "../parent_/list.h"

template <typename T> class queue : public single_link_list<T>
{
public:
	queue() : single_link_list<T>() {}
	~queue() = default;
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
    void pop_front() {
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
            _head = _head->next;
            delete temp;
        }
        _size--;
    }
};