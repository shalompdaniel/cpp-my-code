#include <iostream>

using namespace std;

void passByValue(int a) {
    a += 10;
    cout << "Inside passByValue: " << a << endl;
}


void passByReference(int &b) {
    b += 10; 
    cout << "Inside passByReference: " << b << endl;
}


int& returnReference(int &c) {
    c += 10; 
    return c; 
}

int main() {
    int x = 5;
    int y = 5;
    int z = 5;

   
    cout << "Before passByValue: " << x << endl;
    passByValue(x);
    cout << "After passByValue: " << x << endl;

   
    cout << "Before passByReference: " << y << endl;
    passByReference(y);
    cout << "After passByReference: " << y << endl;

   
    cout << "Before returnReference: " << z << endl;
    int &ref = returnReference(z);
    cout << "After returnReference: " << z << endl;

    
    ref += 5;
    cout << "After modifying returned reference: " << z << endl;

    return 0;
}

