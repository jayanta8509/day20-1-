// Write a program to identify if the number is Prime number or not
#include <iostream>
using namespace std;
void prime(int a) {
  if (a <= 1) {
    cout << "Not Prime" << endl;
  }
  for (int i = 2; i <= a; i++) {
    if (i == 2) {
      cout << "Prime" << endl;
      break;
    }
    if (a % i == 0) {
      cout << "Not Prime" << endl;
      break;
    } else {
      cout << "Prime";
      break;
    }
  }
}
int main() {
  int a = 29;
  prime(a);
}