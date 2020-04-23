#include <iostream>
using namespace std;

void print_count(int n)
{
  cout << "T minus "  << n << " and counting\n";
} 

int main()
{
  int i;

  for (i = 10; i > 0; --i)
    print_count(i);

  return 0;
}

