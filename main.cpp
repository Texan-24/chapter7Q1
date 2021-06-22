#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::abs;

int main() {
  int num, denom = 0;

  cout<<"Input numerator: ";
  cin >> num;

  cout << "Input denominator: ";
  cin >> denom;

  bool is_neg = false;
  if ((num < 0 && denom >=0) || (num >= 0 && denom < 0)) {
    is_neg = true;
}
 num = abs(num);
 denom = abs(denom);

 if (num > denom) {
   int whole = num/denom;
   int remainder = num % denom;

  if  (is_neg)  {
   cout << "-";
  }

   cout << whole << " ";
   if (remainder > 0) {
    cout << remainder << "/" << denom;
   }
  }else {
  
  if  (is_neg)  {
  cout << "-";
}

cout << num << "/" << denom << "\n";
 }
}