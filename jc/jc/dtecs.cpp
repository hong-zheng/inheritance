#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


// 继承与静态成员
// 基类定义的static静态成员，则整个继承体系里面只有一个这样的成员。无论胜出多少个子类，都只有一个static成员实例
//class  Person{
//public:
//	Person(){ ++_count; }
//protected:
//	string _name;
//public:
//	static int _count;
//};
//int Person::_count = 0;
//class Student :public Person{
//protected:
//	int _stuNum;
//};
//class Graduate :public Student {
//protected:
//	string _seminarCourse;
//};
//void test(){
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << Person::_count << endl;
//}

//class Person{
//public:
//	string _name;
//};
//class Student :public Person{
//protected:
//	int _num;
//};
//class Teacher :public Person{
//protected:
//	int _id;
//};
//class Assistant :public Student, public Teacher{
//protected:
//	string _majorCourse;
//};
//void test(){
//	// 这样会有二义性无法明确知道访问的是哪一个
//	Assistant a;
//	// 因此此处的访问不合法
//	//a._name = "perter";
//
//	// 需要显式定义访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
//	// 但是一个实例有两个_name肯定不合乎逻辑
//	a.Student::_name = "zheng";
//	a.Teacher::_name = "hong";
//
//	int b;
//}

// 虚拟继承可以解决菱形继承的二义性和数据冗余的问题。。
// 如上面的继承关系，在Student和Teacher的继承Person时使用虚拟继承，即可解决问题。需要注意的是，虚拟继承不要在其他地方去使用

//class Person{
//public:
//	string _name;
//};
//class Student :virtual public Person{
//protected:
//	int _num;
//};
//// 虚拟继承就正好能够解决菱形继承中的数据冗余问题
//class Teacher :virtual public Person{
//protected:
//	int _id;
//};
//class Assistant :public Student, public Teacher{
//protected:
//	string _majorCourse;
//};
//void test(){
//	// 这样会有二义性无法明确知道访问的是哪一个
//	Assistant a;
//	// 因此此处的访问不合法
//	//a._name = "perter";
//
//	// 需要显式定义访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
//	// 但是一个实例有两个_name肯定不合乎逻辑
//	a.Student::_name = "zheng";
//	a.Teacher::_name = "hong";
//
//	// 使用关键字 virtual 对基类实现虚拟继承之后就可以直接访问 _name
//	a._name = "hongzheng";
//
//	int b;
//}

//class A{
//public:
//	int _a;
//};
//class B :virtual public A{
//public:
//	int _b;
//};
//class C :virtual public A{
//public:
//	int _c;
//};
//class D :public B, public C{
//public:
//	int _d;
//};
//void test(){
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//}

// Car 和 BMW 
// Car 和 Benz
// 以上两种关系构成是的关系
//class Car{
//protected:
//	string _colour = "white";
//	string _num = "AAAA";
//};
//class BMW :public Car{
//public:
//	void Drive(){
//		cout << "Drive()" << endl;
//	}
//};
//class Benz :public Car{
//public:
//	void Drive(){
//		cout << "Benz" << endl;
//	}
//};
//
//class Tire{
//protected:
//	string _brand = "Michelin";
//	size_t _size = 17;
//};
//
//// Tire 和 Car就构成了有的关系
//class newCar{
//protected:
//	string _colour = "white";
//	Tire _t;
//};

// 多态是在不同继承关系的的类对象，去调用同一函数，产生了不同的行为，比如Student继承了Person。Person对象买票买全价，Student对象买票半价。
// 在继承中构成多态需要以下两个条件：
//	1、必须通过基类的指针或引用调用虚函数；
//  2、被调用的函数必须是虚函数，且派生类必须对基类的虚函数进行重写
//class Person{
//public:
//	virtual void BuyTicket(){
//		cout << "买票全价" << endl;
//	}
//};
//
//class Student :public Person{
//public:
//	// 对基类的虚函数覆盖
//	virtual void BuyTicket(){
//		cout << "买票半价" << endl;
//	}
//};
//
//void fun(Person& p){
//	p.BuyTicket();
//}
//void test(){
//	Person m;
//	fun(m);
//	Student s;
//	fun(s);
//}

//虚函数
// 即被virtual修饰的类成员函数称为虚函数
//class Person{
//public:
//	virtual void print(){
//		cout << "print()" << endl;
//	}
//};

// 虚函数重写
// 虚函数重写（覆盖），派生类中有一个跟基类玩去哪相同的虚函数（即派生类函数与基类虚函数的返回值类型函数名参数列表完全相同），称子类的虚函数重写了基类的虚函数
//

