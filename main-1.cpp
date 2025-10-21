#include "BrowserHistory.h"
#include <iostream>

void visit(BrowserHistory* history, std::string newURL) {
    history->visitPage(newURL);
    std::cout << history->getCurrentPage() << std::endl;
}
int main(void) {
    BrowserHistory newHistory;
    std::cout << newHistory.getCurrentPage() << std::endl;

    visit(&newHistory, "Amazon.com");
    visit(&newHistory, "Twitter.com");
    visit(&newHistory, "Corn.com");
    newHistory.goBack();
    std::cout << newHistory.getCurrentPage() << std::endl;
    newHistory.goBack();
    std::cout << newHistory.getCurrentPage() << std::endl;
    newHistory.goBack();
    std::cout << newHistory.getCurrentPage() << std::endl;
    newHistory.goBack();
    std::cout << newHistory.getCurrentPage() << std::endl;
    newHistory.goBack();
    std::cout << newHistory.getCurrentPage() << std::endl;
    newHistory.goBack();
    std::cout << newHistory.getCurrentPage() << std::endl;

    return 0;
}   