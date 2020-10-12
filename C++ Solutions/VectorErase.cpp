#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    auto n = size_t{};
    cin >> n;
    vector<int> v;
    v.reserve(n);
    auto i = int{};
    while(n-- && cin >> i) 
        v.push_back(i);
    auto d = int{};
    cin >> d;
    v.erase(v.begin() + d-1);
    auto r = int{};
    auto r1 = int{};
    cin >> r;
    cin >> r1;
    v.erase(v.begin() + r-1 , v.begin() + r1 - 1);
    cout << v.size() <<"\n";
    for(const auto a:v)
        cout << a <<" ";
    return 0;
}