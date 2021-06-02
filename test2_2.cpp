#include <iostream>
using namespace std;

#include "test2_1.h"

int main()
{
    int number1 = f1();
    int number2 = f2(number1);

    cout << number1 << "\t" << number2 << endl;
}


/*
多个文件一起编译，注意地方：
1、
    #include "test2_1.h" 不要写成 #include<test2_1.h>
2、
    编译命令是：

    g++ test2_1.h test2_1.cpp test2_2.cpp  -o main
*/