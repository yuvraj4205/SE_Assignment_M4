/*Define a class to represent a bank account. Include the following members:
------Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
------Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */

#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
	public :
			string name;
			long int accountNumber;
			string accountType;
			double balance; 
	
			void assignedValues(string n,long int accNum,string type,double bal)
			{
        		name=n;
        		accountNumber=accNum;
        		accountType=type;
        		balance=bal;
    		}
			void deposit(double amount)
			{
				balance+=amount;
				cout<<endl<<"Amount deposited : "<<amount;		
			}
			int withdraw()
			{
				long int amount;
				cout<<endl<<endl<<"Enter amount to withdraw : ";
				cin>>amount;
				if(amount<=balance)
				{
					balance-=amount;
					return true;
				}
				else
				{
					cout<<endl<<"INSUFFICIENT BALANCE!!!"<<endl;
					return false;
				}
			}
			void display()
			{
        		cout<<endl<<"Name : "<<name;
        		cout<<endl<<"Account Number : "<<accountNumber;
        		cout<<endl<<"Account Type : "<< accountType;
        		cout<<endl<<"Balance : "<<balance;
    		}
};

main()
{
	BankAccount account;
	cout<<"------Before transaction------";
	account.assignedValues("Yuvraj Vaghela",1234567890,"Savings",50000.0);
	account.display();
	account.deposit(5000.0);
	account.withdraw();
	cout<<endl<<"-------After transaction------";
	account.display();
}
