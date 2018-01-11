/* Program: CS 115 Lab 6d
   Author: David Smith
   Description: This program uses nested for-loops to print an addition table.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  cout << "--- MULTIPLICATION TABLE ---" << endl;
  
  // Print header rows
  for (int i=0; i<= 12; i++) {
    if (i == 0) {
      cout << setw(4) << "*" << " |";
    }
    cout << setw(4) << i;
  }
  cout << endl;
  for (int i=0; i<= 12; i++) {
    if (i == 0) {
      cout << "   --+";
    }
    cout << "----";
  }
  cout << endl;
  
  // Print rest of table
  for (int i=0; i <= 12; i++) {
    cout << setw(4) << i << " |";
    for (int j=0; j <= 12; j++) {
      cout << setw(4) << i*j;
    }
    cout << endl;
  }
  
  return 0;
}
