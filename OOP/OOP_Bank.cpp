#include <iostream>
#include <string>
#include <cstdlib> // Included for rand()

using namespace std;

class BankAccount {
    private:
        string accountHolderName;
        int accountNumber;
        double balance;
    
    public:
        // Constructor updated to follow the 0.0 initial balance rule
        BankAccount(string name) {
            accountHolderName = name;
            balance = 0.0; 
            accountNumber = 100000 + rand() % 900000; // Generates a clean 6-digit number
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: $" << amount << endl;
            } else {
                cout << "Error: Deposit amount must be positive!" << endl;
            }
        }

        void withdraw(double amount) {
            if (amount <= 0) {
                cout << "Error: Withdrawal amount must be positive!" << endl;
            } else if (amount <= balance) { // Fixes the overdraft bug
                balance -= amount;
                cout << "Withdrew: $" << amount << endl;
            } else {
                cout << "Error: Insufficient Funds in Account!" << endl;
            }
        }

        void display() {
            cout << "\n--- Account Details ---" << endl;
            cout << "Name: " << accountHolderName << endl;
            
            // Masking the account number for security (e.g., showing last 3 digits)
            cout << "Account No.: XXX" << accountNumber % 1000 << endl; 
            cout << "Balance: $" << balance << endl;
            cout << "-----------------------" << endl;
        }
};

int main() {
    // Creating account
    BankAccount b("Aryan");
    b.display();

    // Testing Deposit
    b.deposit(500.0);
    
    // Testing valid withdrawal
    b.withdraw(150.0);
    b.display();

    // Testing invalid withdrawal (Overdraft protection)
    b.withdraw(400.0); 

    return 0;
}