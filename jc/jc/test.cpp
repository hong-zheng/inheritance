//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person{
//public:
//	Person(const char* name = "zheng"){
//
//	}
//protected:
//	string _name;
//};
//
//
//class Date{
//public:
//	Date(int y = 1, int m = 1, int d = 1)
//	{
//		_year = y;
//		_month = m;
//		_day = d;
//	}
//
//	// 判断两个日期是否相同
//	// 自定义类型的判等等内容需要自己定义
//	// 运算符重载函数
//	// 函数名特殊：定义和使用方式和普通函数一样
//	// 增强可读性
//	// 返回值 定义方式： operator + 重载运算符 (参数列表){}
//	//注意：语法不支持的运算符不可用，不能自创运算符
//	//			操作数不能都为内置类型，至少其中一个为内置类型
//	//	运算符重载函数如果是成员函数，则参数的个数比运算符需要的个数少一个
//	// 这里编译器会传入this指针作为第一个参数
//	// ( Date* const this , const Date& d) ：这是完整的参数列表
//	// 底层转为接口：bool operator==(Date* const this,const Date& d){}
//	// this指针始终占用运算符操作数的第一个位置，
//	bool operator==(const Date& d){
//		return this->_year == d._year
//			&& this->_month == d._month 
//			&& this->_day == d._day;
//	}
////private:
//
//	// 赋值运算符重载函数
//	// d1 = d2;
//	// 修改已经存在对象的内容，不是取创建新的对象
//	// 要满足连续赋值就要返回值为：类类型& 
//	// 如果返回值为值不为引用会产生拷贝构造，不高效
//	// 此函数不写，编译器也会默认生成
////默认生成的仍然为字节拷贝，即浅拷贝，如果当前类中有资源则必须显式定义赋值运算符重载函数，完成深拷贝
//	Date& operator=(const Date& d){
//		// 判断是不是自赋，不是自赋才走赋值逻辑，否则就不用
//		if (this != &d){
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		cout << "Date& operator=(const Date& d)" << endl;
//		// 返回当前调用此函数的对象本身，此时就可以进行连续赋值
//		return *this;
//	}
//
//	// 拷贝构造
//	Date(const Date& d){
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//public:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// 普通的运算符重载函数，参数的个数和运算符的个数一致
//// 成员重载运算符函数，参数的个数比运算符需要运算的个数少一个 
//// 由于传了this指针 ： 类类型* const this ，例如 Date* const this
//// this是不可变的实例化对象
//bool operator==(const Date& d1, const Date& d2){
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//// 自定义类型的输出运算符，重载
//// 输出运算符重载函数
//ostream& operator<<(ostream& _cout , const Date& date){
//	_cout << date._year << "-" << date._month << "-" << date._day << endl;
//	return _cout;
//}
//void test2(){
//	Date d(23, 3, 3);
//	//Date d1(d);
//	//cout << (d == d1);
//	//cout << endl;
//	//cout << d;
//	//cout << d.operator==(d1) << endl;
//
//	Date d2(2020, 2, 2);
//
//	// = 调用：如果对象都存在，调用赋值运算符重载函数
//	// 左边对象不存在调用拷贝构造
//	d = d2;
//	Date d3(1998, 9, 21);
//	d.operator=(d3);
//	cout << d;
//	cout << d2;
//	// 连续赋值，从右向左
//	d = d2 = d3;
//	cout << d << endl;
//
//	// 原因：由于d4根本不存在，用d3对象创建d4对象，只是用d3创建d4对象，因此调用构造函数，并不是赋值运算符
//	//Date d4 = d3;//此处调用拷贝构造函数，并非赋值运算符重载函数
//
//	Date d4;
//	d4 = d3;
//
//	Date d5(d4); //调用拷贝构造创建一个新的对象
//}
//int mainss(){
//	test2();
//	system("pause");
//	return 0;
//}
////
////class Person{
////public:
////	void print(){
////		cout << "name:" << _name << endl;
////		cout << "age:" << _age << endl;
////	}
////protected:
////	string _name="zheng";
////	int _age = 12;
////};
/////*
////继承父类的Person的成员（成员函数+成员变量）
////都会变成子类的一部分
////这里体现了Student和Teacher复用了Person的成员
////*/
////
////// Student:子类，派生类
////// Person:基类，父类
////class Student :public Person{
////protected:
////	int _stuid;
////};
////
////class Teacher :public Person{
////protected:
////	int _jobid;
////};
////void test(){
////	Student s;
////	Teacher t;
////
////	s.print();
////	t.print();
////}
//
//
////class Person{
////protected:
////	string _name;
////	string _sex;
////	int _age;
////};
////
////class Student :public Person{
////public:
////	int _No;
////	//ostream& operator<<(ostream& cout){
////	//	cout << _name << ":" << _sex << ":" << _age << ":" << _No << endl;
////	//	return cout;
////	//}
////};
////
////void test(){
////	Student sobj;
////	
////	//  1、子类对象可以赋值给父类对象/指针/引用
////	Person pobj = sobj;
////	Person* pp = &sobj;
////	Person&rp = sobj;
////
////	// 2、基类对象不能赋值给派生类对象
////	//sobj = pobj;
////
////	// 3、基类的指针可以通过强制类型转换赋值给派生类指针
////	pp = &sobj;
////	Student* ps1 = (Student*)pp;
////	ps1->_No = 10;
////
////	pp = &pobj;
////	Student* ps2 = (Student*)pp;
////	ps2->_No = 10;
////
////}
//class A{
//public:
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//class Date{
//public:
//	Date(int y = 1, int m = 1, int d = 1)
//	{
//		_year = y;
//		_month = m;
//		_day = d;
//	}
//
//	// 析构函数：清理资源，不是销毁对象，在对象声明周期结束时，编译器自动调用
//	// 如果没有资源需要清理，可以不用显式写析构函数，编译器自动生成一个默认析构函数
//	// 即使不显式定义析构函数，系统生成的默认析构函数也会调用自定义类型的析构函数
//	//~Date()
//	//{
//	//	// 自动调用自定义类型的析构函数，完成自定义类型成员的清理工作
//	//	cout << "~Date()" << endl;
//	//}
//
//	//拷贝构造函数：构造函数的重载形式
//	// 也是在创建对象时自动调用
//	// 调用场景：用一个已经存在的对象创建新的对象
//	// 创建新对象和当前内容相同
//	
//	// 此处需要传引用类型的参数，否则会引发无穷递归
//	// 一直处于传参的过程，并没有执行函数体，至少得给一个引用
//
//	//参数类型必须是引用，否则会引发无穷递归，编译器语法检查
//	// 编译器默认生成的拷贝构造为字节拷贝，或者叫浅拷贝，只拷贝对象模型中的内容，不拷贝资源
//	//Date(const Date& d){
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//	A _a; // 
//};
//
////class String{
////public:
////	String(const char* str = "zheng"){
////		_str = (char*)malloc(strlen(str));
////		strcpy(_str, str);
////	}
////	如果有资源，必须显式定义拷贝构造，完成深拷贝
////	~String()
////	{
////		if (_str){
////			free(_str);
////			_str = nullptr;
////		}
////	}
////private:
////	char* _str;
////};
//void test(){
//	Date d;
//	Date cpy(d);
//
//	// 当拷贝构造加了const的时候就可以用匿名对象实现拷贝构造函数
//	
//	// 匿名对象：具备常性
//	Date cpy1(Date());
//
//	// 省略创建匿名对象的过程
//	// 优化：直接调用构造函数创建cpy2，不优化：调用构造创建匿名对象
//	// +拷贝构造
//	Date cpy2(Date(2020, 1, 1));
//}
//
//volatile int i = 0;
//
//void test1(){
//	// 常量：编译器自动认为不会改变，因此从缓冲区或者寄存器中读取
//	// 不用再放在内存中
//	//const int a = 10;
//	//int* pa = (int*)&a;
//	//*pa = 20;
//	//cout << a << endl;   // 10 
//	//cout << *pa << endl; // 20
//
//	// volatile : 每一次读a都从内存中去读，而不是在缓冲中去读
//	// 在多线程中应用得比较多
//	const volatile int a = 10;
//	int* pa = (int*)&a;
//	*pa = 20;
//	cout << a << endl;   // 10 
//	cout << *pa << endl; // 20
//}
//int main(){
//	//test1();
//	test();
//	system("pause");
//	return 0;
//}