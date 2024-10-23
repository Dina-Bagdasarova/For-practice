#include <iostream>
#include <vector>
#include <string>
#include "AddressBook.h"
#include "contact.h"
 
int main() {
   
      AddressBook addressBook;
      int choice;
      std::string name, phone, email, address;
  
      while (true) {
          std::cout << "1. Add Contact" << std::endl;
          std::cout << "2. Display Contacts" << std::endl;
          std::cout << "3. Remove Contact" << std::endl;
          std::cout << "4. Search Contact" << std::endl;
          std::cout << "5. Edit Contact" << std::endl;
          std::cout << "6. Exit" << std::endl;
          std::cout << "Enter your choice: " << std::endl;
          std::cin >> choice;
  
          switch (choice) {
              case 1:
                  std::cout << "Enter name: ";
                  std::cin >> name;
                  std::cout << "Enter phone: ";
                  std::cin >> phone;
                  std::cout << "Enter email: ";
                  std::cin >> email;
                  std::cout << "Enter address: ";
                  std::cin >> address;
                  addressBook.addContact(Contact(name, phone, email, address));
                  break;
              case 2:
                  addressBook.displayContacts();
                  break;
              case 3:
                  std::cout << "Enter name of contact to remove: ";
                  std::cin >> name;
                  addressBook.removeContact(name);
                  break;
              case 4:
                  std::cout << "Enter name of contact to search: ";
                  std::cin >> name;
                  addressBook.searchContact(name);
                  break;
              case 5:
                  std::cout << "Enter name of contact to edit: ";
                  std::cin >> name;
                  addressBook.editContact(name);
                  break;
              case 6:
                  std::cout << "Exiting..." << std::endl;
                  return 0;
             default:
                  std::cout << "Invalid choice, please try again." << std::endl;
              }
          }
      return 0;
  
 }

