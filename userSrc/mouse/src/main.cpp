#include <iostream>
using namespace std;
int main() {
  system("chcp 65001");
  string a ;
  string l ;
  int x;
  printf("请输入(16个字符)姓名：");
  cin>>a;
  printf("请输入(1 - 100)等级：");
  cin>>x;
  printf("请输入(男填 N 女填 L)性别：");
  cin>>l;
cout<<"\n姓名："<<a<<"\n等级："<<x<<"\n性别："<<l<<"\n攻击："<<6000*x*0.8<<"\n防御："<<10000*x*1.2<<"\n血量："<<3000*x*2.1<<"\n蓝量："<<4000*x*3.1<<endl;
return 0 ;
}
