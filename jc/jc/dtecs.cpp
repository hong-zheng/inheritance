#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


// �̳��뾲̬��Ա
// ���ඨ���static��̬��Ա���������̳���ϵ����ֻ��һ�������ĳ�Ա������ʤ�����ٸ����࣬��ֻ��һ��static��Աʵ��
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
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a;
//	// ��˴˴��ķ��ʲ��Ϸ�
//	//a._name = "perter";
//
//	// ��Ҫ��ʽ��������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
//	// ����һ��ʵ��������_name�϶����Ϻ��߼�
//	a.Student::_name = "zheng";
//	a.Teacher::_name = "hong";
//
//	int b;
//}

// ����̳п��Խ�����μ̳еĶ����Ժ�������������⡣��
// ������ļ̳й�ϵ����Student��Teacher�ļ̳�Personʱʹ������̳У����ɽ�����⡣��Ҫע����ǣ�����̳в�Ҫ�������ط�ȥʹ��

//class Person{
//public:
//	string _name;
//};
//class Student :virtual public Person{
//protected:
//	int _num;
//};
//// ����̳о������ܹ�������μ̳��е�������������
//class Teacher :virtual public Person{
//protected:
//	int _id;
//};
//class Assistant :public Student, public Teacher{
//protected:
//	string _majorCourse;
//};
//void test(){
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a;
//	// ��˴˴��ķ��ʲ��Ϸ�
//	//a._name = "perter";
//
//	// ��Ҫ��ʽ��������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
//	// ����һ��ʵ��������_name�϶����Ϻ��߼�
//	a.Student::_name = "zheng";
//	a.Teacher::_name = "hong";
//
//	// ʹ�ùؼ��� virtual �Ի���ʵ������̳�֮��Ϳ���ֱ�ӷ��� _name
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

// Car �� BMW 
// Car �� Benz
// �������ֹ�ϵ�����ǵĹ�ϵ
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
//// Tire �� Car�͹������еĹ�ϵ
//class newCar{
//protected:
//	string _colour = "white";
//	Tire _t;
//};

// ��̬���ڲ�ͬ�̳й�ϵ�ĵ������ȥ����ͬһ�����������˲�ͬ����Ϊ������Student�̳���Person��Person������Ʊ��ȫ�ۣ�Student������Ʊ��ۡ�
// �ڼ̳��й��ɶ�̬��Ҫ��������������
//	1������ͨ�������ָ������õ����麯����
//  2�������õĺ����������麯���������������Ի�����麯��������д
//class Person{
//public:
//	virtual void BuyTicket(){
//		cout << "��Ʊȫ��" << endl;
//	}
//};
//
//class Student :public Person{
//public:
//	// �Ի�����麯������
//	virtual void BuyTicket(){
//		cout << "��Ʊ���" << endl;
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

//�麯��
// ����virtual���ε����Ա������Ϊ�麯��
//class Person{
//public:
//	virtual void print(){
//		cout << "print()" << endl;
//	}
//};

// �麯����д
// �麯����д�����ǣ�������������һ����������ȥ����ͬ���麯�����������ຯ��������麯���ķ���ֵ���ͺ����������б���ȫ��ͬ������������麯����д�˻�����麯��
//

// �麯����д������������
// �̳�
// virtual���ε��麯��
// ָ��������õ���
// �������������⣺Э��/������������д

// 1��Э�䣬�������������麯������ֵ���Ͳ�ͬ
// ��������д�����麯��ʱ������麯������ֵ���Ͳ�ͬ���������麯�����ػ�������ָ��������ã��������麯����������������ָ��������ã���ΪЭ��
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

// 2��������������д���������������������������ֲ�ͬ��
// ����������������Ϊ�麯������ʱ��������������ֻҪ���壬�����Ƿ��virtual�ؼ��֣�����������������������д����Ȼ�����������������������ֲ�ͬ����Ȼ��������ͨ����������Υ������д�Ĺ���ʵ��Ȼ������������Ϊ�����������������������������⴦���������������������ͳһ�����destructor
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
// // ֻ��������Student������������д��Person�����������������delete��������������������ܹ��ɶ�̬�����ܱ�֤p1,p2ָ��Ķ�����ȷ�ĵ�����������
//void test(){
//	Person * p1 = new Person;
//	Person* p2 = new Student;
//	delete p1;
//	delete p2;
//}


