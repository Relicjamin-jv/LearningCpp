#include <iostream>

bool accept()
{
    std::cout << "Continue?\n"; // '<<' put to operator, used for output
    char answer;
    std::cin >> answer; //'>>' get from operator, used for input

    if (answer == 'y')
        return true;
    return false;
}

bool accept2()
{
    std::cout << "Continue?\n"; // '<<' put to operator, used for output
    char answer;
    std::cin >> answer; //'>>' get from operator, used for input

    switch (answer)
    { // takes in a var
    case 'y':
        return true; // checks the var for each case
    case 'n':
        return false;
    default:
        std::cout << "Ill take that as a no\n";
        return false;
    }
}

int getInt()
{
    return 100;
}

int getIntZero()
{
    return 0;
}

void do_something()
{
    // to show that a var can be init in a if statement, scope is only to the if statement
    if (int i = getInt(); i != 0)
    {
        std::cout << "Hello! I see you initilized 'i' in the (if) statement";
    }

    /*
    if(auto n = v.size()){
        we get here if n!=0 | n!=nullptr, it does the check already implicitly
    }
    */

    if (int i = getIntZero()) //false if i == 0, above comment explains
    {
        std::cout << "wont reach, i == 0";
    }
}

int main()
{
    bool b1 = accept();
    bool b2 = accept2();
    do_something();
    return 0;
}