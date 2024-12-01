#include <iostream>
#include <string>

class WebPage;

class Website {
private:
    std::string domainName;

public:
    Website(const std::string& name) : domainName(name) {}

    
    friend void displayPageDetails(const Website& website, const WebPage& page);
};

class WebPage {
private:
    std::string title;

public:
    WebPage(const std::string& t) : title(t) {}

 
    friend void displayPageDetails(const Website& website, const WebPage& page);
};


void displayPageDetails(const Website& website, const WebPage& page) {
    std::cout << "Website: " << website.domainName << "\n";
    std::cout << "Page Title: " << page.title << "\n";
}

int main() {
    Website myWebsite("example.com");
    WebPage homePage("Home");

    displayPageDetails(myWebsite, homePage);

    return 0;
}

