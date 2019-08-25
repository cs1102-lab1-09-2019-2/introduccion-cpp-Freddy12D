#include <iostream>
#include <vector>
int main() {
  using namespace std;
    std::vector<std::vector<int>> v{{1, 2}, {3, 4}, {5, 6}};
    for (auto a : v) {
        for (auto i : a) {
            cout<<i;
        }
       cout<<"\n";
    }
}

