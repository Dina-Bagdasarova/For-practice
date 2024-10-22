#ifndef __ADDRESSBOOK_H__
#define __ADDRESSBOOK_H__

#include "contact.h"

class AddressBook {

    private:

        std::vector<Contact> contacts;


    public:

        void addContact(const Contact& contact);

        void displayContacts() const;

        void editContact(const std::string& name);

        void removeContact(const std::string& name);

        void searchContact(const std::string& name) const;

//        void saveContacts(const std::vector<Contact>& contacts, const std::string& filename);

};

#include "AddressBook.cpp"
 #endif
        
