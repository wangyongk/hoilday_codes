/*---第一题----*/

//#include<iostream>
//#include<string>
//using namespace std;
//class Student 
//{
//public:
//	Student(string name, int stu_no, string sex, float hscore, float escore);
//	
//	void show();
//private:
//	string name;
//	int stu_no;
//	string sex;
//	float hscore;
//	float escore;
//
//};
//Student::Student(string name,  int stu_no, string sex, float hscore, float escore)
//{
//	this->name = name;
//	this->stu_no = stu_no;
//	this->sex = sex;
//	this->hscore = hscore;
//	this->escore = escore;
//}
//void Student::show()
//{
//	cout << "姓名：" <<name<<endl;
//	cout << "学号：" << stu_no << endl;
//	cout << "姓名：" << sex << endl;
//	cout << "h分数：" << hscore << endl;
//	cout << "e分数：" << escore << endl;
//
//}
//
//int main()
//{
//	Student s1("王永康", 1607064232,"男" ,88,90);
//	s1.show();
//	
//	return 0;
//}

/*---第二题----*/

/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student 
{
public:
	Student(string name, int stu_no, string sex, float hscore, float escore);
	
	void show();
private:
	string name;
	int stu_no;
	string sex;
	float hscore;
	float escore;

};
Student::Student(string name,  int stu_no, string sex, float hscore, float escore)
{
	this->name = name;
	this->stu_no = stu_no;
	this->sex = sex;
	this->hscore = hscore;
	this->escore = escore;
}
void Student::show()
{
	cout << "姓名：" <<name<<endl;
	cout << "学号：" << stu_no << endl;
	cout << "姓名：" << sex << endl;
	cout << "h分数：" << hscore << endl;
	cout << "e分数：" << escore << endl;

}

int main()
{
	Student s1("王永康", 1607064232,"男" ,88,90);
	s1.show();
	ofstream out1("D://1.txt",ios::out);
	out1 << "王永康" <<" "<< 1607064232 <<" "<< " 男" <<" "<< 80 <<" "<<90 << endl;
	out1.close();
	ofstream out2("D://1.txt", ios::out | ios:: app);
	out2 << "王永康2" << " " << 16070642322 << " " << " 男2" << " " << 802 << " " << 902 << endl;
	out2.close();
	ifstream if1("D://1.txt", ios::in);
	char str[80];
	while (if1)
	{
		if1.getline(str, 80);
		cout << str << endl;
	}
	if1.close();
	return 0;
}*/

/*---第三题----*/

//
//#include <iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex()
//	{ 
//		real = 0;
//		imag = 0;
//	}
//	Complex(double r, double i)
//	{
//		real = r;
//		imag = i; 
//	}
//	friend Complex operator+(Complex &a, Complex& b);
//	Complex operator-(Complex& c);
//	friend ostream& operator<<(ostream& out, Complex& d);
//
//	void show()
//	{
//		cout << real <<" "<< imag << endl;
//	}
//private:
//	double real;
//	double imag;
//};
//Complex operator+(Complex &a, Complex& b)
//{
//	Complex temp;
//	temp.real = a.real + b.real;
//	temp.imag = a.imag + b.imag;
//	return temp;
//
//}
//Complex Complex::operator-(Complex& c) 
//{
//	Complex temp;
//	temp.real = real - c.real;
//	temp.imag = imag - c.imag;
//	return temp;
//
//
//}
//ostream& operator <<(ostream& out, Complex& d)
//{
//	out << d.real<<" ";
//	out << d.imag<<" ";
//	return   out;
//}
//int main()
//{
//	Complex c1(3, 4),c2(7,8),c3,c4;
//	c3 = c1 + c2;
//	c4 = c2 - c1;
//	c1.show();
//	c2.show();
//	c3.show();
//	c4.show();
//	cout << c1;
//	return 0;
//}

/*---第四题----*/
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	virtual void show()
//	{
//		cout << "person show" << endl;
//	}
//
//};
//class  Woman:public Person
//{
//public:
//	void show()
//	{
//		cout << "Woman" << endl;
//	}
//
//
//};
//class  Man :public Person
//{
//public:
//	void show()
//	{
//		cout << "Man" << endl;
//	}
//
//
//
//};
//
//class  Student :public Woman,public Man 
//{
//public:
//	void show()
//	{
//		cout << "Student show" << endl;
//	}
//
//
//
//};
//
//int main()
//{
//	Person p1, *pt1;
//	Student::Man::Person s1;
//	pt1 = &s1;
//	pt1->show();
//	return 0;
//}


/*---第五题----*/
#include<iostream>
using namespace std;
class Base
{
public:
	void setB(int x)
	
	{
		a = x;
	}
	virtual void show()
	{	
		cout << "Base:" <<a<<endl;
	}

private:
	int a;
};

class Drived:public Base
{
public:
	void SetD(int y)
	{
		b = y;
	}
	void show()
	{
		cout << "Derived:" <<b<<endl;
	}
private:
	int b;

};
int main()
{
	Base b1, *pt1;
	Drived d1,*pt2;
	b1.setB(1);
	pt1 = &b1;
	pt1->show();
	d1.SetD(2);
	pt2 = &d1;
	pt2->show();
	return 0;
}