// 虚函数重写满足三大条件
// 继承
// virtual修饰的虚函数
// 指针或者引用调用
// 但是有两个例外：协变/析构函数的重写

// 1、协变，基类与派生类虚函数返回值类型不同
// 派生类重写基类虚函数时与基类虚函数返回值类型不同。即基类虚函数返回基类对象的指针或者引用，派生类虚函数返回派生类对象的指针或者引用，称为协变
//class A{
//};
//class B :public A{};
//
//class Person{
//public:
//	virtual A* f() {
//		return new A;
//	}
//};
//class Student :public Person{
//public:
//	//virtual B* f(){
//	//	return new B;
//	//}
//	B* f(){
//		return new B;
//	}
//};

// 2、析构函数的重写（基类与派生类析构函数的名字不同）
// 如果基类的析构函数为虚函数，此时派生类析构函数只要定义，无论是否加virtual关键字，都与基类的析构函数构成重写，虽然基类与派生类析构函数名字不同。虽然函数名不通过，看起来违背了重写的规则，实则不然，这里可以理解为编译器对析构函数的名称做了特殊处理，编译后析构函数的名称统一处理成destructor
//class Person{
//public:
//	Person(){
//		cout << "Person()" << endl;
//	}
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//class Student :public Person{
//public:
//	Student(){
//		cout << "Student()" << endl;
//	}
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//};
// // 只有派生类Student的析构函数重写了Person的析构函数，下面的delete对象调用析构函数，才能构成多态，才能保证p1,p2指向的对象正确的调用析构函数
//void test(){
//	Person * p1 = new Person;
//	Person* p2 = new Student;
//	delete p1;
//	delete p2;
//}


// overrirde 和 final
// C++对于函数重写的要求比较严格，但是有些情况下由于疏忽，可能会导致函数名字母次序写反而无法构成重载，而这些错误在编译器间不会报出的，只有在程序运行时没有得到预期结果才来debug会得不偿失，因此C++11提供了override和final两个关键字，可以帮助用户检测是否有重写

// 1、final : 修饰虚函数，表示该虚函数不能再被继承
// 当用final关键字修饰的时候，只需要使用不需要实现
//class Car{
//public:
//	virtual void printName() final{
//		cout << _name << endl;
//	}
//
//	// override : 检查派生类虚函数是否重写了基类某个虚函数，如果没有重写编译报错
//	virtual void Drive(){
//
//	}
//public:
//	string _name;
//};
//class Benz :public Car{
//public:
//	// 此处就无法重写关键字修饰的函数 printName
//	//virtual void printName(){
//
//	//}
//
//	// 检查本函数是否重写了基类中的某个虚函数，否则重写编译报错
//	virtual void Drive() override{
//		cout << "Benz-适合" << endl;
//	}
//};


/*
重载：两个函数在同一作用域，函数名/参数相同

重写(覆盖）：两个函数分别在基类和派生类的作用域
函数名/参数/返回值都必须相同（协变例外）
两个函数必须是虚函数

重定义（隐藏）；
两个函数分别在基类和派生类的作用域
函数名相同
且  两个   基类和派生类的  同名函数  不构成重写就是从定义
*/

// 抽象类
// 概念：在虚函数后面写上=0，则这个函数为纯虚函数。包含纯虚函数的类叫做抽象类（也叫接口类），抽象类不能实例化
// 抽象类不能实例化出对象
// 派生类继承后也不能实例化出对象，只有重写纯虚函数，派生类才能实例化出对象。
// 纯虚函数规范了派生类必须重写，另外纯虚函数更体现了接口继承

//class Car{
//public:
//	virtual void Drive() = 0;
//};
//
//class Benz :public Car{
//public:
//	virtual  void Drive(){
//		cout << "Benz" << endl;
//	}
//};
//
//class BMW :public  Car{
//public:
//	virtual void Drive(){
//		cout << "BMW" << endl;
//	}
//};
//
//void test(){
//	Car* pBenz = new Benz;
//	pBenz->Drive();
//
//	Car* pBMW = new BMW;
//	pBMW->Drive();
//}


// 接口继承和实现继承
// 普通函数的继承是一种实现继承，派生类继承了基类函数，可以使用函数，继承的是函数的实现。
// 虚函数的继承是一种接口继承，派生类继承的是基类虚函数 的接口，目的是为了重写，达成多态，继承的是接口。
// 所以如果不实现多态，不要把函数定义成虚函数

// 多态的原理
// 利用类模板的前4个字节 存放虚表指针 _vfptr ， 将虚函数存放在_vfptr指向的虚表中

