#include "contact.h"

/*
bool
Contact::checkPhone(const string& phone){
        if(*phone == '+'){
            ++phone;
        }
        
        while(*phone){

            if(*phone >= '0' || *phone <= '9'){

                ++phone;
            } else{

                   return false;
            }
            return true;
    }*/

bool 
Contact::checkPhone(const std::string& phone) {
    const char* tmp = phone.c_str();
    if (*tmp == '+') {
        ++tmp;
    }

    while (*tmp) {
        if (*tmp >= '0' && *tmp <= '9') {
            ++tmp;
        } else {
            return false; 
        }
    }

    return true; 
}

bool
Contact::isValidEmail(const std::string& email){
    
    bool Dot = false;
    bool At = false;
    int atpos = -1;

    for(int i = 0; i < email.length(); ++i){
        if(email[i] == '@'){
                if(At){
                    return false;
                } else{ 
                    At = true;
                    atpos = i;
                }
            } else if (At && email[i] == '.') {
                    Dot = true; 
                }
            }

         if (!At) {

            return false;
    
    } else if (!Dot) {
           
             return false;
    
    } else if (atpos == 0 || atpos == email.length() - 1) {
   
        return false;

    } else if (email[email.length() - 1] == '.') {
        return false;
    
    } else {
        
        return true;
    }
}       


std::string 
Contact::getName() const {
        return name;
    }

void
Contact::setName(std::string name){

    this->name = name;
}

std::string
Contact::getPhone() const{
    return phoneNumber;
}

void
Contact::setPhone(std::string phone){

    this->phoneNumber = phone;
}

std::string
Contact::getEmail() const{
    return email;
}

void
Contact::setEmail(std::string email){

    this->email = email;
}

std::string
Contact::getAddress() const{
    return address;
}

void
Contact::setAddress(std::string address){

    this->address = address;
}




   

Contact::Contact(std::string name, std::string phone, std::string email, std::string address) {
        this->name = name;
        if(checkPhone(phone)){
        this->phoneNumber = phone;
      } else{
            throw std::invalid_argument(phone + " is not a valid phone number.");
       }
        if(isValidEmail(email)){
            this->email = email;
      } else{
            throw std::invalid_argument(email + " is not a valid email.");
       }
        this->address = address;
    }


void Contact::displayContact() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Address: " << address << std::endl;
    }
