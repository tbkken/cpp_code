#include <iostream>
using namespace std;

//圆周率
const double PI = 3.14;

//1、封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物

// 在C++中 struct和class唯一的区别就在于 默认的访问权限不同

// 区别：

// struct 默认权限为公共
// class 默认权限为私有

//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名
class Circle
{
public:  //访问权限  公共的权限
	//属性
	int m_r;//半径
	//行为
	//获取到圆的周长
	double calculateZC()
	{
		//2 * pi  * r
		//获取圆的周长
		return  2 * PI * m_r;
	}

    //构造函数
	Circle()
	{
		cout << "Person的构造函数调用" << endl;
	}

    //拷贝构造函数
	Circle(const Circle& c) {
		m_r = c.m_r;
		cout << "拷贝构造函数!" << endl;
	}

	//析构函数
	~Circle()
	{
		cout << "Person的析构函数调用" << endl;
	}

    Circle(int _m_r)
    {
        m_r = _m_r;
    }

protected:
    //汽车  保护权限
	string m_name;

private:
    //银行卡密码  私有权限
	int m_r2;
};

int main() {
	//通过圆类，创建圆的对象
	// c1就是一个具体的圆
    // 调用无参构造函数
	Circle c1;
	c1.m_r = 10; //给圆对象的半径 进行赋值操作

    //c1.m_name = "奔驰";  //保护权限类外访问不到
	//c1.m_r2 = 123; //私有权限类外访问不到

	//2 * pi * 10 = = 62.8
	cout << "圆的周长为： " << c1.calculateZC() << endl;

    //调用有参构造函数，直接变量后面加括号
	Circle _c1(10);
	//注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
	//Circle c1();

	//2.2 显式法
	Circle c2 = Circle(10); 
    //调用拷贝构造函数，直接变量后面加括号
	Circle c3 = Circle(c2);
	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构

	//2.3 隐式转换法
	Circle c4 = 10; // Circle c4 = Circle(10); 
	Circle c5 = c4; // Circle c5 = Circle(c4); 

	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
	//Circle c5(c4);

	return 0;
}