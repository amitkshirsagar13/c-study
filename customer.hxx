
#ifndef STORE_BYKE_CUSTOMER
#define STORE_BYKE_CUSTOMER
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

namespace STORE {
    namespace BYKE {
        const short ZIP_SIZE = 5;
        struct Customer {
            std::string name;
            std::string email;
            std::string phone;
            char zip[ZIP_SIZE] = {};

            void print() {
                cout    << "Name: " << name
                        << " | email: " << email
                        << " | phone: " << phone
                        << " | zip: " << zip << endl;
            }

            void addCustomer() {
                cout << "Add Customer: ";
                cout << endl << "Name: ";
                cin >> name;
                cout << "Email: ";
                cin >> email;
                cout << "Phone: ";
                cin >> phone;
                cout << "Zip: ";
                cin.clear();
                cin >> setw(ZIP_SIZE+1) >> zip;
                cin.clear();
            }
        };
        Customer *createCustomer();
    }
}

#endif
