#include <iostream>
#include <vector>
#include <algorithm>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include <functional>
using namespace std;

vector <int> getOptimalOrder(vector<int>& items)
{
    sort (items.begin(),items.end());
    vector int result;
    function <void(int,int)>insertBalanced = [&](int start,int end)
    {
        if (start>end) return;
        int mid =(start+end)/2;
        result.push_back = (items[mid]);
        insertBalanced=(start,mid-1);
        insertBalanced=(mid+1,end);

    };
    insertBalanced(0,items.size()-1);
    return result;

}

int main ()
{
    TreeType<int> tree;
    cout<<"tree is "<< (tree.isEmpty()? "empty": "not empty")<< endl;

    vector <int> values = {4,9,2,7,11,17,0,5,1};
    for(int val:values)
    {
        tree.InsertItem(val);
    }
    cout<<"tree is "<< (tree.isEmpty()? "empty": "not empty")<< endl;
    cout <"length of tree is "<< tree.LengthIs()<<endl;

    int item =9;
    bool found;
    tree.RetrieveItem(item,found);
    cout<<"item"<<item<< "is"<<(found ?"found":"not found")<<endl;

    int item=13;
    tree.RetrieveItem(item,found);
    cout<<"item"<<iteem<<"is"<<(found? "found " :"not found") <<endl;

    cout<< "inorder tranversal";
    tree.ResetTree(IN_ORDER);
     finished=false;
    while(!finished)
    {
        tree.GetNextItem(item,IN_ORDER,finished);
        if (!finished) cout<< item<<"";

    }
    cout << endl;

    cout << "preOrder Traversal";
    tree.ResetTree(PRE_ORDER);
     finished=false;
    while(!finished)
    {
        tree.GetNextItem (item, PRE_ORDER,finished);
        if(!finished)cout <<item << " ";
    }
    cout << endl;
    cout <<"post Order : ";
    tree.ResetTree(POST_ORDER);
    bool finished=false;
    while(!finished)=false;
    {

        tree.GetNextItem(item,POST_ORDER, finished);
        if(!finished)cout <<item << " ";
    }

 tree.MakeEmpty();
 cout <<"tree is" <<(tree.IsEmpty()? "empty: not Empty")<< end;

 values = {11,9,0,4,2,7,3,5,1};
 for (int val :getOptimalOrder){
    tree.InsertItem(val);
 }
 cout << "inorder traversal of tree ";
 tree.ResetTree(IN_ORDER);
 finished=false;
 while (!finished){
    tree.GetNextItem(item,IN_ORDER,finished);
    if(!finished)cout<<item << " ";
    }

  cout << end;
  return 0;


}
