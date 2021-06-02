#include <iostream>
#include <sstream>
#include <vector>

using namespace std;


unsigned int getMorningTime() 
{  
    time_t t = time(NULL); 
    struct tm * tm= localtime(&t);  
    tm->tm_hour = 0;  
    tm->tm_min = 0;  
    tm->tm_sec = 0;  
    return  mktime(tm);  
} 

int main() {
    cout << time(NULL) << endl;
    cout << std::to_string(time(NULL)) << endl;

    cout << getMorningTime() << endl;
}