// overrirde �� final
// C++���ں�����д��Ҫ��Ƚ��ϸ񣬵�����Щ�����������������ܻᵼ�º�������ĸ����д�����޷��������أ�����Щ�����ڱ������䲻�ᱨ���ģ�ֻ���ڳ�������ʱû�еõ�Ԥ�ڽ������debug��ò���ʧ�����C++11�ṩ��override��final�����ؼ��֣����԰����û�����Ƿ�����д

// 1��final : �����麯������ʾ���麯�������ٱ��̳�
// ����final�ؼ������ε�ʱ��ֻ��Ҫʹ�ò���Ҫʵ��
//class Car{
//public:
//	virtual void printName() final{
//		cout << _name << endl;
//	}
//
//	// override : ����������麯���Ƿ���д�˻���ĳ���麯�������û����д���뱨��
//	virtual void Drive(){
//
//	}
//public:
//	string _name;
//};
//class Benz :public Car{
//public:
//	// �˴����޷���д�ؼ������εĺ��� printName
//	//virtual void printName(){
//
//	//}
//
//	// ��鱾�����Ƿ���д�˻����е�ĳ���麯����������д���뱨��
//	virtual void Drive() override{
//		cout << "Benz-�ʺ�" << endl;
//	}
//};


/*
���أ�����������ͬһ�����򣬺�����/������ͬ

��д(���ǣ������������ֱ��ڻ�����������������
������/����/����ֵ��������ͬ��Э�����⣩
���������������麯��

�ض��壨���أ���
���������ֱ��ڻ�����������������
��������ͬ
��  ����   ������������  ͬ������  ��������д���ǴӶ���
*/

// ������
// ������麯������д��=0�����������Ϊ���麯�����������麯��������������ࣨҲ�нӿ��ࣩ�������಻��ʵ����
// �����಻��ʵ����������
// ������̳к�Ҳ����ʵ����������ֻ����д���麯�������������ʵ����������
// ���麯���淶�������������д�����ⴿ�麯���������˽ӿڼ̳�

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


// �ӿڼ̳к�ʵ�ּ̳�
// ��ͨ�����ļ̳���һ��ʵ�ּ̳У�������̳��˻��ຯ��������ʹ�ú������̳е��Ǻ�����ʵ�֡�
// �麯���ļ̳���һ�ֽӿڼ̳У�������̳е��ǻ����麯�� �Ľӿڣ�Ŀ����Ϊ����д����ɶ�̬���̳е��ǽӿڡ�
// ���������ʵ�ֶ�̬����Ҫ�Ѻ���������麯��

// ��̬��ԭ��
// ������ģ���ǰ4���ֽ� ������ָ�� _vfptr �� ���麯�������_vfptrָ��������

// ���Թ۲쵽��Base�Ķ�����8Bytes������һ��_vfptr���ڶ����ǰ�棨ע����Щƽ̨���ܻ�ŵ�����������,��VS���Ƿ��ڶ����ǰ4���ֽڣ����ƽ̨�йأ�
// �����е����ָ�����ǽ����麯����ָ�루v��ʾvirtual��f��ʾ����function)
// һ�������麯��������������һ���麯����ָ�룬һi��λ�麯���ĵ�ַ��Ҫ����ŵ��麯������
// �麯����Ҳ������


// ���������d��Ҳ��һ�����ָ�룬d�����������ֹ��ɣ�һ�����Ǹ���̳������ĳ�Ա�����ָ��Ҳ���Ǵ��ڲ��ֵģ���һ�������Լ��ĳ�Ա
// ����b�����������d��������ǲ�һ�µģ�����fun1�����д������d�����ָ���д������д��Derive::fun1()�������麯������дҲ�и��ǣ����Ǿ���ָ������麯���ĸ��ǡ���д���﷨�Ľз���������ԭ��Ľз���
// ��һ��fun2�̳����������麯�������ԷŽ������fun3Ҳ�̳������ˣ����ǲ����麯�������Բ���Ž����
// �麯��������һ�����麯��ָ���ָ�����飬�������������һ��nullptr��־����
// �ܽ����������������γɣ��Ƚ������е�������ݿ���һ�ݵ�����������У������������д�˻�����ĳ���麯�������������Լ����麯����������л�����麯�����������Լ����������麯���������������е������������ӵ��������������
// ��������麯��ָ�룬�������麯����
// �麯������ͨ����һ�������Ǵ���ڴ���Σ�ֻ������ָ���ִ���������
// ��������д�Ĳ��������������ָ��
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
		cout << "��Ʊȫ��" << endl;
	}
};
class Student :public Person{
public:
	virtual void BuyTicket(){
		cout << "��Ʊ���" << endl;
	}
};
void Fun(Person& p){
	p.BuyTicket();
}

