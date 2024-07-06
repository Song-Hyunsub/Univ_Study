#include <iostream>	// input/output stream
//------ 출 력 --------
// std::cout을 이용해서 출력을 진행할 수 있고, << (출력 연산자)로 출력 대상을 구분해준다.
//				ex) std::cout << 출력 대상;
// 출력 대상에는 문자, 정수, 실수, 문자열, 변수 중 하나가 작성될 수 있다.
// 서식 지정자를 사용하지 않아도 데이터에 알맞는 형식으로 출력 된다.
// 여러 출력 대상을 연달아 출력하고자 할 때는 대상 뒤에 <<로 추가적인 대상들을 작성해주면 된다.
//				ex) std::cout << 출력 대상 1 << 출력 대상 2;
// 개행을 진행할 때는  std::endl을 이용해서 개행을 진행할 수 있다.

//---- C++에서 데이터를 표기하는 방법 ----
// 문자: '(작은 따옴표)로 감싸준다. 문자는 반드시 단 한 개만 존재해야 된다.
// 문자열: "(큰 따옴표)로 감싸준다. 
// 정수: 정수 그대로 작성한다.
// 실수: 숫자 뒤에 소수점까지 작성한다.

//---- 변 수 ----
// 값이 변하는 수
// 메모리 공간을 할당 받고 해당 공간을 변수 이름으로 접근해 사용하는 개념
// 변수 선언 원형: 자료형 변수명;
// 한 개의 변수에는 반드시 한 개의 데이터만 저장될 수 있다.
// 변수는 같은 이름을 사용할 수 없다.
// 변수를 선언하면 기존의 공간에 존재하는 데이터가 있는데
// 우리는 이 데이터를 보고 '쓰레기 값'이라고 부른다.
// 변수를 선언하면서 값을 할당해주는 과정을 '초기화'라고 부른다.
// 
//---- 복사 초기화 ----
// copy initialization
// 대입 연산자를 사용해서 진행할 수 있다.
//				 ex) int num = 15;

//---- 직접 초기화 ----
// direct initialization
// 초기화 하고자 하는 변수 뒤에 (초기화할 값)을 작성해주면 된다.
//				 ex) int num(20);
// 초기화할 값에는 상수 뿐만 아니라 변수도 작성될 수 있다.
// 단순한 데이터 유형의 경우는 '복사 초기화'와 '직접 초기화'가 동일하다고 볼 수 있다.
// 고급 유형의 경우는 복사보다 직접이 성능이 더 뛰어날 수 있다.
// 직접의 경우는 값의 할당과 초기화를 구분하는데도 도움이 된다.

//---- 유니폼 초기화 ----
// uniform initialization
// 초기화하고자 하는 변수 뒤에 { 초기화할 값 }을 작성해주면 된다.
//				 ex) int num{ 27 };
// 복사 및 직접 초기화는 모든 상황에서 사용할 수는 없다.
// 하지만 유니폼 초기화는 모든 상황에서 사용이 가능하다.
// 복사 및 직접과는 다르게 초기화 과정을 엄격한 규칙으로 진행한다.
// 그 이유는 객체 지향에서 중요하게 작용하기 때문이다.
// 

//---- boolean ----
// true 혹은 false의 값을 저장해 줄 수 있는 자료형
// 선언할 때는 bool 변수명;  형식으로 선언한다.
//			 ex) bool b;
// true와 false의 값은 기본적으로 1과 0으로 표현된다.
// true와 false의 값을 문자열로 확인하고 싶다면 std::boolalpha를 사용하면 된다.
// 위의 기능을 끌 때는 std::noboolalpha;	를 사용하면 된다.

//---- 입력 ----
// std::cin을 이용해서 입력을 진행할 수 있다.
// std::cin의 경우 >>(입력 연산자)를 사용해서 콘솔로부터 사용자의 입력을 읽는다.
//				 ex) int num;
//					 std::cin >> num;
// 여러 개의 데이터를 입력 받을 때는 변수 뒤에 >>를 작성하고 그 뒤에 추가적인 변수까지 작성한다.
//				 ex) int num1, num2;
//					 std::cin >> num1 >> num2;
// 
// 
// 
// 


int main() 
{
	/* 실습 1번
	std::cout << "웃음: (*^o^*)" << std::endl;
	std::cout << "사랑: (♥.♥)" << std::endl; 
	std::cout << "슬픔: (ㅠ.ㅠ)" << std::endl;
	std::cout << "화남: (-_-^)" << std::endl;
	std::cout << std::endl;
	*/

	/* 실습 2번
	std::cout << "이름: " << "홍길동" << std::endl;
	std::cout << "나이: " << 30 << std::endl;
	std::cout << "주소: " << "서울특별시 종로구 묘동 단성사" << std::endl;
	std::cout << "키: " << 183.2 << "\t몸무게: " << 70.53 << std::endl;
	*/

	/*
	int num;

	num = 5;

	std::cout << "num의 값: " << num << std::endl;

	num = 10;

	std::cout << "num의 값: " << num << std::endl;

	*/

	/*
	int num(20);
	int num2(num);

	std::cout << "num의 값: " << num << std::endl;
	std::cout << "num2의 값: " << num2 << std::endl;
	*/

	/*
	int num{ 27.7 };		// 오류!

	std::cout << "num의 값: " << num << std::endl;
	*/

	/*
	bool b = true;
	std::cout << std::boolalpha;
	std::cout << "b의 값: " << b << std::endl;
	std::cout << std::noboolalpha;
	std::cout << "b의 값: " << b << std::endl;
	*/

	/*
	int num;

	std::cout << "입력: ";
	std::cin >> num;

	std::cout << "출력: " << num << std::endl;
	*/

	/*
	char ch;

	std::cout << "입력: ";
	std::cin >> ch;
	std::cout << "출력: " << ch << std::endl;

	*/

	/*
	double fnum;

	std::cout << "입력: ";
	std::cin >> fnum;

	std::cout.setf(std::ios::fixed); // 소수점 자리를 고정한다!
	std::cout.precision(4);	// => 정수를 포함한 자릿수

	std::cout << "출력: " << fnum << std::endl;
	*/

	/*
	int num1, num2;

	std::cout << "두 수 입력: ";
	std::cin >> num1 >> num2;

	std::cout << "두 수 출력: " << num1 << ' ' << num2 << std::endl;
	*/


	// 실습 1번 : 시, 분, 초를 입력받고 이를 초로 변환하세요
	/*
	int h, m, s, sum;
	std::cout << "시: ";
	std::cin >> h;
	std::cout << "분: ";
	std::cin >> m;
	std::cout << "초: ";
	std::cin >> s;
	sum = 60 * 60 * h + 60 * m + s;
	std::cout << "\n변환된 시간: " << sum << "초" << std::endl;
	
	std::cout << std::endl;
	*/
	// 실습 2번 : 10000 보다 작은 정수를 입력 받고 각 자릿수를 출력하세요
	int num;
	std::cout << "정수 입력: ";
	std::cin >> num;
	if (num >= 10000) std::cerr << "\n정수의 자릿수가 잘못되었습니다!";
	else {
		for (int i = 3; i >= 0; i--) {
			std::cout << 10^i << "의 자릿수 : " << num / 10^i << std::endl;
			num %= 10^i;
		}
	}
	return 0;

}
// 2, 36, 10, : 3291
