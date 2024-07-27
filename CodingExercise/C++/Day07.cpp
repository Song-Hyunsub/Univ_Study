#include <iostream>
#include <string>
using namespace std;

// ---- namespace ---- : �̸��� ���ϴ� ����
// �̸��� ���ϴ� �������� �Լ��� ������ ��ȿ ������ �����Ͽ� ����� �� �ְ� ����� ����
// namespace ���� ����:
// namespace �̸����� �̸�{
//		�ĺ���;
// }
// �̸����� �ȿ� ������ ���� ::(���� ���� ������)�� ����ؼ� ������ �� �ִ�.
//					ex) �̸����� �̸�::�ĺ���  -> ACompany::TextPrint();
// �̸����� �ȿ� �ִ� �Լ��� ����� ���Ƿ� ������ ����
// ���� �κп� ��ȯ�� �̸����� �̸�::�Լ��̸�(�Ű�����) �������� ������ �� �ִ�.
//					ex) void ACompany::TextPrint()

// ---- using ----
// �̸����� �̸��� �������� �� �ְ� ������ִ� ����
// �ĺ��� ���� using ����: using �̸����� �̸�::�ĺ���;
// �̸����� ���� using ����: using namespace �̸����� �̸�;
// using�� ����� ���� �̸������� �������� �� �ߺ��Ǵ� �ĺ��ڰ� ������ �����ؾ� �ȴ�.
// �̸����� �������ٴ� �ĺ��� ������ ����ϴ� ���� �� �����ϴ�.

// ---- ���� ���� ������ ---- 
// ���� ���� �����ڸ� ����ϸ� Ư�� �̸������� ������ ���� ���� ���� �� ���� �Լ��� ������ �� �ִ�.
// ���� ���� �� ���� �Լ��� �����ϴ� ���: �����ϰ��� �ϴ� ���� �� �Լ� �̸� �տ� ::�� �ٿ��ָ� �ȴ�.
//				ex) ::TextPrint();
// ���� ���� �� ���� �Լ��� ��������� �����ϱ� ���� ����ϱ⵵ �Ѵ�.

// ��ü���� ���α׷���
// ��ü : �Ӽ�(����) + ����(�Լ�)

// ��ü�� Ŭ������ ǥ���ؾ� �Ѵ�.

// ---- ���� ���� ������ ----
// ����� ������ �� �ִ� ����ڸ� �������ִ� ����
// public: ���� ����� �ܺο����� ������ ���� => ����ü�� �⺻�� �Ӽ�
// private: ����� ����� �ܺο��� ���� X => Ŭ������ �⺻�� �Ӽ�

// ---- Ŭ���� ----
// Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��Ƶ� Ʋ
// ��ü: Ŭ������ �̿��� ����� ����
// class: Attribute(�Ӽ�) + Method(����)
// �Ӽ��� �� ��� ������ ��Ÿ���ְ� �ǰ�, ������ �� ��� �Լ��� ��Ÿ���ְ� �ȴ�.
// ����ü�� �� ����� �⺻������ public�� �Ӽ��� ���� �ǰ�,
// Ŭ������ �� ����� �⺻������ private�� �Ӽ��� ���� �ȴ�.

// ---- setter ----
// ��� ������ ���� �������ִ� ������ �޼ҵ带 �ǹ��Ѵ�.
// setter�� ��ȯ���� �⺻������ void�� ����� �ȴ�.
// setter�� �Ű������� ������ ��� ������ ���� �ڷ����� ����ؾ� �Ѵ�.
// setter�� �̸��� Set �ڿ� ������ ��� ������ �̸� Ȥ�� �������� �ܾ �ٿ��ش�.
//				ex) void SetColor(string _color)
// ��� ������ ���� �������ִ� ������ �ϱ� ������ ������ ����ó���� ���� �������� �� �ִ�.

