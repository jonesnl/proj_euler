#include <iostream>

using namespace std;

int main() {
  bool complete = false;
  long long int soln = 0;
  for(long long int i = 2; !complete; ++i) {
    bool is_complete = true;
    
    for(int j = 1; j <= 20; ++j) {
      if (i % j == 0) continue;
      else {
        is_complete = false;
        break;
      }
    }

    if (is_complete) {
      complete = true;
      soln = i;
    }
  }

  cout << soln << '\n';
}
