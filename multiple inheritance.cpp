#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void displayBase1() {
        cout << "Base1 class method" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void displayBase2() {
        cout << "Base2 class method" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "Derived class method" << endl;
    }
};

int main() {
    Derived obj;
    obj.displayBase1(); // Accessing method from Base1
    obj.displayBase2(); // Accessing method from Base2
    obj.displayDerived(); // Accessing method from Derived

    return 0;
}















/// hybrid inheritance


#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void displayBase() {
        cout << "Base class method" << endl;
    }
};

// Derived class inheriting from Base
class Derived1 : public Base {
public:
    void displayDerived1() {
        cout << "Derived1 class method" << endl;
    }
};

// Another derived class inheriting from Base
class Derived2 : public Base {
public:
    void displayDerived2() {
        cout << "Derived2 class method" << endl;
    }
};

// Hybrid derived class inheriting from both Derived1 and Derived2
class Hybrid : public Derived1, public Derived2 {
public:
    void displayHybrid() {
        cout << "Hybrid class method" << endl;
    }
};

int main() {
    Hybrid obj;
    obj.displayBase();      // Accessing method from Base
    obj.displayDerived1();  // Accessing method from Derived1
    obj.displayDerived2();  // Accessing method from Derived2
    obj.displayHybrid();     // Accessing method from Hybrid

    return 0;
}

