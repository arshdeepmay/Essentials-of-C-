#include <iostream>
#include <string>
using namespace std;

template< typename T> // in old way class is used instead of typename
//function template
T add(T operandOne, T operandTwo) {
    return operandOne + operandTwo;
}

int main() {
    cout << add<string>("ri", "ks") << " " << add<int>(2, 3);
}