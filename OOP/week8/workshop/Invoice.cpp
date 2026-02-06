#include "Invoice.h"


// private:
//     int invoiceId;
//     int dollarsOwed;

Invoice::Invoice(std::string invoiceId) {
    this->invoiceId = invoiceId;
    this->dollarsOwed = 0;
}
Invoice::~Invoice() {}

void Invoice::addServiceCost(int costDollars) {
if (costDollars < 0) return;
this->dollarsOwed += costDollars;
} // Accepts only positive dollar amounts.

int Invoice::getDollarsOwed() {
    return this->dollarsOwed;
}
std::string Invoice::getInvoiceId() {
    return this->invoiceId;
}



