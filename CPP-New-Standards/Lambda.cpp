#include "Main.h"

using namespace std;
using namespace startcpp;

int typeInt = 10;

void Experiments::TestLambda()
{
    // Lambda and closure
    auto t = [=](int a) -> int {
        cout << "Param val - " << a;
        return a;
    };

    int b = t(10);
}

void Experiments::TestTypeDec()
{
    // Declare type using expression or object
    typedef decltype (typeInt) TypeInt;

    TypeInt b = 10;
}
