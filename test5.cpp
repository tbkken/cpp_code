#include <iostream>
using namespace std;
 
class Box
{
   public:
      Box() { 
         cout << "调用构造函数！" <<endl; 
      }
      ~Box() { 
         cout << "调用析构函数！" <<endl; 
      }
};
 
int main( )
{
   Box* myBoxArray = new Box[4];
 
   delete [] myBoxArray; // 删除数组

   // 这样子不会调用构造函数
   Box ** myBoxArray2 = new Box * [4];
   for(int i=0; i<4; i++) {
       cout << "单独初始化数组中的对象" << endl;
       myBoxArray2[i] = new Box();
   }

   for(int i=0; i<4; i++) {
       cout << "单独删除数组中的对象" << endl;
       delete myBoxArray2[i];
   }

   delete [] myBoxArray2;



   int foreach = 6000;
   for(int i=0; i<10000; i+=foreach) {
      for(int j=0; j<foreach; j++) {
         cout << i+j << endl;
      }
   }
   return 0;
}