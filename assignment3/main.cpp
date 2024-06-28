#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
#include<string>

using namespace std;

int main()
{
    StackType<char> ParenthesesChecker;
    string abcd;
    cin>>abcd;

    // throwing for loop to see if the parenthesis is balanced
    for (int i =0; abcd[i]!=NULL; i++){
        char object = abcd[i];
        if (object=='(')
        {

            ParenthesesChecker.Push(object);
        }
        try
        { if (object==')') // checking if the brackets have their pair brackets
        ParenthesesChecker.Pop();
        }


        catch (EmptyStack) // will catch if the bracket  does not have a pair
        {

            cout << "stack is not balanced "<< endl;

        }

    }

    // condition to check if parenthesis  come out balanced after checking
    if (ParenthesesChecker.IsEmpty())
    {

        cout<< "stack is balanced "<< endl;

    }
    else
    {
        cout << "stack is not balanced "<< endl;
    }



    return 0;
}
