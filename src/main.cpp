#include <iostream>
using namespace std;

/*
 * @autor JeanCarlosSC
 */

bool isOdd (int a) {
    return a%2 != 0;
}

int cycleLength(int n) {
    int c = 0; //counter

    while(true) {
        c++;
        if (n==1)
            break;
        else if (isOdd(n)) {
            n = 3*n + 1;
        }
        else {
            n = n/2;
        }
    }

    return c;
}

int maximunCycleLength(int a, int b) {
    int max = 0;
    for(int i = a; i<=b; i++) {
        int value = cycleLength(i);
        if (value > max) {
            max = value;
        }
    }
    return max;
}

int main() {
  cout << "\ntype an invalid input number for stop the program." << endl;
  cout << "please type only numbers in (0, 10000)" << endl;

  int num1 = 0;
  int num2 = 0;

  while(true) {
    cout << "write number 1: ";
    cin >> num1;
    if (num1<1 || num1>9999) {
        cout << "execution completed successfully" << endl;
        break;
    }
    cout << "write number 2: ";
    cin >> num2;
    if (num2<1 || num2>9999)
        break;

    cout << "output: " << maximunCycleLength(num1, num2) << "\n" << endl;
  }

  return 0;
}