// 可以观察到类Base的对象有8Bytes，还多一个_vfptr放在对象的前面（注意有些平台可能会放到对象的最后面,在VS中是放在对象的前4个字节，这和平台有关）
// 对象中的这个指针我们叫做虚函数表指针（v表示virtual，f表示函数function)
// 一个含有虚函数的类中至少有一个虚函数表指针，一i那位虚函数的地址需要被存放到虚函数表中
// 虚函数表也简称虚表


// 派生类对象d中也有一个虚表指针，d对象由两部分构成，一部分是父类继承下来的成员，虚表指针也就是存在部分的，另一部分是自己的成员
// 基类b对象和派生类d对象虚表是不一致的，这里fun1完成重写，所以d的虚表指针中存的是重写的Derive::fun1()，所以虚函数的重写也叫覆盖，覆盖就是指虚表中虚函数的覆盖。重写是语法的叫法，覆盖是原理的叫法。
// 另一个fun2继承下来后是虚函数，所以放进了虚表，fun3也继承下来了，但是不是虚函数，所以不会放进虚表‘
// 虚函数表本质是一个存虚函数指针的指针数组，这个数组最后放了一个nullptr标志结束
// 总结以下派生类的虚表形成：先将基类中的虚表内容拷贝一份到派生类虚表中；如果派生类重写了基类中某个虚函数，用派生类自己的虚函数覆盖虚表中基类的虚函数；派生类自己此年增的虚函数按其在派生类中的声明次序增加到派生类虚表的最后；
// 虚表存的是虚函数指针，而不是虚函数；
// 虚函数和普通函数一样，都是存放在代码段，只是它的指针又存放在虚表中
// 另外对象中存的不是虚表，村的是虚表指针
//class Base{
//public:
//	virtual void fun1(){
//		cout << "fun1()" << endl;
//	}
//	virtual void fun2(){
//		cout << "fun2()" << endl;
//	}
//	void fun3(){
//		cout << "fun3()" << endl;
//	}
//protected:
//	int _b = 1;
//};
//class Derive :public Base{
//public:
//	virtual void fun1(){
//		cout << "Derive::fun1()" << endl;
//	}
//private:
//	int _d = 2;
//};
//void test(){
//	Base b;
//	Derive d;
//	cout << sizeof(Base) << endl;
//}

class Person{
public:
	virtual void BuyTicket(){
		cout << "买票全价" << endl;
	}
};
class Student :public Person{
public:
	virtual void BuyTicket(){
		cout << "买票半价" << endl;
	}
};
void Fun(Person& p){
	p.BuyTicket();
}

void fun(Person* p){
	p->BuyTicket();


}
void test(){

	// 实现出了不同的对象去完成同一行为时，展现出不同的行态
	// 达到多态：虚函数覆盖+对象指针或引用调用虚函数
	// 多态看实体：通过汇编代码分析，满足多态函数调用以后，不是在编译时确定的，是运行起来以后到对象中去找的。不满足多态的函数调用时编译时确认好的。



	// p指向的对象是Mike，p->BuyTicket在mike的虚表中找到虚函数是Person::BuyTicket
	Person Mike;
	Fun(Mike);
	// p中存的是Mike对象的指针，将p移到eax中
	//	001940DE mov eax, dword ptr[p]
	// [eax]就是取eax值指向的内容，这里相当于把Mike对象的前四个字节（虚表指针）移到了edx
	//		001940E1 mov edx, dword ptr[eax]
	// [edx]就是取edx值指向的内容，这里相当于把虚表中的头洗个字节存的虚函数指针移到了eax中
	//		00B823EE mov eax, dword ptr[edx]
	// call eax 中存虚函数的指针。这里可以看出满足多态的调用，不是在编译时确定的，试运行起来以后到对象中去找的
	//		001940EA call eax
	//		00头1940EC cmp esi, esp
	// p指向的Jack时，p->BuyTicket在Jack的虚表中找到虚函数是Student::BuyTicket
	Student Jack;
	Fun(Jack);

	Mike.BuyTicket();
	//首先BuyTicket虽然是虚函数,但是Mike是对象，不满足多态条件，所以这里是普通函数的调用转换成地址时，是在编译时就已经从符号表确认了函数的地址，直接call地址
	//001345A0  lea         ecx, [Mike]
	//	001345A3  call        Person::BuyTicket(0131645h)

	Jack.BuyTicket();
	//009745A8  lea         ecx, [Jack]
	//	009745AB  call        Student::BuyTicket(097164Fh)
}
int main(){
	test();
	system("pause");
	return 0;
}
//// 友元关系不能继承，也就是说基类友元不能访问子类私有成员和保护成员
//class Student;
//class Person{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name = "fjsdaio;";
//};
//class Student:public Person{
//protected:
//	int _stuNum;
//};
//
//void Display(const Person& p, const Student& s){
//	cout << p._name << endl;
//	// 不可访问
//	//cout << s._stuNum << endl;
//}
//int main(){
//	Person p;
//	Student s;
//	Display(p, s);
//	system("pause");
//	return 0;
//}
//class Person{
//
//public:
//	Person(const char* name = "peter")
//		:_name(name)
//	{
//		cout << _name<<" Person()" << endl;
//	}
//
//	Person(const Person& P)
//		:_name(P._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//	Person& operator=(const Person& p){
//		cout << "Person& operator=(const Person& p)" << endl;
//		if (this != &p){
//			_name = p._name;
//		}
//		return *this;
//	}
//	~Person()
//	{
//		cout << _name << " ~Person()" << endl;
//	}
//protected:
//	string _name;
//};
//
//class Student :public Person{
//public:
//	Student(const char* name, int num)
//		:Person(name)
//		, _num(num)
//	{
//		cout << _name << " Student()" << endl;
//	}
//
//	Student(const Student& s)
//		:Person(s) //切片操作
//		, _num(s._num)
//	{
//		cout << _name << " Student(const Student& s)";
//	}
//
//	Student& operator=(const Student& s){
//		cout << _name << " Student& operator=(const Student& s)" << endl;
//		if (this != &s){
//			// 给姓名赋值
//			Person::operator=(s);
//			_num = s._num;
//		}
//		return *this;
//	}
//	~Student()
//	{
//		cout << _name << " ~Student()" << endl;
//	}
//protected:
//	int _num;
//};
//
//void test(){
//	Student s1("json", 18);
//	Student s2(s1);
//	Student s3("tomcat", 17);
//	s1 = s2;
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}
//int main(){
//
//	char a = '1';
//	int b = atoi(&a);
//	int c = b + 1;
//	cout << c << endl;
//	system("pause");
//	return 0;
//}

