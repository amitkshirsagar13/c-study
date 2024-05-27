#include <iostream>
#include "./customer.hxx"

using namespace STORE::BYKE;

int main() {
    Customer* cust = createCustomer();
    cust->addCustomer();
    cust->print();
    delete cust;
    return 0;
}