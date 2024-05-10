//#include <iostream>
//#include <string>
//using namespace std;
//
//class BankAccount {
//
//private:
//    int balance;
//public:
//
//    BankAccount() { cout << "constructor" << endl; }
//    BankAccount(int initBalance) : balance{ initBalance } { cout << "constructor" << endl; }
//    int getBalance() { return this->balance; }
//
//    // const BankAccount* const this
//    BankAccount operator+(const BankAccount&  operandTwo) {
//
//        cout << "operator overloading" << endl;
//        BankAccount newAccount(0);
//        newAccount.balance = this->balance + operandTwo.balance;
//        return newAccount;
//    }
//
//    ~BankAccount() { cout << "destructor" << endl; }
//};
//
//int main()
//{
//    BankAccount acc1(1000);
//    BankAccount acc2(2000);
//    cout << acc1.getBalance() << endl;
//    cout << acc2.getBalance() << endl;
//
//    BankAccount acc3 = acc1 + acc2;
//    cout << acc3.getBalance() << endl;
//}