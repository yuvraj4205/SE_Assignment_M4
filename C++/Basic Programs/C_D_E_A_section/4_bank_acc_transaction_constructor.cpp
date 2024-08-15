/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;

class BankAccount
{
	private :
			long int acc_num;
			int balance;
			
	public :
			BankAccount(long int an,int bal)
			{
				acc_num=an;
				balance=bal;
			}
			void deposit(double amount)
			{
				balance+=amount;
				cout<<endl<<endl<<"Amount deposited : "<<amount;
			}
			int withdraw()
			{
				long int amount;
				cout<<endl<<"Enter amount to withdraw : ";
				cin>>amount;

				if(amount<=balance)
				{
					balance-=amount;
					cout<<endl<<"Balancde after withdrawal : "<<balance;
					return true;
				}
				else
				{
					cout<<endl<<"INSUFFICIENT BALANCE!!!"<<endl;
					return false;
				}
			}
};

main()
{
	long int Acc_no=1234567890;
	int balance=50000;
	
	cout<<"A/c no. : "<<Acc_no<<endl<<"Current Balance : "<<balance;
	BankAccount account(1234567890,50000.0);
	account.deposit(5000.0);
	account.withdraw();
}
