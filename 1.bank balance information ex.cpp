#include<iostream>
using namespace std;
class bank{
	private:
		string depositor_name;
		int acc_num;
		string acc_type;
		double balance;
	public:
		bank(string name,int acc,string type,double bal):depositor_name(name),acc_num(acc),acc_type(type),balance(bal){
		}
		void deposit(int a){
			balance=balance+a;
		}
		void withdraw(int b){
			if(b<=balance){
				cout<<"It can withdraw the amount.\n"<<endl;
			}
			else{
				cout<<"Account does not have enough money.\n"<<endl;
			}
			balance=balance-b;
		}
		void display(){
			cout<<"Name of depositor is:\n "<<depositor_name<<endl;
			cout<<"Current balance is: \n"<<balance<<endl;
		}
};
int main(){
	bank b1("Zamurd",44,"buisness",10000);
	b1.deposit(3000);
	b1.withdraw(4000);
	b1.display();
}
