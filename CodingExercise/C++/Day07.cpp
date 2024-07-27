#include <iostream>
#include <string>
using namespace std;

// ---- namespace ---- : 이름을 지니는 공간
// 이름을 지니는 공간으로 함수나 변수의 유효 범위를 구분하여 사용할 수 있게 만드는 개념
// namespace 정의 원형:
// namespace 이름공간 이름{
//		식별자;
// }
// 이름공간 안에 접근할 때는 ::(범위 지정 연산자)를 사용해서 접근할 수 있다.
//					ex) 이름공간 이름::식별자  -> ACompany::TextPrint();
// 이름공간 안에 있는 함수를 선언과 정의로 구분할 때는
// 정의 부분에 반환형 이름공간 이름::함수이름(매개변수) 형식으로 진행할 수 있다.
//					ex) void ACompany::TextPrint()

// ---- using ----
// 이름공간 이름을 생략해줄 수 있게 만들어주는 개념
// 식별자 지정 using 원형: using 이름공간 이름::식별자;
// 이름공간 지정 using 원형: using namespace 이름공간 이름;
// using을 사용할 때는 이름공간을 생략했을 때 중복되는 식별자가 없는지 주의해야 된다.
// 이름공간 지정보다는 식별자 지정을 사용하는 편이 더 안전하다.

// ---- 범위 지정 연산자 ---- 
// 범위 지정 연산자를 사용하면 특정 이름공간에 속하지 않은 전역 변수 및 전역 함수에 접근할 수 있다.
// 전역 변수 및 전역 함수에 접근하는 방법: 접근하고자 하는 변수 및 함수 이름 앞에 ::를 붙여주면 된다.
//				ex) ::TextPrint();
// 전역 변수 및 전역 함수를 명시적으로 구분하기 위해 사용하기도 한다.

// 객체지향 프로그래밍
// 객체 : 속성(변수) + 동작(함수)

// 객체는 클래스로 표현해야 한다.

// ---- 접근 제어 지시자 ----
// 멤버에 접근할 수 있는 사용자를 지정해주는 개념
// public: 공개 멤버로 외부에서도 접근이 가능 => 구조체의 기본값 속성
// private: 비공개 멤버로 외부에서 접근 X => 클래스의 기본값 속성

// ---- 클래스 ----
// 특정한 용도를 수행하기 위해 변수와 함수를 모아둔 틀
// 객체: 클래스를 이용해 선언된 변수
// class: Attribute(속성) + Method(동작)
// 속성은 각 멤버 변수가 나타내주게 되고, 동작은 각 멤버 함수가 나타내주게 된다.
// 구조체는 각 멤버가 기본적으로 public의 속성을 갖게 되고,
// 클래스는 각 멤버가 기본적으로 private의 속성을 갖게 된다.

// ---- setter ----
// 멤버 변수의 값을 설정해주는 역할의 메소드를 의미한다.
// setter의 반환형은 기본적으로 void로 사용이 된다.
// setter의 매개변수는 설정할 멤버 변수와 같은 자료형을 사용해야 한다.
// setter의 이름은 Set 뒤에 설정할 멤버 변수의 이름 혹은 직관적인 단어를 붙여준다.
//				ex) void SetColor(string _color)
// 멤버 변수의 값을 설정해주는 역할을 하기 때문에 적절한 예외처리를 같이 진행해줄 수 있다.

// ---- getter ----
// 멤버 변수의 값을 가져오는 역할의 메소드를 의미한다.
// getter의 반환형은 반환해줄 멤버 변수의 자료형과 일치해야 된다.
// getter의 이름은 Get 뒤에 반환할 멤버 변수의 이름 혹은 직관적인 단어를 붙여준다.
//				ex) string GetColor()
//					{	return color;	}

