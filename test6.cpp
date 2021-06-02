#include <iostream>
#include <sstream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

// for string delimiter
vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

bool updatePidAndUidVector(const std::string &pid, std::vector<std::string> uid_vector, const std::string &ts) {        
    int ret = 0;
    bool is_all_success = true;
    for(std::string uid: uid_vector) {
        // 取前面四个数字，和pid组成分区
        std::string mainkey = pid + "_" + uid.substr(0, 4);
        try {
            cout << "key: " << mainkey << ", uid: " << uid << endl;
        } catch(const std::exception& e) {
            is_all_success = false;
            cout << "fail to insert dcache, key: " << mainkey << ", uid: " << uid << " ret:" << ret << endl;
        } 
    }
    return is_all_success;
}


int main() {
    string str0 = "adsf-+qwret-+nvfkbdsj-+orthdfjgh-+dfjrleih";
    string delimiter = "-+";
    vector<string> v = split (str0, delimiter);
    for (auto i : v) cout << i << endl;

    string str1 = "007|4774,3996,3787,2097,4644,3537,6780,6271,6894,9234";    
    vector<string> vs = split (str1, "|");
    string abc = vs[0];    
    vector<string> uids = split (vs[1], ",");
    for (auto i : uids) cout << i << endl;
    std::string s = "abc";
    cout << (s + "cdef") << endl;

    string pid = "123456789";
    vector<string> uid_vector = {"0001abc", "0002abc", "0003abc"};
    updatePidAndUidVector(pid, uid_vector, "abc");

    cout << log10(1000) << endl;


    int file_num = 500;
    int padding = 5;
    std::string str = std::to_string(file_num);
    std::cout << "5: " << str.size() << std::endl;
    while (str.size() < padding) str = "0" + str;
    std::cout << str << std::endl;


    stringstream ss;
    ss << setw(5) << setfill('0') << 100;
    cout << ss.str() << endl;



    std::string str2 = "abcdefg";

    cout << str2.substr(str2.size()-4, 4) << endl;


    std::string str3 = "v_507794029";
    cout << str3 << ": " << str3.substr(0, 1) << " - " << str3.substr(2) << endl;
    

    long a = 123;
    long b = 456;
    cout << a << endl;

    std::stringstream ss2;
    ss2 << a << "_" << b << endl;

    string c;
    c.append(std::to_string(a)).append("_").append(std::to_string(b));
    cout << c << endl;


    return 0;
}