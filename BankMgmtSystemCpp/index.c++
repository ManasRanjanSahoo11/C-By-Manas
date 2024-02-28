#include <iostream>
#include <vector>
using namespace std;

class BankAccount
{
    string name;
    int accountNo;
    double balance;

public:
    BankAccount(string nm, int ac, double bl)
    {
        name = nm;
        accountNo = ac;
        balance = bl;
    }

    string getName()
    {
        return name;
    }

    int getAccount()
    {
        return accountNo;
    }

    double getBalance()
    {
        return balance;
    }
};

class BankManagement
{
    vector<BankAccount> accounts;

public:
    void addAccount(string name, int accountNo, double balance)
    {
        accounts.push_back(BankAccount(name, accountNo, balance));
    }

    void showAllAccount()
    {
        cout << "All Account Holders" << endl;
        cout << "-----------------------" << endl;
        for (int i = 0; i < accounts.size(); i++)
        {
            cout << "Name :" << accounts[i].getName() << endl;
            cout << "Account No :" << accounts[i].getAccount() << endl;
            cout << "Balance :" << accounts[i].getBalance() << endl;
            cout << endl;
        }
    }

    void searchAccount()
    {
        int accountno, flag = 0;
        cout << "Enter Your Account Number :" << endl;
        cin >> accountno;

        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].getAccount() == accountno)
            {
                flag = 1;
                cout << "Account Found" << endl;
                cout << "--------------------" << endl;
                cout << "Name :" << accounts[i].getName() << endl;
                cout << "Account No :" << accounts[i].getAccount() << endl;
                cout << "Balance :" << accounts[i].getBalance() << endl;
                cout << endl;
                return;
            }
        }
        if (flag == 0)
        {
            cout << "Account Not Found!" << endl;
            return;
        }
    }

    
    void depositAccount()
    {
        int accountno, flag = 0;
        double depositAmount;
        cout << "Enter Your Account No :" << endl;
        cin >> accountno;

        cout << "Enter the Amount To Deposit :" << endl;
        cin >> depositAmount;

        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].getAccount() == accountno)
            {
                flag = 1;
                double balance = accounts[i].getBalance();
                balance += depositAmount;
                cout << "Amount Deposited Successfully..." << endl;
                return;
            }
        }
        if (flag == 0)
        {
            cout << "Amount Not Deposited! Because Some Error" << endl;
            return;
        }
    }


    void withdrawAccount()
    {
        int accountno, flag = 0;
        double depositAmount;
        cout << "Enter Your Account No :" << endl;
        cin >> accountno;

        cout << "Enter the Amount To Withdraw :" << endl;
        cin >> depositAmount;

        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].getAccount() == accountno)
            {
                flag = 1;
                double balance = accounts[i].getBalance();
                balance += depositAmount;
                cout << "Amount Withdraw Successfully..." << endl;
                return;
            }
        }
        if (flag == 0)
        {
            cout << "Amount Not Withdraw! Because Some Error" << endl;
            return;
        }
    }


    void deleteAccount(){
        int accountno, flag = 0;
        double depositAmount;
        cout << "Enter Your Account No :" << endl;
        cin >> accountno;

        for (int i = 0; i < accounts.size(); i++)
        {
            if (accounts[i].getAccount() == accountno)
            {
                flag = 1;
                accounts.erase(accounts.begin()+i);
                cout << "Account Successfully..." << endl;
                return;
            }
        }
        if (flag == 0)
        {
            cout << "Amount Not Deleted! Because Some Error" << endl;
            return;
        }
    }

};

int main()
{
    BankManagement ob;

    string name;
    int accountNo;
    double balance;

    while (1)
    {
        cout << "1.Create New Account" << endl;
        cout << "2.Show All Account" << endl;
        cout << "3.Search Account" << endl;
        cout << "4.Deposit Account" << endl;
        cout << "5.Withdraw Account" << endl;
        cout << "6.Delete Account" << endl;
        cout << "7.Exit" << endl;
        cout << "---------------------------" << endl;

        int choice;
        cout << "Enter Your Choice " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Your name :" << endl;
            cin.ignore();
            getline(cin, name);

            cout << "Enter the Account Number :" << endl;
            cin >> accountNo;

            cout << "Enter your Initial Balance :" << endl;
            cin >> balance;

            ob.addAccount(name, accountNo, balance);

            cout << "Create New Account Successfully..." << endl;
            break;
        case 2:
            ob.showAllAccount();
            break;
        case 3:
            ob.searchAccount();
            break;
        case 4:
            ob.depositAccount();
            break;
        case 5:
            ob.withdrawAccount();
            break;
        case 6:
            ob.deleteAccount();
            break;
        case 7:
            return 0;
            break;
        default:
            cout << "Enter Valid Choice!" << endl;
        }
    }
}
