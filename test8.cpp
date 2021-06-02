#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    map<string, string> testmap;
    testmap.insert(pair<string, string>("a", "A"));
    testmap.insert(pair<string, string>("b", "B"));
    testmap.insert(pair<string, string>("c", "C"));
    for (auto const& x : testmap)
    {
        std::cout << x.first  // string (key)
                << ':' 
                << x.second // string's value 
                << std::endl;
    }

    if ( testmap.find("a") == testmap.end() ) {
        std::cout << "not found a key" << endl;
    } else {
        std::cout << "find a key: " << testmap["a"] << endl;
    }

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    for (auto const& x: s) {
        std::cout << x << endl;
    }

    for(int x: s) {
        std::cout << "aaaa: " << x << endl;
    }

    if(s.count(2)) {
        std::cout << "find" << endl;
    } else {
        std::cout << " not find" << endl;
    }
    
    vector<int> v = {1,2,3};
    v.push_back(4);
    v.push_back(5);
    std::cout << "v size: " << v.size() << endl;

    if(std::find(v.begin(), v.end(), 2) != v.end()) {
        std::cout << "find" << endl;
    } else {
        std::cout << " not find" << endl;
    }

    if(std::find(v.begin(), v.end(), 5) != v.end()) {
        std::cout << "find" << endl;
    } else {
        std::cout << " not find" << endl;
    }


    map<string, vector<string>> ttm;
    ttm["abc"].emplace_back("a");
    ttm["abc"].emplace_back("b");
    ttm["abc"].emplace_back("c");
    for(auto & row: ttm) {
        cout << row.first << row.second.size() << endl;
    }


    std::map<int, int> v1 = {{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}};
    std::map<int, int> v2 = {                {3, 2}, {4, 2}, {5, 2}, {6, 2}, {7, 2}};
    std::map<int, int> dest1 = v1;
 
    dest1.insert(v2.begin(), v2.end());
 
    for (const auto &i : dest1) {
        std::cout << i.first << ':' << i.second << ' ';
    }
    std::cout << '\n';
}