// 切片是为了拿到属于自己那一部分内容
//class A{
//public:
//	int _a;	
//};
//class B{
//public:
//	int _b;
//};
//class C :public A, public B{
//public:
//	int _c;
//};
//int main(){
//	C c;
//	system("pause");
//	return 0;
//}
//class Car{
//public:
//	// final定义的函数不能被重写，体现实现继承
//	virtual void Drive(){}
//	//virtual void Drive() final{}
//
// 	virtual void print(){
//
//	}
//};
//
//class Benz :public Car{
//public:
//	// override : 必须重写，强制子类重写父类的某一个虚函数
//	// 检查派生类虚函数是否重写了基类某个虚函数，如果没有重写编译报错
//	// 体现接口继承
//	virtual void Drive() override {}
//
//	// 
//	virtual void print() override{
//
//	}
//};
//
//// 抽象类:包含纯虚函数的类 称为抽象类；抽象类不能实例化
//// 抽象类不能实例化对象
//// 类似于Java当中的接口
//// 纯虚函数就类似于函数声明，就是为了实现多态
//// 意义：实现多态
//class A{
//public:
//// 纯虚函数，没有函数体的虚函数
//	virtual void fun() = 0;
//};
//
////
//class B :public A{
//public:
//	virtual void fun(){
//		cout << "如果此处不实现仍然为抽象类" << endl;
//		cout << "多态看的是实体" << endl;
//	}
//};
//
//void test(){
//
//	B b;
//	b.fun();
//
//	B* pb = &b;
//	pb->fun();
//
//	// 切片操作：多态就是指向实体
//	A* pa = new B;
//	pa->fun();
//}

//class Car{
//public:
//	virtual void Drive(){}
//};
//void test(){
//	//	4 : 此处证明不是所谓的空类，类Car中有成员变量
//	// 没有成员变量的情况 类模板大小为1
//	// 此处的唯一成员是一个_vfptr:虚函数表指针，大小为4
//	// 包含一个隐藏的变量，虚函数表指针
//	Car c;
//	cout << sizeof(c) << endl;
//}

//class Base{
//public:
//	virtual void Fun1(){
//		cout << "Base::Fun1()" << endl;
//	}
//	virtual void Fun2(){
//		cout << "Base::Fun2()" << endl;
//	}
//	virtual void Fun3(){
//		cout << "Base::Fun3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
//class Derive :public Base{
//public:
//	virtual void fun(){ cout << "Derive:fun()" << endl; }
//
//	// 重写（覆盖）父类中的虚函数，在虚函数表中就替换当前的虚函数，替换为子类的虚函数
//	// 发生了重写会在虚表中发生变化：普通函数不会放在虚表中
//	// 虚表：存放函数指针的内容
//	virtual void Fun1(){
//		cout << "Derive::Fun1()" << endl;
//	}
//private:
//	int _d = 2;
//};
//
//class D :public Derive{
//public:
//	int _a;
//};
//void test(){
//
//	D _d;
//	Base b;
//	Derive d;
//
//	d.Fun1();
//}

