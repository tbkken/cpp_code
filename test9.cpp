#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool getVidByUids(std::vector<int> &uid_vector, std::map<int, std::string> &values) {
    int limit = 10000;
    cout << "getVidByUids(std::vector<long> &uid_vector, std::map<long, std::string> &values)" << endl;
    return true;
}

bool getVidByUids(std::set<int> &uid_set, std::map<int, std::string> &values) {
    bool bRet = true;
    std::vector<int> uid_vector(uid_set.begin(), uid_set.end());
    cout << "getVidByUids(std::set<long> &uid_set, std::map<long, std::string> &values)" << endl;
    return getVidByUids(uid_vector, values);
}

int main() {
    std::vector<int> uid_vector = {1, 2, 4};
    std::map<int, std::string> values;
    getVidByUids(uid_vector, values);

}