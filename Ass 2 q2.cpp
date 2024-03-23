#include<iostream>
using namespace std;
class bank{
	private:
		string depositor_name;
		int acc_num;
		string acc_type;
		double balance;
	public:
		bank(){
		}
		bank(int c){
			balance=c;
		}
		bank(string name,int acc,string type,double bal):depositor_name(name),acc_num(acc),acc_type(type),balance(bal){
		}
		void deposit(int a){
			balance=balance+a;
		}
		void withdraw(int b){
			if(b<=balance&&b>0){
				cout<<"It can withdraw the amount.\n"<<endl;
				balance=balance-b;
			}
			else{
				cout<<"Account does not have enough money.\n"<<endl;
			}
			
		}
		void display(){
			cout<<"\nName of depositor is:\n "<<depositor_name<<endl;
			cout<<"Current balance is: \n"<<balance<<endl;
		}
		double operator + (bank a){
			
			balance=balance+a.balance;
			return balance;
		}
};
int main(){
	bank b1("Zamurd",44,"buisness",10000);
	b1.deposit(3000);
	b1.withdraw(4000);
	b1.display();
	
    bank b2("Badra",88,"buisness",1000);
    b2.display();
    
    double b;
	b= b1+b2;
	cout<<"\nSum is transferred to: "<<endl;
	bank b3("Raazia",3,"Student",b);
	b3.display();
	
}