// ---- const method ----
// 메소드를 상수화해서 내부에서 의도치 않은 값 변경으로 인해 발생하는 문제를 방지시켜주는 개념
// 메소드를 상수화 시켜주기 위해서는 매개변수 뒤에 const를 작성하면 된다.
//				ex) int GetMaxspeed() const
//					{	}
// 메소드를 상수화 시켜주게 되면 멤버 변수의 값을 변경할 수 없다.




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
namespace per1 {	// 철수
	double height;
	int age;
	double weight;
	void Print(int age, double height, double weight) {
		double BMI1 = weight / ((height / 100) * (height / 100));
		cout.setf(std::ios::fixed);
		cout.precision(2);
		cout << "철수의 정보" << endl;
		cout << "나이: " << age << endl;
		cout << "키: " << height << endl;
		cout << "몸무게: " << weight << endl;
		cout << "BMI 지수: " << BMI1 << endl;
	}
	
}
namespace per2 {	// 민수
	double height;
	int age;
	double weight;
	void Print(int age, double height, double weight) {
		double BMI2 = weight / ((height / 100) * (height / 100));
		cout.setf(std::ios::fixed);
		cout.precision(2);
		cout << "민수의 정보" << endl;
		cout << "나이: " << age << endl;
		cout << "키: " << height << endl;
		cout << "몸무게: " << weight << endl;
		cout << "BMI 지수: " << BMI2 << endl;
	}
}
namespace per3 {	// 영희
	double height;
	int age;
	double weight;
	void Print(int age, double height, double weight) {
		double BMI3 = weight / ((height / 100) * (height / 100));
		cout.setf(std::ios::fixed);
		cout.precision(2);
		cout << "영희의 정보" << endl;
		cout << "나이: " << age << endl;
		cout << "키: " << height << endl;
		cout << "몸무게: " << weight << endl;
		cout << "BMI 지수: " << BMI3 << endl;
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
	void SetColor(string _color)	// Setter 멤버함수를 통해 private 변수를 간접 접근
	{
		if (_color == "Red" || _color == "While" || _color == "Balck" || _color == "Gray") {
			color = _color;
		}
		else
		{
			cout << "Red, White, Black, Gray 중 하나를 선택해주세요." << endl;
			color = "Red";
		}
	}

	void SetMaxspeed(int _maxspeed)
	{
		if (_maxspeed > 190)
		{
			cout << "최대 속력이 190km/h를 초과할 수 없습니다." << endl;
			maxspeed = 140;
		}
		else if (_maxspeed < 100)
		{
			cout << "최대 속력이 100km/h 미만일 수 없습니다." << endl;
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

	int GetMaxspeed() const	// 값 변경
	{
		return maxspeed;
	}

	int GetGear()
	{
		return gear;
	}

	void ShowInfo()	// C언어에서는 구조체 속 함수가 불가!!
	{
		cout << "색상: " << color << endl;
		cout << "최대 속력: " << maxspeed << endl;
		cout << "기여: " << gear << endl;
	}
};

int main() {
	/*
	ACompany::TextPrint();
	BCompany::TextPrint();
	*/

	/*
	// using CCompany::Data1Print;		// 식별자 지정 using 원형
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

	cout << "num의 값: " << num << endl;	
	// 전역변수는 초기화를 진행하지 않아도 0의 값을 갖는다!!
	// 이름이 중복되는 상황에서는 지역변수가 전역변수보다 우선순위가 높음!
	cout << "num의 값: " << ::num << endl; // 범위지정연산자를 사용 하면 후순위인 전역변수도 출력 가능!
	*/

	/* Q1) 철수, 민수, 영희가 각자 영역을 만들어 각 공간에 자신의 정보를 담아두려 한다.
	* 이대, 정보는 키, 나이, 몸무게로 구성 되어있으며
	* 이후 각 정보를 입력받고
	* 입력한 정보와  BMI지수까지 추가적으로 출력하는 함수도 정의하시오.
	* BMI 지수 = 몸무게 / ((키 / 100 ) * (키 / 100))
	* BMI, weight => 소수 두 자리수까지
	* height => 소수 한자리수까지
	* 
	* 출력)
	* 철수의 정보 입력
	* 나이: 21
	* 키: 178.3
	* 몸무게: 70.53

	*/

	/*
	cout << "철수의 정보 입력" << endl;
	cout << "나이: ";
	cin >> per1::age;
	cout << "키: ";
	cin >> per1::height;
	cout << "몸무게: ";
	cin >> per1::weight;
	cout << endl;
	
	cout << "민수의 정보 입력" << endl;
	cout << "나이: ";
	cin >> per2::age;
	cout << "키: ";
	cin >> per2::height;
	cout << "몸무게: ";
	cin >> per2::weight;
	cout << endl;

	cout << "영희의 정보 입력" << endl;
	cout << "나이: ";
	cin >> per3::age;
	cout << "키: ";
	cin >> per3::height;
	cout << "몸무게: ";
	cin >> per3::weight;
	cout << endl;

	
	per1::Print(height, age, weight);
	cout << endl;

	per2::Print(height, age, weight);
	cout << endl;

	per3::Print(height, age, weight);
	cout << endl;
	*/

	
	Car Avante;	// 유니폼 초기화

	Avante.SetColor("Red");
	Avante.SetMaxspeed(140);
	Avante.SetGear(3);
	
	// Avante.ShowInfo();

	cout << "색상: " << Avante.GetColor() << endl;
	cout << "최대 속력: " << Avante.GetMaxspeed() << endl;
	cout << "기어: " << Avante.GetGear() << endl;

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