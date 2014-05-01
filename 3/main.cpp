#include <iostream>
#include <stack>

using namespace std;

typedef long long int large_int;

large_int largest_factor(large_int a) {
  stack<large_int> nums_to_factor;
  nums_to_factor.push(a);
  large_int largest_factor = -1;

  while (!nums_to_factor.empty()) {
    large_int cur_factor = nums_to_factor.top();
    nums_to_factor.pop();
    large_int loop_bound = cur_factor / 2;

    bool factored = false;
    for (large_int i = 2; i < loop_bound; ++i) {
      if (cur_factor % i == 0) {
        factored = true;
        if (i > largest_factor) largest_factor = i;
        nums_to_factor.push(cur_factor / i);
        break;
      }
    }

    if (factored == false) {
      if (cur_factor > largest_factor) largest_factor = cur_factor;
    }
  }

  return largest_factor;
}

int main() {
  

  large_int l_factor = largest_factor(600851475143);

  cout << l_factor << '\n';
  

  return 0;
}
