#ifndef list_class
#define list_class
#include <algorithm>
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

template <typename T> class Element {
public:
    T value;
    Element* next;
    Element() : value(), next(nullptr) {}
    Element(T value) : value(value), next(nullptr) {}
    ~Element() = default;
};

template <typename T> class single_link_list abstract 
{
private:
    Element<T>* _head;
    Element<T>* _tail;
    int _size;

public:
    single_link_list() : _head(nullptr), _tail(nullptr), _size(0) {}
    ~single_link_list() {
        Element<T>* temp = _head;
        while (temp != nullptr) {
            temp = temp->next;
            delete _head;
            _head = temp;
        }
        _tail = nullptr;
    }
    virtual void push_front(T value) = 0;
    virtual void push_back(T value) = 0;
    virtual void pop_front() = 0;
    virtual void pop_back() = 0;
    void insert(int index, T value) {
        if (index < 0 || index > _size) {
            return;
        }
        else if (index == 0) {
            push_front(value);
        }
        else if (index == _size) {
            push_back(value);
        }
        else {
            Element<T>* temp = _head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Element<T>* new_elem = new Element<T>(value);
            new_elem->next = temp->next;
            temp->next = new_elem;
            _size++;
        }
    }
    void remove(int index) {
        if (index < 0 || index >= _size) {
            return;
        }
        else if (index == 0) {
            pop_front();
        }
        else if (index == _size - 1) {
            pop_back();
        }
        else {
            Element<T>* temp = _head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Element<T>* to_delete = temp->next;
            temp->next = temp->next->next;
            delete to_delete;
            _size--;
        }
    }
    void remove(T value) {
        Element<T>* temp = _head;
        int index = 0;
        while (temp != nullptr) {
            if (temp->value == value) {
                remove(index);
                return;
            }
            temp = temp->next;
            index++;
        }
    }
    void print() {
        Element<T>* temp = _head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void dev_print() {
        int index = 0;
        Element<T>* temp = _head;
        while (temp != nullptr) {
            cout << "Element[" << index << "]: " << (long long)temp << endl;
            cout << "Value: " << temp->value << endl;
            cout << "Next element: " << (long long)temp->next << endl << endl;
            temp = temp->next;
            index++;
        }
        cout << endl;
    }
    int size() { return _size; }
};

#endif