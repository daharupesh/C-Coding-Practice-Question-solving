// ATM management System Using c++
#include <iostream>
using namespace std;

int main()
{
	  
    int choice;
    string name;
	long long accnumber;
	char type[10];
	long long amount = 0;
	long long tot = 0;
    int a=0, avai_balance=0;
    int count;
    while (1) {
		cout<< "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "<< "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;

		// Choices to select from
		switch (choice) {
		case 1:
			cout << "Enter name\n";
		    cin >> name;
            cout << "Enter Account number\n";
            cin >> accnumber;
            cout << "Enter Account type\n";
            cin >> type;
            cout << "Enter Balance\n";
            cin >> tot;
			break;
        case 2:
            cout << "Name:" << name << endl;
            cout << "Account No:" << accnumber << endl;
            cout << "Account type:" << type << endl;
            cout << "Balance:" << tot << endl;
			break;
		case 3:
            cout << "\nEnter amount to be Deposited\n";
            cin >> amount;
			break;
		case 4:
			tot = tot + amount;

		    cout << "\nTotal balance is: " << tot;
			break;
		case 5:
            
            cout << "Enter amount to withdraw\n";
            cin >> a;
            avai_balance = tot - a;
            cout << "Available Balance is" << avai_balance;
			break;
		case 6:
            cout<<"You have exited";
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}

