#include <iostream>

using namespace std;

void moveDisc(int, char, char, char);
long factorialR(int);

int main() {
int Disc; 
cout  << "How many discs are there" << endl;
cin >> Disc;
moveDisc(Disc, 'A', 'B', 'C');
int n;
cout << "What is your number?: ";
cin >> n;
cout << "The factorial of " << n << " is " << factorialR(n) << endl;
}

void moveDisc(int numDiscs, char from, char aux, char to) {
  // Base case: when the number of discs on a peg equals 1
  if (numDiscs == 1) {
    cout << "Move disc 1 from " << from << " to " << to << "\n";
  }
  else {
    moveDisc(numDiscs - 1, from, to, aux); // Move disk from "from" peg to "aux" peg using "to" peg as auxiliary peg
    cout << "Move disc " << numDiscs << " from " << from << " to " << to << "\n";
    moveDisc(numDiscs - 1, aux, from, to); // Move disk from "aux" peg to "to" peg using "from" peg as an auxiliary peg

  }
  
}

long factorialR(int num) {
  if (num == 1) {
    return 1;
  }
  else {
    return num * factorialR(num - 1);
  }
}