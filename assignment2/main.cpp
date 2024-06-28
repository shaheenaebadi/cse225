#include <iostream>
#include"linkedList.h"
#include "linkedList.cpp"


using namespace std;

int main()
{
    linkedList <int> myList;
    myList.InsertAtBeginning(8);
    myList.InsertAtBeginning(28);
    myList.InsertAtBeginning(45);

    cout<<"list after inserting at the beginning : " <<endl;

    myList.display();
    myList.InsertAtEnd(6);
    myList.InsertAtEnd(56);
    myList.InsertAtEnd(90);
    cout<<"list after inserting at the beginning : " <<endl;

    cout<<"list after insertion at end is : " <<endl;
    myList.display();

    int searchItem1 = 50;
    bool found1 = myList.RetrieveItem(searchItem1);
    if(found1){
        cout << searchItem1 << " is found in the list "<< endl;
    }else {
    cout << searchItem1<< " is  not found in the list" << endl;
    }

     int searchItem2 = 6;
    bool found2 = myList.RetrieveItem(searchItem2);
    if(found2){
        cout << searchItem2 << " is found in the list "<< endl;
    }else {
    cout << searchItem2<< " is not found in the list" << endl;
    }


     linkedList <double> myList2;
    myList2.InsertAtBeginning(8.5);
    myList2.InsertAtBeginning(2.8);
    myList2.InsertAtBeginning(5.7);

    cout<<"list2 after inserting at the beginning : " <<endl;

    myList2.display();
    myList2.InsertAtEnd(6.9);
    myList2.InsertAtEnd(52.6);
    myList2.InsertAtEnd(90.8);
    cout<<"list2 after inserting at the beginning : " <<endl;

    cout<<"list2 after insertion at end is : " <<endl;
    myList2.display();

    double searchItem3 = 5.0;
    bool found3 = myList.RetrieveItem(searchItem3);
    if(found3){
        cout << searchItem3 << " is found in the list2 "<< endl;
    }else {
    cout << searchItem3<< " is  not found in the list2" << endl;
    }

     double searchItem4 = 6.9;
    bool found4 = myList.RetrieveItem(searchItem4);
    if(found4){
        cout << searchItem4<< " is found in the list2 "<< endl;
    }else {
    cout << searchItem4<< " is not found in the list2" << endl;
    }

    myList.deleteFromBeginning();
    cout<<"mylist1 after deleting from beginning is : " << endl;
    myList.display();
    myList2.deleteFromEnd();
    cout<< "mylist2 after deleting from the end is : "<< endl;
    myList2.display();
    cout << "Hello world!" << endl;
    return 0;
}
