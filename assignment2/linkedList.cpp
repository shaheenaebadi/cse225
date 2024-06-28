#include "linkedList.h"
 using namespace std;
//constructor function
template <class ItemType>
linkedList<ItemType>::linkedList() {
head = NULL;
length = 0;
}
//destructor function
template<class ItemType>
 linkedList<ItemType>::~linkedList() {
     while (head != NULL) {
     NodeType* temp = head;
     head = head->next;
     delete temp;
}
}
//function to insert node at the start
template <class ItemType>
void linkedList<ItemType>::InsertAtBeginning(ItemType item) {
NodeType* newNode = new NodeType;
newNode->info = item; //data is placed at the new node
newNode->next = head; //points the new node to current head
head = newNode; //head points to the new node
length++;
}
//function to insert  new node at the end of the list
template <class ItemType>
void linkedList<ItemType>::InsertAtEnd(ItemType item) {
NodeType* newNode = new NodeType;
newNode->info = item;
newNode->next = NULL;
if (head == NULL) {
        head = newNode;
} else {
NodeType* current = head;
 while (current->next != NULL) {
        current = current->next;
}
current->next = newNode;
}
length++;
}
//function to delete a node from the beginning of the list
template <class ItemType>
void linkedList<ItemType>::deleteFromBeginning() {
  if (head == NULL)
  return;
NodeType* temp = head;
head = head->next; //head moves to the next node
delete temp; //deletes the first head
length--;
}
//function to delete a node from the end of the list
template <class ItemType>
void linkedList<ItemType>::deleteFromEnd() {
  if (head == NULL)
  return;
  if (head->next == NULL) {
  delete head;
  head = NULL;
  length--;
  return;
}
NodeType* current = head;
while (current->next->next != NULL) {
        current = current->next;
}
delete current->next;
current->next = NULL;
length--; }
// to check if an item is there in the list
template <class ItemType>
bool linkedList<ItemType>::RetrieveItem(ItemType item) {
    NodeType* current = head;
    while (current != NULL) {
            if (current->info == item)
            return true;
            current = current->next; //moves to the next node if not found in present
}
return false;
}
//function to display the list
template <class ItemType>
void linkedList<ItemType>::display() {
     NodeType* current = head;
     while (current != NULL) {
            cout << current->info << " " << endl;
            current = current->next;
}
cout << endl;
}
