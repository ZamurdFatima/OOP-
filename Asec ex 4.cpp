#include<iostream>
#include<conio.h>
using namespace std;
class bank_acc{
	int balance;
	int acc_num;
	string name;
	public:
		void deposit(double amount){
			if(amount>0){
				balance+=amount;
				cout<<"Amount deposited.\n"<<balance<<endl;
			}
			else{
				cout<<"Invalid input. Deposit amount.\n"<<balance<<endl;
			}
		}
		void withdraw(double amount){
			if(amount>0 && amount<=balance){
				balance-=amount;
				cout<<"Amount withdrawed.\n"<<balance<<endl;
			}
			else if (amount > balance) {
            cout << "Insufficient funds. Withdrawal failed." <<endl;
           } else {
            cout << "Invalid withdrawal amount. Please enter a positive value." <<endl;  //it means -ve
        }
		}
};
int main(){
	bank_acc b1;
	b1.deposit(200);
	b1.withdraw(4.4);
}




//#include <iostream>
//using namespace std;
//class BankAccount {
//private:
//    int account_number;
//    std::string account_holder_name;
//    double balance;
//
//public:
//    // Constructor
//    BankAccount(int acc_number, const std::string& acc_holder_name, double initial_balance)
//        : account_number(acc_number), account_holder_name(acc_holder_name), balance(initial_balance) {}
//
//    // Member function to deposit money
//    void deposit(double amount) {
//        if (amount > 0) {
//            balance += amount;
//            std::cout << "Deposit of $" << amount << " successful. New balance: $" << balance << std::endl;
//        } else {
//            std::cout << "Invalid deposit amount. Please enter a positive value." << std::endl;
//        }
//    }
//
//    // Member function to withdraw money
//    void withdraw(double amount) {
//        if (amount > 0 && amount <= balance) {
//            balance -= amount;
//            std::cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << std::endl;
//        } else if (amount > balance) {
//            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
//        } else {
//            std::cout << "Invalid withdrawal amount. Please enter a positive value." << std::endl;
//        }
//    }
//
//    // Member function to display account information
//    void display() const {
//        std::cout << "Account Number: " << account_number << std::endl;
//        std::cout << "Account Holder: " << account_holder_name << std::endl;
//        std::cout << "Balance: $" << balance << std::endl;
//    }
//};
//
//int main() {
//    // Create a BankAccount object
//    BankAccount myAccount(12345, "John Doe", 1000.0);
//
//    // Display initial account information
//    cout << "Initial Account Information:" <<endl;
//    myAccount.display();
//    // Perform deposit and withdrawal operations
//    myAccount.deposit(500.0);
//    myAccount.withdraw(-200.0);
//    // Display updated account information
//    cout << "\nUpdated Account Information:" <<endl;
//    myAccount.display();
//    return 0;
//}
