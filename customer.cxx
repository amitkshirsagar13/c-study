#include <iostream>
#include "./customer.hxx"

using namespace std;

namespace STORE {
    namespace BYKE {
        Customer* createCustomer() {
            Customer* cust = new Customer;
            return cust;
        }
    }
}
