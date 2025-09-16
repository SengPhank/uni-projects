/*
Class: Invoice

Description:
The Invoice class represents a billing invoice with functionality to manage and calculate the total amount owed for various services.

Attributes:
- invoiceId: A unique identifier for the invoice.
- dollarsOwed: The total amount owed in dollars for services.

Methods:
- Invoice(invoiceId): Constructor that initializes an invoice with a given invoice ID.
- addServiceCost(costDollars): Adds the cost of a service to the current invoice in dollars. Accepts only positive dollar amounts.
- getDollarsOwed(): Returns the total amount owed in dollars for the services on the invoice.
- getInvoiceId(): Returns the unique identifier (ID) for the invoice.

Usage:
The Invoice class can be used to manage billing information for various services, 
track the total amount owed, and retrieve the invoice ID for record-keeping purposes.
*/
#pragma once

#include <string>

class Invoice
{
private:
    std::string invoiceId;
    int dollarsOwed;
public:
    Invoice(std::string invoiceId);
    ~Invoice();

    void addServiceCost(int costDollars); // Accepts only positive dollar amounts.
    int getDollarsOwed();
    std::string getInvoiceId();
};

