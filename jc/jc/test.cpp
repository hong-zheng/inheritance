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
//	// �ж����������Ƿ���ͬ
//	// �Զ������͵��еȵ�������Ҫ�Լ�����
//	// ��������غ���
//	// ���������⣺�����ʹ�÷�ʽ����ͨ����һ��
//	// ��ǿ�ɶ���
//	// ����ֵ ���巽ʽ�� operator + ��������� (�����б�){}
//	//ע�⣺�﷨��֧�ֵ�����������ã������Դ������
//	//			���������ܶ�Ϊ�������ͣ���������һ��Ϊ��������
//	//	��������غ�������ǳ�Ա������������ĸ������������Ҫ�ĸ�����һ��
//	// ����������ᴫ��thisָ����Ϊ��һ������
//	// ( Date* const this , const Date& d) �����������Ĳ����б�
//	// �ײ�תΪ�ӿڣ�bool operator==(Date* const this,const Date& d){}
//	// thisָ��ʼ��ռ��������������ĵ�һ��λ�ã�
//	bool operator==(const Date& d){
//		return this->_year == d._year
//			&& this->_month == d._month 
//			&& this->_day == d._day;
//	}
////private:
//
//	// ��ֵ��������غ���
//	// d1 = d2;
//	// �޸��Ѿ����ڶ�������ݣ�����ȡ�����µĶ���
//	// Ҫ����������ֵ��Ҫ����ֵΪ��������& 
//	// �������ֵΪֵ��Ϊ���û�����������죬����Ч
//	// �˺�����д��������Ҳ��Ĭ������
////Ĭ�����ɵ���ȻΪ�ֽڿ�������ǳ�����������ǰ��������Դ�������ʽ���帳ֵ��������غ�����������
//	Date& operator=(const Date& d){
//		// �ж��ǲ����Ը��������Ը����߸�ֵ�߼�������Ͳ���
//		if (this != &d){
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		cout << "Date& operator=(const Date& d)" << endl;
//		// ���ص�ǰ���ô˺����Ķ�������ʱ�Ϳ��Խ���������ֵ
//		return *this;
//	}
//
//	// ��������
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
//// ��ͨ����������غ����������ĸ�����������ĸ���һ��
//// ��Ա��������������������ĸ������������Ҫ����ĸ�����һ�� 
//// ���ڴ���thisָ�� �� ������* const this ������ Date* const this
//// this�ǲ��ɱ��ʵ��������
//bool operator==(const Date& d1, const Date& d2){
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//// �Զ������͵���������������
//// �����������غ���
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
//	// = ���ã�������󶼴��ڣ����ø�ֵ��������غ���
//	// ��߶��󲻴��ڵ��ÿ�������
//	d = d2;
//	Date d3(1998, 9, 21);
//	d.operator=(d3);
//	cout << d;
//	cout << d2;
//	// ������ֵ����������
//	d = d2 = d3;
//	cout << d << endl;
//
//	// ԭ������d4���������ڣ���d3���󴴽�d4����ֻ����d3����d4������˵��ù��캯���������Ǹ�ֵ�����
//	//Date d4 = d3;//�˴����ÿ������캯�������Ǹ�ֵ��������غ���
//
//	Date d4;
//	d4 = d3;
//
//	Date d5(d4); //���ÿ������촴��һ���µĶ���
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
////�̳и����Person�ĳ�Ա����Ա����+��Ա������
////�����������һ����
////����������Student��Teacher������Person�ĳ�Ա
////*/
////
////// Student:���࣬������
////// Person:���࣬����
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
////	//  1�����������Ը�ֵ���������/ָ��/����
////	Person pobj = sobj;
////	Person* pp = &sobj;
////	Person&rp = sobj;
////
////	// 2����������ܸ�ֵ�����������
////	//sobj = pobj;
////
////	// 3�������ָ�����ͨ��ǿ������ת����ֵ��������ָ��
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
//	// ����������������Դ���������ٶ����ڶ����������ڽ���ʱ���������Զ�����
//	// ���û����Դ��Ҫ�������Բ�����ʽд�����������������Զ�����һ��Ĭ����������
//	// ��ʹ����ʽ��������������ϵͳ���ɵ�Ĭ����������Ҳ������Զ������͵���������
//	//~Date()
//	//{
//	//	// �Զ������Զ������͵���������������Զ������ͳ�Ա��������
//	//	cout << "~Date()" << endl;
//	//}
//
//	//�������캯�������캯����������ʽ
//	// Ҳ���ڴ�������ʱ�Զ�����
//	// ���ó�������һ���Ѿ����ڵĶ��󴴽��µĶ���
//	// �����¶���͵�ǰ������ͬ
//	
//	// �˴���Ҫ���������͵Ĳ������������������ݹ�
//	// һֱ���ڴ��εĹ��̣���û��ִ�к����壬���ٵø�һ������
//
//	//�������ͱ��������ã��������������ݹ飬�������﷨���
//	// ������Ĭ�����ɵĿ�������Ϊ�ֽڿ��������߽�ǳ������ֻ��������ģ���е����ݣ���������Դ
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
////	�������Դ��������ʽ���忽�����죬������
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
//	// �������������const��ʱ��Ϳ�������������ʵ�ֿ������캯��
//	
//	// �������󣺾߱�����
//	Date cpy1(Date());
//
//	// ʡ�Դ�����������Ĺ���
//	// �Ż���ֱ�ӵ��ù��캯������cpy2�����Ż������ù��촴����������
//	// +��������
//	Date cpy2(Date(2020, 1, 1));
//}
//
//volatile int i = 0;
//
//void test1(){
//	// �������������Զ���Ϊ����ı䣬��˴ӻ��������߼Ĵ����ж�ȡ
//	// �����ٷ����ڴ���
//	//const int a = 10;
//	//int* pa = (int*)&a;
//	//*pa = 20;
//	//cout << a << endl;   // 10 
//	//cout << *pa << endl; // 20
//
//	// volatile : ÿһ�ζ�a�����ڴ���ȥ�����������ڻ�����ȥ��
//	// �ڶ��߳���Ӧ�õñȽ϶�
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