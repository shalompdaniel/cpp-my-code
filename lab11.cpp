#include <iostream>
#include <string>

class TattooStudio {
private:
    std::string designs_[10]; // assume we can store up to 10 designs

public:
    // constructor to initialize designs
    TattooStudio() {
        for (int i = 0; i < 10; i++) {
            designs_[i] = "Design " + std::to_string(i + 1);
        }
    }

    // overloaded subscript operator to access designs
    std::string& operator[](int index) {
        if (index < 0 || index >= 10) {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1); // exit the program with an error code
        }
        return designs_[index];
    }

    // overloaded subscript operator to access designs (const version)
    const std::string& operator[](int index) const {
        if (index < 0 || index >= 10) {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1); // exit the program with an error code
        }
        return designs_[index];
    }
};

int main() {
    TattooStudio studio;

    // access designs using the overloaded subscript operator
    std::cout << studio[0] << std::endl; // prints "Design 1"
    std::cout << studio[9] << std::endl; // prints "Design 10"

    // try to access an out-of-bounds index
    std::cout << studio[10] << std::endl; // prints "Index out of bounds!" and exits

    return 0;
}
