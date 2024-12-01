#include <iostream>
#include <string>
using namespace std;

class TattooStudio {
public:
    void scheduleAppointment(string name, string design) {
        cout << "Appointment scheduled for " << name << " for a " << design << " tattoo." << endl;
    }

    void scheduleAppointment(string name, string design, int hour, int minute) {
        cout << "Appointment scheduled for " << name << " for a " << design << " tattoo at "
             << hour << ":" << (minute < 10 ? "0" : "") << minute << "." << endl;
    }

    double calculatePrice(string design) {
        return 100.0; 
    }

    double calculatePrice(string design, int size) {
        return 100.0 + (size * 50.0); 
    }

    double calculatePrice(string design, int size, bool isColor) {
        double price = 100.0 + (size * 50.0);
        if (isColor) {
            price += 30.0; 
        }
        return price;
    }
};

int main() {
    TattooStudio studio;

    studio.scheduleAppointment("Alice", "Dragon");
    studio.scheduleAppointment("Bob", "Flower", 14, 30);

    double price1 = studio.calculatePrice("Dragon");
    double price2 = studio.calculatePrice("Flower", 3);
    double price3 = studio.calculatePrice("Butterfly", 2, true);

    cout << "Price for Dragon tattoo: $" << price1 << endl;
    cout << "Price for Flower tattoo (size 3): $" << price2 << endl;
    cout << "Price for Butterfly tattoo (size 2, color): $" << price3 << endl;

    return 0;
}

