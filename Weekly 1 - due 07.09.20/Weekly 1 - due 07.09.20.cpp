#include <iostream>
#include <string>

std::string name = "";
std::string dob = ""; //Date of birth
int age;
long phone;

int main()
{
    // Get information
    std::cout << "Hello there, please write your name\n";
    std::cin >> name;
    std::string sSource = name;
    std::cout << "\nHi, " << name << ". How old are you?\n";
    std::cin >> age;
    std::cout << "\nOkay.\nNow, what's your phone number?\n";
    std::cin >> phone;
    std::cout << "\nRight.\nLastly, I'll need your date of birth (dd/mm/yyyy)\n";
    std::cin >> dob;

    //std::string sSource = name;           This is the method I used to find the users initial
    //std::cout << sSource[0] << "\n";      I found this method on learncpp.com chapter 17.4

    // Print information
    std::cout << "\n-------------------------\n";
    std::cout << " | Name     | " << name << "\n";
    std::cout << " | Initial  | " << sSource[0] << "\n";
    std::cout << " | Age      | " << age << "\n";
    std::cout << " | Phone nr | " << phone << "\n";
    std::cout << " | Birthday | " << dob << "\n";
    std::cout << "-------------------------\n";
}

