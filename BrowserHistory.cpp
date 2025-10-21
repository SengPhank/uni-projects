#include "BrowserHistory.h"

// private:
//     std::stack<std::string> backHistory;
//     std::string currentPage;

BrowserHistory::BrowserHistory() {
    this->currentPage = "home page";
}
BrowserHistory::~BrowserHistory() {}

void BrowserHistory::visitPage(std::string url) {
    this->backHistory.push(url);
    this->currentPage = backHistory.top();
}
void BrowserHistory::goBack() {
    if (!this->canGoBack()) return;
    this->backHistory.pop();
    this->currentPage = backHistory.top();
}
bool BrowserHistory::canGoBack() {
    return (this->getBackHistorySize() > 1);
}
std::string BrowserHistory::getCurrentPage() {
    return this->currentPage;
}
int BrowserHistory::getBackHistorySize() {
    return this->backHistory.size();
}

