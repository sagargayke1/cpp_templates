//#include <iostream>
//#include <vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    // initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};

  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};

  // method 3
  vector<int> vector3(5, 12);

  cout << "vector1 = ";

  // ranged loop
  for (const int& i : vector1) {
    cout << i << "  ";
  }

    cout<<"Hello world \n";
}