#include <iostream>
using namespace std;
int getAge();
void setAge(int age);
class Jazi
{

private:
  int age;
  string name;

public:
  Jazi()
  {
  }
  Jazi(int age, string name)
  {
    this->age = age;
    this->name = name;
  }

  int getAge()
  {
    return age;
  }
  void setAge(int age)
  {
    this->age = age;
  }
};
int main()
{
  Jazi jazi;
  // cout<<jazi.age<<endl;
  // cout<<jazi.name<<endl;
  jazi.setAge(20);
  cout << jazi.getAge() << endl;

  return 0;
}
