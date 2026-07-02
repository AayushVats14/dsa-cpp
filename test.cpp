//factorial of n

#include <iostream>
using namespace std;

int main() {
  int n; //taking in N
  int fact = 1; //storing factorial
  cout << "enter the number= ";
  cin >> n;

  for(int i=1; i<=n; i++) {
    fact = fact*i;
    }

  cout << "The factorial is= ";
  cout << fact;
  return 0;
  }