// ---- getter ----
// ��� ������ ���� �������� ������ �޼ҵ带 �ǹ��Ѵ�.
// getter�� ��ȯ���� ��ȯ���� ��� ������ �ڷ����� ��ġ�ؾ� �ȴ�.
// getter�� �̸��� Get �ڿ� ��ȯ�� ��� ������ �̸� Ȥ�� �������� �ܾ �ٿ��ش�.
//				ex) string GetColor()
//					{	return color;	}

// ---- const method ----
// �޼ҵ带 ���ȭ�ؼ� ���ο��� �ǵ�ġ ���� �� �������� ���� �߻��ϴ� ������ ���������ִ� ����
// �޼ҵ带 ���ȭ �����ֱ� ���ؼ��� �Ű����� �ڿ� const�� �ۼ��ϸ� �ȴ�.
//				ex) int GetMaxspeed() const
//					{	}
// �޼ҵ带 ���ȭ �����ְ� �Ǹ� ��� ������ ���� ������ �� ����.




/*
namespace ACompany {
	void TextPrint() {
		std::cout << "A Function!!" << std::endl;
	}
}

namespace BCompany {
	void TextPrint() {
		std::cout << "B Function!!" << std::endl;
	}
}
*/

/*
namespace ACompany {
	void TextPrint();
}
namespace BCompany {
	void TextPrint();
}
*/

/*
namespace CCompany {
	int data1 = 11;
	int data2 = 22;

	void Data1Print()
	{
		cout << "data1: " << data1 << endl;
	}

	void Data2Print()
	{
		cout << "data2: " << data2 << endl;
	}

	void TextPrint()
	{
		cout << "C Function!!" << endl;
	}
}


void TextPrint() 
{
	cout << "Global Function!!" << endl;
}

int num;
*/

/*
namespace per1 {	// ö��
	double height;
	int age;
	double weight;
	void Print(int age, double height, double weight) {
		double BMI1 = weight / ((height / 100) * (height / 100));
		cout.setf(std::ios::fixed);
		cout.precision(2);
		cout << "ö���� ����" << endl;
		cout << "����: " << age << endl;
		cout << "Ű: " << height << endl;
		cout << "������: " << weight << endl;
		cout << "BMI ����: " << BMI1 << endl;
	}
	
}
namespace per2 {	// �μ�
	double height;
	int age;
	double weight;
	void Print(int age, double height, double weight) {
		double BMI2 = weight / ((height / 100) * (height / 100));
		cout.setf(std::ios::fixed);
		cout.precision(2);
		cout << "�μ��� ����" << endl;
		cout << "����: " << age << endl;
		cout << "Ű: " << height << endl;
		cout << "������: " << weight << endl;
		cout << "BMI ����: " << BMI2 << endl;
	}
}
namespace per3 {	// ����
	double height;
	int age;
	double weight;
	void Print(int age, double height, double weight) {
		double BMI3 = weight / ((height / 100) * (height / 100));
		cout.setf(std::ios::fixed);
		cout.precision(2);
		cout << "������ ����" << endl;
		cout << "����: " << age << endl;
		cout << "Ű: " << height << endl;
		cout << "������: " << weight << endl;
		cout << "BMI ����: " << BMI3 << endl;
	}
}

double height;
int age;
double weight;

*/

class Car {
	string color;
	int maxspeed;
	int gear;

public:
	void SetColor(string _color)	// Setter ����Լ��� ���� private ������ ���� ����
	{
		if (_color == "Red" || _color == "While" || _color == "Balck" || _color == "Gray") {
			color = _color;
		}
		else
		{
			cout << "Red, White, Black, Gray �� �ϳ��� �������ּ���." << endl;
			color = "Red";
		}
	}

	void SetMaxspeed(int _maxspeed)
	{
		if (_maxspeed > 190)
		{
			cout << "�ִ� �ӷ��� 190km/h�� �ʰ��� �� �����ϴ�." << endl;
			maxspeed = 140;
		}
		else if (_maxspeed < 100)
		{
			cout << "�ִ� �ӷ��� 100km/h �̸��� �� �����ϴ�." << endl;
			maxspeed = 140;
		}
		else
			maxspeed = _maxspeed;
	}

