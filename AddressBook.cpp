#include "AddressBook.h"

void 
AddressBook::addContact(const Contact& contact) {
        contacts.push_back(contact);
        std::cout << "Contact added successfully." << std::endl;
    }

void 
AddressBook::displayContacts() const {
        if (contacts.empty()) {
            std::cout << "No contacts to display." << std::endl;
            return;
        }

        for (const auto& contact : contacts) {
            contact.displayContact();
            std::cout << std::endl;
        }
    }


void AddressBook::editContact(const std::string& name) {
    for (auto& contact : contacts) {
        if (contact.getName() == name) {
            int choose = 0;
            while (choose != 5) {
                std::cout << "Choose what to change\n"
                          << "1. Name\n"
                          << "2. Phone\n"
                          << "3. Email\n"
                          << "4. Address\n"
                          << "5. Exit\n";
                std::cin >> choose;

                switch (choose) {
                    case 1: {
                        std::string newName;
                        std::cout << "Enter new name: ";
                        std::cin >> newName;
                        contact.setName(newName);
                        break;
                    }
                    case 2: {
                        std::string phone;
                        std::cout << "Enter new phone: ";
                        std::cin >> phone;
                        contact.setPhone(phone);
                        break;
                    }
                    case 3: {
                        std::string email;
                        std::cout << "Enter new email: ";
                        std::cin >> email;
                        contact.setEmail(email);
                        break;
                    }
                    case 4: {
                        std::string address;
                        std::cout << "Enter new address: ";
                        std::cin >> address;
                        contact.setAddress(address);
                        break;
                    }
                    case 5: {
                        std::cout << "Exiting...\n";
                        break;
                    }
                    default: {
                        std::cout << "Invalid choice. Please try again.\n";
                    }
                }
            }
            return; 
        }
    }
    std::cout << "Contact not found\n";
}
            
void 
AddressBook::removeContact(const std::string& name) {
        for (auto iter = contacts.begin(); iter != contacts.end(); ++iter) {
            if (iter->getName() == name) {
                contacts.erase(iter);
                std::cout << "Contact removed successfully." << std::endl;
                return;
            }
        }
        std::cout << "Contact not found." << std::endl;
    }

    
void 
AddressBook::searchContact(const std::string& name) const {
        for (const auto& contact : contacts) {
            if (contact.getName() == name) {
                std::cout << "Contact found:" << std::endl;
                contact.displayContact();
                return;
            }
        }
        std::cout << "Contact not found." << std::endl;
    }
