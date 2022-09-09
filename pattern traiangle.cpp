#include <iostream>
using namespace std;

int main() 
{
  int size = 3;

  for (int i = 1; i <= size; i++)
   {
    for (int j = 0; j < i; j++)
	 {
      cout << "1.4";
    }
    cout << "\n";
  }
  
  for (int i = 1; i <= size - 1; i++) 
  {
    for (int j = 0; j < size - i; j++) 
	{
      cout << "1.4";
    }
    cout << "\n";
  }
  return 0;
}