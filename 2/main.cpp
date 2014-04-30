#include <iostream>

using namespace std;

typedef long long unsigned int large_int;

int main() {
  large_int sum = 2;

  large_int prev_prev_num = 1, prev_num = 2, cur_num = 3;

  while (cur_num < 4000000) {
    if (cur_num % 2 == 0) {
      sum += cur_num;
    }

    prev_prev_num = prev_num;
    prev_num = cur_num;
    cur_num = prev_num + prev_prev_num;
  }
  cout << prev_num << '\n';
  cout << cur_num << '\n';

  cout << sum << '\n';
}
