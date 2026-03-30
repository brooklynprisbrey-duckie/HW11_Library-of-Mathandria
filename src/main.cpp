#include <iomanip>
#include <iostream>
#include "bmath.h"

using namespace std;

int main(){
    cout << setprecision(20) << endl;

    //pi() uses power(x,n)
    cout << "pi(): " << pi() << endl << endl;

    // squareRoot(x) uses absolute(x)
    cout << "squareRoot(2): " << squareRoot(2) << endl;
    cout << "squareRoot(6.75f): " << squareRoot(6.75f) << endl;
    cout << "squareRoot(15.99): " << squareRoot(15.99) << endl;
    cout << "squareRoot('a'): " << squareRoot('a') << endl;
    cout << "squareRoot(0): " << squareRoot(0) << endl;
    cout << "squareRoot(-1): " << squareRoot(-1) << endl << endl;

    //sine(x) uses factorial(n)
    cout << "sine(1): " << sine(1) << endl;
    cout << "sine(5.25f): " << sine(5.25f) << endl;
    cout << "sine(pi()): " << sine(pi()) << endl;
    cout << "sine(-5*pi()/2): " << sine(-5*pi()/2) << endl;
    cout << "sine('a'): " << sine('a') << endl;
    cout << "sine(10): " << sine(10) << endl << endl;

    cout << "cosine(1): " << cosine(1) << endl;
    cout << "cosine(5.25f): " << cosine(5.25f) << endl;
    cout << "cosine(pi()): " << cosine(pi()) << endl;
    cout << "cosine(-5*pi()/2): " << cosine(-5*pi()/2) << endl;
    cout << "cosine('a'): " << cosine('a') << endl;
    cout << "cosine(10): " << cosine(10) << endl << endl;

    cout << "tangent(1): " << tangent(1) << endl;
    cout << "tangent(5.25f): " << tangent(5.25f) << endl;
    cout << "tangent(pi()): " << tangent(pi()) << endl;
    cout << "tangent(-5*pi()/2): " << tangent((-5*pi())/2) << endl;
    cout << "tangent('a'): " << tangent('a') << endl;
    cout << "tangent(10): " << tangent(10) << endl;

    return 0;
}