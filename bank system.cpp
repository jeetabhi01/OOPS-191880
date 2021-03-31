#include<iostream>
#include<cmath>
//using namespace std;

class account{
	private:
	long int acc_no; double bal;
		char name[40];
	public:
	//DEFAULT CONSTRUCTOR 
	account();
	//ACCESSOR FUNCTIONS
	double getbal();
	//MUTATOR FUNCTIONS
	void setbal(double b);
	//MEMBER FUNCTIONS
	void display();
	void Interest(float t,double r);
	void withdraw(double amt);
	void deposit(double amt);
};


//code goes here **************************************************************
int main(){
	account acc1;
	int choice;
	double amount,  rate;
	float time;
	do{
		std::cout<<"---Main Menu---"<<std::endl;
		std::cout<<"1: Deposit money."<<std::endl;
		std::cout<<"2: Display Account Details."<<std::endl;
		std::cout<<"3: Withdraw money."<<std::endl;
		std::cout<<"4: Calculate Interest."<<std::endl;
		std::cout<<"5: Quit."<<std::endl;
		std::cout<<"Enter Your Choice"<<std::endl;
		std::cin>>choice;
		switch(choice){
			case 1:
				std::cout<<"Enter the amount you want to deposit"<<std::endl;
				std::cin>>amount;
				acc1.deposit(amount);
				break;
			case 2:
				acc1.display();
				break;
			case 3:
				std::cout<<"Enter the amount you want to Withdraw"<<std::endl;
				std::cin>>amount;
				acc1.withdraw(amount);
				break;
			case 4:
				
				std::cout<<"Enter the time(in years):- "<<std::endl;
				std::cin>>time;
				std::cout<<"Enter the rate(in percentage):-"<<std::endl;
				std::cin>>rate;
				acc1.Interest(time,rate);
				break;
			case 5:
				exit(0);
				break;	
			default:
				std::cout<<"Invalid input. Give apporiate input and try again \n";
		}
	}while(1);
	return 0;
}

//**********************************************************************************

//function definitions

account::account(){
			std::cout<<"Enter Account Holders name:- \t"<<std::endl;
			std::cin.getline(name,40);
			std::cout<<"Enter Account no.:- \t"<<std::endl;
			std::cin>>acc_no;
			std::cout<<"Enter Opening balance:- \t"<<std::endl;
			std::cin>>bal;
		}
		void account::deposit(double amt){
			getbal();
			bal+=amt;
			setbal(bal);
			std::cout<<"Deposit made successfully."<<std::endl;
			std::cout<<"Balance after Deposit is:-\t"<<bal<<std::endl;
		}
		void account::withdraw(double amt){
			if(bal>=amt){
				getbal();
				bal-=amt;
				setbal(bal);
				std::cout<<"Withdraw made successfully."<<std::endl;
			std::cout<<"Balance after Withdraw is:-\t"<<bal<<std::endl;
			}else{
				std::cout<<"Insufficient balance."<<std::endl;
				std::cout<<"Available Balance is:- "<<bal<<std::endl;
			}
		}
		void account::display(){
			std::cout<<"---Account Details---"<< std::endl;
			std::cout<<"Name of the Account Holder is \t"<<name<<std::endl;
			std::cout<<"Account no. is \t"<<acc_no<<std::endl;
			std::cout<<"Current Balance is \t"<<bal<<std::endl;
		}
		void account::Interest(float t,double r){
			double CI;
			std::cout<<"Compound interest is:- \t"<<std::endl;
			CI = bal*pow(1+(r/100),t);
			std::cout<<"CI = \t"<<CI-bal<<std::endl;
			std::cout<<"THE TOTAL AMOUNT IS \t"<<CI<<std::endl;
		}
		double account::getbal(){
			return bal;
		}
		void account::setbal(double b){
			bal = b;
		}