#include <iostream>

using namespace std;
void add(int element);
string toString();
class dyanmicArray
{
public:
  int size;
  int *array;
  int capacity = 10;

  dyanmicArray()
  {

    this->array = new int[capacity];
  }
  void add(int element)
  {
    array[size] = element;
    size++;
  }
  string toString()
  {
    string s = "";
    for (int i = 0; i < capacity; i++)
    {
      s = array[i];
    }
    return s;
  }

  bool isEmpty()
  {
    return size = 0;
  }
};
int main()
{
  dyanmicArray array;

  array.add(1);
  array.add(2);
  array.add(3);
  array.add(4);

  cout << array.isEmpty() << endl;

  return 0;
}
