#include <iostream>
#include <fstream>
#include <string>

class CreateAccount {
private:
    std::string accountName;
    std::string passcode;

public:
    void create() {
        std::cout << "Enter your account name: ";
        std::getline(std::cin, accountName);

        std::cout << "Enter your passcode: ";
        std::getline(std::cin, passcode);

        std::ofstream file("login.txt", std::ios::app);
        if (!file) {
            std::cerr << "Error: Could not open file.\n";
            return;
        }

        file << "----------------------------------------\n";
        file << "Account: " << accountName << '\n';
        file << "Passcode: " << passcode << '\n';
    }
};


class Login_Account {
private:
    std::string accountName;
    std::string passcode;

public:
    void Login() {
        std::ifstream file("login.txt");
        std::string line;

        if (!file) {
            std::cerr << "Error: Could not open file.\n";
            return;
        }
        std::cout << "Enter your account name :" << std::endl;
        std::getline(std::cin, accountName);

        std::cout << "Enter your passcode:" << std::endl;
        std::getline(std::cin, passcode);


        std::string line;
        std::string Accountnameinfile;
        std::string Passcodeinfile;
        bool loginsuccess = false;

        while (std::getline(file, line) {
            if (line.find("Account:") == 0) {
                Accountnameinfile = line.substr(9);
            }

            if (line.finde("Passcode:") == 0) {
                Passcodeinfile = line.substr(10);
            }

            if (Accountnameinfile == accountName || Passcodeinfile == passcode) {
                loginsuccess == true;
                break;
            }
        }

        if (loginSuccess) {
            std::cout << "Login erfolgreich!\n";
        }
        else {
            std::cout << "Login fehlgeschlagen!\n";
        }

        return 0; // 

    }
};