	void SetGear(int _gear)
	{
		gear = _gear;
	}

	string GetColor()
	{
		return color;
	}

	int GetMaxspeed() const	// �� ����
	{
		return maxspeed;
	}

	int GetGear()
	{
		return gear;
	}

	void ShowInfo()	// C������ ����ü �� �Լ��� �Ұ�!!
	{
		cout << "����: " << color << endl;
		cout << "�ִ� �ӷ�: " << maxspeed << endl;
		cout << "�⿩: " << gear << endl;
	}
};

int main() {
	/*
	ACompany::TextPrint();
	BCompany::TextPrint();
	*/

	/*
	// using CCompany::Data1Print;		// �ĺ��� ���� using ����
	// using CCompany::Data2Print;
	using namespace CCompany;
	Data1Print();
	Data2Print();
	CCompany::TextPrint();
	// TextPrint();			# Error!
	*/

	/*
	using namespace CCompany;
	int num = 4;
	Data1Print();
	Data2Print();
	CCompany::TextPrint();
	::TextPrint();

	cout << "num�� ��: " << num << endl;	
	// ���������� �ʱ�ȭ�� �������� �ʾƵ� 0�� ���� ���´�!!
	// �̸��� �ߺ��Ǵ� ��Ȳ������ ���������� ������������ �켱������ ����!
	cout << "num�� ��: " << ::num << endl; // �������������ڸ� ��� �ϸ� �ļ����� ���������� ��� ����!
	*/

	/* Q1) ö��, �μ�, ���� ���� ������ ����� �� ������ �ڽ��� ������ ��Ƶη� �Ѵ�.
	* �̴�, ������ Ű, ����, �����Է� ���� �Ǿ�������
	* ���� �� ������ �Է¹ް�
	* �Է��� ������  BMI�������� �߰������� ����ϴ� �Լ��� �����Ͻÿ�.
	* BMI ���� = ������ / ((Ű / 100 ) * (Ű / 100))
	* BMI, weight => �Ҽ� �� �ڸ�������
	* height => �Ҽ� ���ڸ�������
	* 
	* ���)
	* ö���� ���� �Է�
	* ����: 21
	* Ű: 178.3
	* ������: 70.53

	*/

	/*
	cout << "ö���� ���� �Է�" << endl;
	cout << "����: ";
	cin >> per1::age;
	cout << "Ű: ";
	cin >> per1::height;
	cout << "������: ";
	cin >> per1::weight;
	cout << endl;
	
	cout << "�μ��� ���� �Է�" << endl;
	cout << "����: ";
	cin >> per2::age;
	cout << "Ű: ";
	cin >> per2::height;
	cout << "������: ";
	cin >> per2::weight;
	cout << endl;

	cout << "������ ���� �Է�" << endl;
	cout << "����: ";
	cin >> per3::age;
	cout << "Ű: ";
	cin >> per3::height;
	cout << "������: ";
	cin >> per3::weight;
	cout << endl;

	
	per1::Print(height, age, weight);
	cout << endl;

	per2::Print(height, age, weight);
	cout << endl;

	per3::Print(height, age, weight);
	cout << endl;
	*/

	
	Car Avante;	// ������ �ʱ�ȭ

	Avante.SetColor("Red");
	Avante.SetMaxspeed(140);
	Avante.SetGear(3);
	
	// Avante.ShowInfo();

	cout << "����: " << Avante.GetColor() << endl;
	cout << "�ִ� �ӷ�: " << Avante.GetMaxspeed() << endl;
	cout << "���: " << Avante.GetGear() << endl;

	return 0;
}

/*
void ACompany::TextPrint() {
	std::cout << "A Function!!" << std::endl;
}
void BCompany::TextPrint() {
	std::cout << "B Function!!" << std::endl;
}
*/