#include <iostream>
using namespace std;


class TattooArtist {
public:
    void createTattoo() {
        cout << "Tattoo artist is creating a tattoo!" << endl;
    }
};

// Derived class
class Piercer : public TattooArtist {
public:
    void performPiercing() {
        cout << "Piercer is performing a piercing!" << endl;
    }
};

int main() {
    Piercer myPiercer;
    myPiercer.createTattoo(); // From base class
    myPiercer.performPiercing(); // From derived class
    return 0;
}



// now is the multilevel inhertance

#include <iostream>
using namespace std;

// Base class
class TattooArtist {
public:
    void createTattoo() {
        cout << "Tattoo artist is creating a tattoo!" << endl;
    }
};


class Piercer : public TattooArtist {
public:
    void performPiercing() {
        cout << "Piercer is performing a piercing!" << endl;
    }
};

class TattooShop : public Piercer {
public:
    void openShop() {
        cout << "Tattoo shop is now open!" << endl;
    }
};

int main() {
    TattooShop myShop;
    myShop.openShop();         // From TattooShop class
    myShop.createTattoo();     // From TattooArtist class
    myShop.performPiercing();   // From Piercer class
    return 0;
}

