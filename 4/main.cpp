#include <iostream>
#include <vector>

using namespace std;

typedef long long int big_int;

int main() {
  big_int largest = 0;
  int a = 0, b = 0;
  for (int i = 1; i < 1000; ++i) {
    for (int j = i; j < 1000; ++j) {
      big_int cur_num = i * j;
      big_int cur_num_temp = cur_num;
      //digits of form 10^index
      vector<int> digits;
      while (cur_num_temp != 0) {
        digits.push_back(cur_num_temp % 10);
        cur_num_temp /= 10;
      }

      bool palendrome = true;
      for (int i = 0; i < digits.size() / 2; ++i) {
        if (digits[i] != digits[digits.size() - 1 - i]) {
          palendrome = false;
          break;
        }
      }

      if (palendrome && cur_num > largest) {
        largest = cur_num;
        a = i;
        b = j;
      }
    }
  }

  cout << a << '\n' << b << '\n';
  cout << largest << '\n';

  return 0;

}
