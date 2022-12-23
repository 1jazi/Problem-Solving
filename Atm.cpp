#include <iostream>
using namespace std;
class Atm
{
private:
  int password;
  string userName;
  int balance;

public:
  int money;
  int count = 0;
  bool expretion = true;
  int transaction;
  Atm()
  { // constructor
    cout << "*********Hello user welcome the bank system*********" << endl;
  }
  Atm(string userName, int password, int balance)
  {
    this->userName = userName;
    this->password = password;
    this->balance = balance;
    this->money = balance;
  }
  void setPass(int password)
  {
    this->password = password;
  }
  int getPass()
  {
    return password;
  }
  void setUserName(string userName)
  {
    this->userName = userName;
  }
  string getUserName()
  {
    return userName;
  }
  void setBalance(int balance)
  {
    this->balance = balance;
  }
  int getBalance()
  {
    return balance;
  }

  int transactionn()
  {
    cout << "Enter how much money you want to trans : ";
    cin >> transaction;
    money = getBalance();
    money -= transaction;
    return money;
  }

  void logIn()
  {
    cout << "Enter your user name : ";
    cin >> userName;

    cout << "Enter your password : ";
    cin >> password;

    if (userName == getUserName() && password == getPass())
    {
      mainMenu();
    }
  }

  void mainMenu()
  {

    count++;
    (count == 3) ? expretion == false : expretion = true;
    int choice;

    while (choice != 3)
    {
      cout << "Choose from the menu : \n1-Balance\n2-transaction\n3-exit" << endl;

      cin >> choice;
      if (choice == 1)
      {
        cout << "Your balance is -> " << money << endl;
      }
      else if (choice == 2)
      {
        transactionn();
      }
      else if (choice == 3)
      {
        cout << "Exit" << endl;
      }
      else
      {
        cout << "invallid choice " << endl;
      }
    }
  }
};
int main()
{
  Atm atm("jazi", 1234, 10000);
  atm.logIn();
  return 0;
}
