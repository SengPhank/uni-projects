#pragma once
#include <stack>
#include <string>
class BrowserHistory {
private:
    std::stack<std::string> backHistory;
    std::string currentPage;
public:
    BrowserHistory();
    ~BrowserHistory();

    void visitPage(std::string url);
    void goBack();
    bool canGoBack();
    std::string getCurrentPage();
    int getBackHistorySize();
};

