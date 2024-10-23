#ifndef __Contact_H__
#define __Contact_H__

class Contact {

    private:

        std::string name;

        std::string phoneNumber;

        std::string address;

        std::string email;

    private:

        bool checkPhone(const std::string& phone);
        
        bool isValidEmail(const std::string& email);


    public:

         std::string getName() const;

         void setName(std::string name);
        
         std::string getPhone() const;

         void setPhone(std::string phone);

         std::string getAddress() const;

         void setAddress(std::string address);
        
         std::string getEmail() const;

         void setEmail(std::string email);


         Contact(std::string name, std::string phone, std::string email, std::string address);

         void displayContact() const;
};

#include "contact.cpp"

#endif

            
 
