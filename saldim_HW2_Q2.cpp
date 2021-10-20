/*************************************************************************
** Author : Salvatore DiMaggio
** Program : hw2, q2
** Date Created : October 11, 2021
** Date Last Modified : October 19, 2021
** Usage : No command line arguments
**
** Problem:
Ask the user to enter a memo for each check (using keyboard)
 Balance is $1000 to start
 First check is $100
 Second check is $200
 Third check is $300
 The final balance is $400
*************************************************************************/
#include<iostream>
using namespace std;
#define CHECK_LIMIT 5
struct Check{
    int CheckNum;
    string CheckMemo;
    float CheckAmount;
};
class CheckBook{
public:
    float balance;
    int checkLimit = CHECK_LIMIT;
    Check arr[CHECK_LIMIT];
    float lastDeposit;
    int numOfChecks;

    CheckBook(){
        balance = 0.00;
        numOfChecks = 0;
    }
    CheckBook(float balance){
        this->balance = balance;
        numOfChecks = 0;
    }

    void deposit(float amount){
        balance += amount;
    }

    void displayChecks(){
        cout << "Check Number\t Check Memo\t Check Amount" <<endl;
        for(int i = numOfChecks - 1; i >= 0; i--){
            cout << arr[i].CheckNum << "\t\t" << arr[i].CheckMemo << "\t\t" << arr[i].CheckAmount<<endl;
        }
    }
    bool writeCheck(float amount){
        if(amount <= balance){
            cout<<"Enter the memo: ";
            cin >> arr[numOfChecks].CheckMemo;
            arr[numOfChecks].CheckAmount = amount;
            arr[numOfChecks].CheckNum = numOfChecks + 1;
            numOfChecks++;
            balance -= amount;
        }
        else
            return false;
    }
};
int main(){
    
    return 0;
}