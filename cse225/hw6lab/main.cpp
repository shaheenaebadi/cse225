#include "heaptype.cpp"
#include "quetype.h"
using namespace std;


int main()
{
    GraphType <char> mygraph;
    mygraph.AddVertex('A');
    mygraph.AddVertex('B');
    mygraph.AddVertex('C');
    mygraph.AddVertex('D');
    mygraph.AddVertex('E');
    mygraph.AddVertex('F');
    mygraph.AddVertex('G');
    mygraph.AddVertex('H');
    mygraph.AddVertex('I');
    mygraph.AddVertex('J');
    mygraph.AddEdge('A', 'B', 1);
    mygraph.AddEdge('A', 'D', 1);
    mygraph.AddEdge('A', 'C', 1);
    mygraph.AddEdge('A' ,'E',1);
    mygraph.AddEdge('B', 'F', 1);
    mygraph.AddEdge('B','I' ,1);
    mygraph.AddEdge('C', 'G', 1);
    mygraph.AddEdge('C', 'J', 1);
    mygraph.AddEdge('D', 'H', 1);
    mygraph.AddEdge('D', 'F', 1);
    mygraph.AddEdge('E', 'G', 1);
    mygraph.AddEdge('G', 'H', 1);





    if (mygraph.foundEdge('A', 'D'))
    {
        cout << "There is an edge" << endl;
    }
    else
    {
        cout << "There is no edge" << endl;
    }
    cout << endl;

    if(mygraph.foundEdge('B', 'D'))
    {
        cout << "There is an edge" << endl;
    }
    else
    {
           cout << "There is no edge" << endl;
    }
    cout << endl;

    mygraph.DepthFirstSearch('A', 'H');
    cout << endl;

    mygraph.DepthFirstSearch('C', 'H');
    cout << endl;

    mygraph.BreadthFirstSearch('A', 'F');
    cout << endl;

    mygraph.BreadthFirstSearch('A', 'H');

    cout  << endl;

 return 0;
}


