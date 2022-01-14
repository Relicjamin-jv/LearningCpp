#include <iostream>
using namespace std;

//simple func that prompts the user and return the bool regarding the response

bool accept()
{
    cout << "Do you want to continue (y/n): \n";

    char ans = 0;
    cin >> ans; //read the answer, ">>" indicateds the get from and is used for input, cin is the standard input stream

    switch (ans)
    { //switch statement is used to test for multiple cases, defualt is if all other cases were not verified
    case 'y':
        return true;
    case 'n':
        return false;
    default:
        cout << "Ill take that as a no\n";
        return false;
    }
}

//func that allows the user to try multiple times to recieve an input, does this with a standard while loop.
bool accept3()
{
    int tries = 1;
    while (tries < 4)
    {
        cout << "Do you want to continue (y/n): \n";

        char ans = 0;
        cin >> ans; //read the answer, ">>" indicateds the get from and is used for input, cin is the standard input stream

        switch (ans)
        { //switch statement is used to test for multiple cases, defualt is if all other cases were not verified
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I don't understand\n";
            ++tries;
        }
    }
    cout << "Returning false";
    return false;
}

int main(){
    cout << "No while loop \n\n";
    accept();
    cout << "With a while loop \n\n";
    accept3();
}