#include <iostream>
#include"heaptype.cpp"
#include "quetype.h"


using namespace std;

int main()
{
    GraphType <char> mygraph
    mygraph.AddVertex('A');
    mygraph.AddVertex('B');
    mygraph.AddVertex('C');
    mygraph.AddVertex('D');
    mygraph.Addvertex('E');
    mygraph.AddVertex('F');
    mygraph.AddVertex('G');
    mygraph.AddVertex('H');
    mygraph.AddVertex('I');
    mygraph.Addvertex('J');

    mygraph.AddEdge('A','B',1);
    mygraph.AddEdge('A','C',1);
    mygraph.AddEdge('A','D',1);
    mygraph.AddEdge('A','E',1);
    mygraph.AddEdge('B','F',1);
    mygraph.AddEdge('B','I',1);
    mygraph.AddEdge('C','G',1);
    mygraph.AddEdge('C','J',1);
    mygraph.AddEdge('D','F',1);
    mygraph.AddEdge('D','H',1);
    mygraph.AddEdge('E','G',1);
    mygraph.AddEdge('G','H',1);

    if(mygraph.foundEdge('A','C'))
    {
        cout<<"there is an edge";
    }
    else
    {
        cout<<"there is not edge";
    }

    cout<< endl;

    if(mygraph.foundEdge('B','D'))
    {
        cout<<"there is an edge";
    }
    else
    {
        cout<<"there is not edge";
    }

    cout<< endl;

    mygraph.DepthFirstSearch('A','H');
    cout<< endl;
    mygraph.DepthFirstSearch('C','H');
    cout<< endl;
    mygraph.BreathFirstSearch('A','F');
    cout<<endl;
    mygraph.BreathFirstSearch('A','H');
    cout<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
