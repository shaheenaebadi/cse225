#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include <iostream>
template <class ItemType>
class linkedList {
private:
struct NodeType {
ItemType info;
NodeType* next;
};
NodeType* head;
int length;
public:
linkedList();
~linkedList();
void InsertAtBeginning(ItemType item);
void InsertAtEnd(ItemType item);
void deleteFromBeginning();
void deleteFromEnd();
bool RetrieveItem(ItemType item);
void display();
};
#endif // LINKEDLIST_H_INCLUDED

