#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, world!" << endl;
    return 0;
}


// 最简单的编译方式：

// $ g++ helloworld.cpp

// 由于命令行中未指定可执行程序的文件名，编译器采用默认的 a.out。程序可以这样来运行：

// $ ./a.out

// Hello, world!

// 也可以使用 gcc test.cpp -lstdc++ 进行编译


// 通常我们使用 -o 选项指定可执行程序的文件名，以下实例生成一个 helloworld 的可执行文件：

// $ g++ helloworld.cpp -o helloworld
// 执行 helloworld:

// $ ./helloworld
// Hello, world!

