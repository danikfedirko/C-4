#include "stddef.h"
#include <iostream>

using namespace std;

class Figurs {
public:
	virtual double Square() {
		return 0;
	}
	virtual double Perimeter() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
	virtual double Long() {
		return 0;
	}
};

class Triangle : public Figurs {				//triangle
public:
	virtual double Square() {
		return 0;
	}
	virtual double Perimeter() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
};

class Square : public Figurs {				//square
public:
	virtual double Squares() {
		return 0;
	}
	virtual double Perimeter() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
};

class Circle : public Figurs {				//circle
public:
	virtual int Get() {
		return 0;
	}
	virtual double Long() {
		return 0;
	}

	virtual double Perimeter() {
		return 0;
	}
};


class Arbitrary : public Triangle {			//arbitrary triangle
public:

	int Get()
	{
		cout << "����i�� ������� 1: "; cin >> side1;
		cout << "����i�� ������� 2: "; cin >> side2;
		cout << "����i�� ������� 3: "; cin >> side3;
		cout << "����i�� ���i�� ��������� ���� � ���������: "; cin >> radius;
		return 0;
	}
	double Square()
	{
		return ((side1 + side2 + side3)*radius) / 2;


	}
	double Perimeter() {
		return (side1 + side2 + side3) / 2;
	}
private: double side1;
		 double side2;
		 double side3;
		 double radius;
};

class Straight : public Triangle {			//straight triangle
public:
	double side1;
	double side2;
	double side3;

	int Get() {
		cout << "����i�� ����� 1: "; cin >> side1;
		cout << "����i�� ����� 2: "; cin >> side2;
		return 0;
	}
	double Square() { return (side1*side2) / 2; }
};


class Square_correct : public Square {		//square
public:
	double side;
	int Get() {
		cout << "����i�� ������� : ";
		cin >> side;
		return 0;
	}
	double Squares() { return side*side; }
	double Perimeter() { return side * 4; }
};

class Rectangle : public Square {			//rectangle
public:
	double side1;
	double side2;
	int Get() {
		cout << "����i�� ������� 1 : ";    cin >> side1;
		cout << "����i�� ������� 2 : ";    cin >> side2; return 0;
	}
	double Squares() { return side1*side2; }
	double Perimeter() { return (side1 * 2) + (side2 * 2); }
};

class Parallelogram : public Square {			//parallelogram
public:
	double side1;
	double side2;
	double angle;
	int Get() {
		cout << "����i�� ������� 1 : ";	cin >> side1;
		cout << "����i�� ������� 2 : ";	cin >> side2;
		cout << "����i�� ���(sin) : ";	cin >> angle;
		return 0;
	}
	double Squares() { return side1*side2*sin(angle); }
	double Perimeter() { return (side1 * 2) + (side2 * 2); }
};

class Diamond : public Square {					//diamond
public:
	double side1;
	double side2;
	int Get() {
		cout << "����i�� �������� 1 : ";	cin >> side1;
		cout << "����i�� �������� 2 : ";	cin >> side2;
		return 0;
	}
	double Squares() { return (side1*side2) / 2; }
};


class Round : public Circle {					//circle
public:
	double r;
	int Get() { cout << "����i�� ����� : ";	cin >> r; return 0; }
	double Long() { return 2 * r; }
};

class Ellipse : public Circle {					//ellipse
public:
	double a, b;
	int Get()
	{
		cout << "����i�� ������� ������ �i���i: ";	cin >> a;
		cout << "����i�� ������� ���� �i���i: ";	cin >> b;
		return 0;
	}
	virtual double Perimeter()
	{
		return (b*a) / 2;
	}
};


int main() {

	setlocale(LC_ALL, "Ukrainian");

	cout << "�����i�� �i���� :" << endl;
	cout << "1. ���i����� ���������" << endl;
	cout << "2. ���������� ���������" << endl;
	cout << "3. �������" << endl;
	cout << "4. �����������" << endl;
	cout << "5. ������������" << endl;
	cout << "6. ���� " << endl;
	cout << "7. ���� " << endl;
	cout << "8. ��i��" << endl;

	int choise;
	cin >> choise;
	cout << endl;
	if (choise == 1) {
		Triangle *ptr1 = new Arbitrary;
		ptr1->Get();
		cout << endl;
		cout << "�����=" << ptr1->Square() << endl;
		cout << "��������=" << ptr1->Perimeter() << endl;
	}
	else if (choise == 2) {
		Triangle *ptr2 = new Straight;
		ptr2->Get();
		cout << endl;
		cout << "�����=" << ptr2->Square() << endl;
	}
	else if (choise == 3) {
		Square *ptr3 = new Square_correct;
		ptr3->Get();
		cout << endl;
		cout << "�����=" << ptr3->Squares() << endl;
		cout << "��������=" << ptr3->Perimeter() << endl;
	}
	else if (choise == 4) {
		Square *ptr4 = new Rectangle;
		ptr4->Get();
		cout << endl;
		cout << "�����=" << ptr4->Squares() << endl;
		cout << "��������=" << ptr4->Perimeter() << endl;
	}
	else if (choise == 5) {
		Square *ptr5 = new Parallelogram;
		ptr5->Get();
		cout << endl;
		cout << "�����=" << ptr5->Squares() << endl;
		cout << "��������=" << ptr5->Perimeter() << endl;
	}
	else if (choise == 6) {
		Square *ptr6 = new Diamond;
		ptr6->Get();
		cout << endl;
		cout << "�����=" << ptr6->Squares() << endl;
	}

	else if (choise == 7) {
		Circle  *ptr7 = new Round;
		cout << endl;
		ptr7->Get();
		cout << "������� ����=" << ptr7->Long() << "�" << endl;
	}
	else if (choise == 8) {
		Circle  *ptr8 = new Ellipse;
		cout << ptr8->Get() << endl;
		cout << "��������� ��������=" << ptr8->Perimeter() << endl;
	}
	else {
		cout << "�� ����� �� ��������� �����";
	}
	system("pause");
}