//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//private:
//	int b;
//};
//
//// 定义虚表函数指针
//// 定义函数指针： void 函数()
//typedef void(*vfPtr)();
//
//void doVF(vfPtr* vftable){
//	// nullptr : 结束
//	for (int i = 0; vftable[i]; ++i){
//		//vftable[i]();
//
//		// 获取当前虚表位置的函数指针
//		vfPtr func = vftable[i];
//		// 执行指向的函数
//		func();
//	}
//}
//void test(){
//	// 虚表指针放在对象的头四个字节
//	Base b;
//	Derive d;
//	// 将对象d中的所有虚函数都取出来运行了一遍
//	vfPtr* vfptr =  (vfPtr*)(*(int*)&d);
//	doVF(vfptr);
//	//for (int i = 0; vfptr[i]; ++i){
//	//	vfptr[i]();
//	//}
//}


//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}


//class Base1 {
//public:
//	virtual void func1() { cout << "Base1::func1" << endl; }
//	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
//	int b1;
//};
//class Base2 {
//public:
//	virtual void func1() { cout << "Base2::func1" << endl; }
//	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
//	int b2;
//};
//class Derive : public Base1, public Base2 {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
//	int d1;
//};
//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i]; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		vTable[i]();
//	}
//	cout << endl;
//
//	//访问两个虚表中的第二个虚表需要做地址偏移
//}
//int main()
//{
//	Derive d;
//	VFPTR* vTableb1 = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTableb1);
//	VFPTR* vTableb2 = (VFPTR*)(*(int*)((char*)&d + sizeof(Base1)));
//	PrintVTable(vTableb2);
//	return 0;
//}


//class Person{
//public:
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//
//public:
//
//};
//
//
//class Student :public Person{
//public:
//	virtual ~Student()
//	{
//		cout << "~Studnet()" << endl;
//	}
//
//public:
//
//};



// final override

//class Car{
//public:
//	// final 定义的这个函数不能被重写，体现实现继承，不是为了重写，是为了直接应用
//	//virtual void Drive() final{ cout << "洗刷刷，洗刷刷" << endl; }
//
//	virtual void Drive(){ cout << "洗刷刷，洗刷刷" << endl; }
//
//};
//
//class Benz :public Car{
//public:
//	//  override:强制子类重写父类的某一个虚函数，接口继承，体现了接口继承
//	virtual void Drive() override{ cout << "Benz" << endl; }
//	// 此处无法重写final函数，final无法被子类的对象重写
//	// 继承final函数是为了直接应用，不是为了重写
//
//	virtual void Drive(int a = 20) { cout << "Benz" <<a<< endl; }
//};
//
//void test(){
//	Car* ptr = new Benz;
//	ptr->Drive();
//}
//
//
//// 抽象类：包含纯虚函数的类，抽象类是不完整的，因此不可实例化
//// 抽象类不能实例化对象-->类似于Java当中的接口
//// 其目的就是为了实现多态，不能实例化但是是基本的父类
//class A{
//public:
//	// 纯虚函数：没有函数体的虚函数
//	virtual void fun() = 0;
//};
//// 如果继承抽象类，不想实现则自身也会成为一个抽象类，在子类中仍然也是纯虚函数
//class B :public A{
//public:
//	virtual void fun(){
//		cout << "抽象类继承纯虚函数  B::fun()" << endl;
//	}
//};
//
//void test1(){
//	B b;
//	B* pb = &b;
//	b.fun();
//	pb->fun();
//}
// 成员函数不占空间大小
//class Car{
//public:
//	// final 定义的这个函数不能被重写，体现实现继承，不是为了重写，是为了直接应用
//	//virtual void Drive() final{ cout << "洗刷刷，洗刷刷" << endl; }
//
//	// 不为空：_vfptr：虚函数表指针,4字节，因此不为空
//	virtual void Drive(){ cout << "洗刷刷，洗刷刷" << endl; }
//	// 包含隐含成员变量：虚函数表指针
//};
//void test2(){
//	cout << sizeof(Car) << endl;
//}

// 如果子类发生重写：在虚函数表中可以得以体现
// 虚表：存放虚函数指针的数组
//		
//int main(void){
//	//test2();
//	//test1();
//	//test();
//	system("pause");
//	return 0;
//}