void fun(Person* p){
	p->BuyTicket();


}
void test(){

	// ʵ�ֳ��˲�ͬ�Ķ���ȥ���ͬһ��Ϊʱ��չ�ֳ���ͬ����̬
	// �ﵽ��̬���麯������+����ָ������õ����麯��
	// ��̬��ʵ�壺ͨ������������������̬���������Ժ󣬲����ڱ���ʱȷ���ģ������������Ժ󵽶�����ȥ�ҵġ��������̬�ĺ�������ʱ����ʱȷ�Ϻõġ�



	// pָ��Ķ�����Mike��p->BuyTicket��mike��������ҵ��麯����Person::BuyTicket
	Person Mike;
	Fun(Mike);
	// p�д����Mike�����ָ�룬��p�Ƶ�eax��
	//	001940DE mov eax, dword ptr[p]
	// [eax]����ȡeaxֵָ������ݣ������൱�ڰ�Mike�����ǰ�ĸ��ֽڣ����ָ�룩�Ƶ���edx
	//		001940E1 mov edx, dword ptr[eax]
	// [edx]����ȡedxֵָ������ݣ������൱�ڰ�����е�ͷϴ���ֽڴ���麯��ָ���Ƶ���eax��
	//		00B823EE mov eax, dword ptr[edx]
	// call eax �д��麯����ָ�롣������Կ��������̬�ĵ��ã������ڱ���ʱȷ���ģ������������Ժ󵽶�����ȥ�ҵ�
	//		001940EA call eax
	//		00ͷ1940EC cmp esi, esp
	// pָ���Jackʱ��p->BuyTicket��Jack��������ҵ��麯����Student::BuyTicket
	Student Jack;
	Fun(Jack);

	Mike.BuyTicket();
	//����BuyTicket��Ȼ���麯��,����Mike�Ƕ��󣬲������̬������������������ͨ�����ĵ���ת���ɵ�ַʱ�����ڱ���ʱ���Ѿ��ӷ��ű�ȷ���˺����ĵ�ַ��ֱ��call��ַ
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
//// ��Ԫ��ϵ���ܼ̳У�Ҳ����˵������Ԫ���ܷ�������˽�г�Ա�ͱ�����Ա
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
//	// ���ɷ���
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
//		:Person(s) //��Ƭ����
//		, _num(s._num)
//	{
//		cout << _name << " Student(const Student& s)";
//	}
//
//	Student& operator=(const Student& s){
//		cout << _name << " Student& operator=(const Student& s)" << endl;
//		if (this != &s){
//			// ��������ֵ
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

// ��Ƭ��Ϊ���õ������Լ���һ��������
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
//	// final����ĺ������ܱ���д������ʵ�ּ̳�
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
//	// override : ������д��ǿ��������д�����ĳһ���麯��
//	// ����������麯���Ƿ���д�˻���ĳ���麯�������û����д���뱨��
//	// ���ֽӿڼ̳�
//	virtual void Drive() override {}
//
//	// 
//	virtual void print() override{
//
//	}
//};
//
//// ������:�������麯������ ��Ϊ�����ࣻ�����಻��ʵ����
//// �����಻��ʵ��������
//// ������Java���еĽӿ�
//// ���麯���������ں�������������Ϊ��ʵ�ֶ�̬
//// ���壺ʵ�ֶ�̬
//class A{
//public:
//// ���麯����û�к�������麯��
//	virtual void fun() = 0;
//};
//
////
//class B :public A{
//public:
//	virtual void fun(){
//		cout << "����˴���ʵ����ȻΪ������" << endl;
//		cout << "��̬������ʵ��" << endl;
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
//	// ��Ƭ��������̬����ָ��ʵ��
//	A* pa = new B;
//	pa->fun();
//}

//class Car{
//public:
//	virtual void Drive(){}
//};
//void test(){
//	//	4 : �˴�֤��������ν�Ŀ��࣬��Car���г�Ա����
//	// û�г�Ա��������� ��ģ���СΪ1
//	// �˴���Ψһ��Ա��һ��_vfptr:�麯����ָ�룬��СΪ4
//	// ����һ�����صı������麯����ָ��
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
//	// ��д�����ǣ������е��麯�������麯�����о��滻��ǰ���麯�����滻Ϊ������麯��
//	// ��������д��������з����仯����ͨ����������������
//	// �����ź���ָ�������
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
//// ���������ָ��
//// ���庯��ָ�룺 void ����()
//typedef void(*vfPtr)();
//
//void doVF(vfPtr* vftable){
//	// nullptr : ����
//	for (int i = 0; vftable[i]; ++i){
//		//vftable[i]();
//
//		// ��ȡ��ǰ���λ�õĺ���ָ��
//		vfPtr func = vftable[i];
//		// ִ��ָ��ĺ���
//		func();
//	}
//}
//void test(){
//	// ���ָ����ڶ����ͷ�ĸ��ֽ�
//	Base b;
//	Derive d;
//	// ������d�е������麯����ȡ����������һ��
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
//	cout << " ����ַ>" << vTable << endl;
//	for (int i = 0; vTable[i]; ++i)
//	{
//		printf(" ��%d���麯����ַ :0X%x,->", i, vTable[i]);
//		vTable[i]();
//	}
//	cout << endl;
//
//	//������������еĵڶ��������Ҫ����ַƫ��
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
//	// final ���������������ܱ���д������ʵ�ּ̳У�����Ϊ����д����Ϊ��ֱ��Ӧ��
//	//virtual void Drive() final{ cout << "ϴˢˢ��ϴˢˢ" << endl; }
//
//	virtual void Drive(){ cout << "ϴˢˢ��ϴˢˢ" << endl; }
//
//};
//
//class Benz :public Car{
//public:
//	//  override:ǿ��������д�����ĳһ���麯�����ӿڼ̳У������˽ӿڼ̳�
//	virtual void Drive() override{ cout << "Benz" << endl; }
//	// �˴��޷���дfinal������final�޷�������Ķ�����д
//	// �̳�final������Ϊ��ֱ��Ӧ�ã�����Ϊ����д
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
//// �����ࣺ�������麯�����࣬�������ǲ������ģ���˲���ʵ����
//// �����಻��ʵ��������-->������Java���еĽӿ�
//// ��Ŀ�ľ���Ϊ��ʵ�ֶ�̬������ʵ���������ǻ����ĸ���
//class A{
//public:
//	// ���麯����û�к�������麯��
//	virtual void fun() = 0;
//};
//// ����̳г����࣬����ʵ��������Ҳ���Ϊһ�������࣬����������ȻҲ�Ǵ��麯��
//class B :public A{
//public:
//	virtual void fun(){
//		cout << "������̳д��麯��  B::fun()" << endl;
//	}
//};
//
//void test1(){
//	B b;
//	B* pb = &b;
//	b.fun();
//	pb->fun();
//}
// ��Ա������ռ�ռ��С
//class Car{
//public:
//	// final ���������������ܱ���д������ʵ�ּ̳У�����Ϊ����д����Ϊ��ֱ��Ӧ��
//	//virtual void Drive() final{ cout << "ϴˢˢ��ϴˢˢ" << endl; }
//
//	// ��Ϊ�գ�_vfptr���麯����ָ��,4�ֽڣ���˲�Ϊ��
//	virtual void Drive(){ cout << "ϴˢˢ��ϴˢˢ" << endl; }
//	// ����������Ա�������麯����ָ��
//};
//void test2(){
//	cout << sizeof(Car) << endl;
//}

// ������෢����д�����麯�����п��Ե�������
// �������麯��ָ�������
//		
//int main(void){
//	//test2();
//	//test1();
//	//test();
//	system("pause");
//	return 0;
//}