#include <iostream>
#include <vector>
#include <string>

class Diary {
private:
    static std::vector<std::string> entries; 

public:
    
    static void addEntry(const std::string& entry) {
        entries.push_back(entry); 
        std::cout << "Entry added: " << entry << std::endl;
    }

    
    static void displayEntries() {
        if (entries.empty()) {
            std::cout << "No entries in the diary." << std::endl;
            return;
        }
        std::cout << "Diary Entries:" << std::endl;
        for (const auto& entry : entries) {
            std::cout << "- " << entry << std::endl; 
        }
    }

    
    static void clearEntries() {
        entries.clear(); 
        std::cout << "All entries cleared." << std::endl;
    }
};

std::vector<std::string> Diary::entries;

int main() {
    int choice; 
    std::string entry; 

    do {
        
        std::cout << "\nSchool Diary Menu:\n";
        std::cout << "1. Add Entry\n";
        std::cout << "2. Display Entries\n";
        std::cout << "3. Clear Entries\n";
        std::cout << "4. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice; 

        switch (choice) {
            case 1:
                std::cout << "Enter your diary entry: ";
                std::cin.ignore(); 
                std::getline(std::cin, entry); 
                Diary::addEntry(entry); 
                break;
            case 2: 
                Diary::displayEntries(); 
                break;
            case 3: 
                Diary::clearEntries(); 
                break;
            case 4: 
                std::cout << "Exiting the diary program. Goodbye!" << std::endl;
                break;
            default: 
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
        }
    } while (choice != 4); 

    return 0; 
}

