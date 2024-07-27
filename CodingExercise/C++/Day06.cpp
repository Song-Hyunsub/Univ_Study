#include <iostream>
#include <string>

//---- 디폴트 매개변수 ----
// 함수의 매개변수에 기본값을 지정해주는 개념
// 매개 변수는 반드시 특정 값을 넘겨받아야 하지만 
// 디폴트 매개 변수는 값을 넘겨 받지 않으면 설정된 기본값을 갖게 된다.
// 디폴트 매개 변수를 사용할 때는 매개 변수 뒤에 = 와 기본값을 작성하면 된다.
//				ex) void NumberPrint(int num = 10);
// 디폴트 매개 변수는 여러 개 사용할 수 있지만 
// 인수 값은 반드시 가장 왼쪽 매개 변수부터 순차적으로 받게 되기 때문에
// 디폴트 매개 변수는 가장 오른쪽 매개 변수부터 순차적으로 사용할 수 있다.
// 디폴트 매개 변수를 사용하면서 함수의 선언을 진행할 때 기본값은 선언 부분에만 작성해주면 된다.

//---- 함수 오버로딩 ----
// 동일한 이름을 가진 함수를 여러 개 정의해서 사용하는 개념
// 함수를 호출할 때는 함수의 이름 뿐만 아니라 매개 변수의 정보도 일치해야 된다.
// 함수 오버로딩을 사용할 때는, 매개변수의 타입 혹은 개수가 다르게 정의해야 된다.
// 함수 오버로딩과 디폴트 매개변수를 같이 사용할 때는 중복되는 함수는 없는지 주의 깊게 확인해야 된다.
// 함수의 이름이 같지만 반환 값이 다르다고 해서 함수 오버로딩을 사용할 수는 없다.

/*
void NumberPrint(int n1 = 11 , int n2 = 22);
*/

/* [Solution 1]
void SumPrint(int num, int* arr, int sum = 0) {
	for (int i = 0; i < num; i++) {
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << "정수 총합: " << sum << std::endl;
}
*/

/*[Solution 2]

void SumPrint(int n1, int n2=0, int n3=0, int n4=0, int n5=0) {
	std::cout << "정수 총합: " << n1 + n2 + n3 + n4 + n5 << std::endl;
}
*/

/*
void Add(int n1, int n2) {
	std::cout << "더한 값: " << n1 + n2 << std::endl;
}

void Add(double n1, double n2) {
	std::cout << "더한 값: " << n1 + n2 << std::endl;
}

void Add(int n1, int n2, int n3) {
	std::cout << "더한 값: " << n1 + n2 + n3 << std::endl;
}
*/

/*
int Sub(int n1, int n2) {
	return n1 - n2;
}

int Sub(int n1, int n2) {
	return n2 - n1;
}
*/

/*
void Swap(int& a, int& b) {

	int tmp = a;
	a = b;
	b = tmp;
	std::cout << "출력: " << a << ' ' << b << std::endl;
}
void Swap(double& a, double& b) {
	
	double tmp = a;
	a = b;
	b = tmp;
	std::cout << "출력: " << a << ' ' << b << std::endl;
}
void Swap(char& a, char& b) {
	
	char tmp = a;
	a = b;
	b = tmp;
	std::cout << "출력: " << a << ' ' << b << std::endl;
}
void Input(int N) {
	system("cls");
	std::cout << "-------- 데이터 바꾸기 --------" << std::endl;
	switch (N)
	{
	case 1:
		std::cout << "두 정수 입력: ";
		break;
	case 2:
		std::cout << "두 실수 입력: ";
		break;
	case 3:
		std::cout << "두 문자 입력: ";
		break;
	} 
}
*/


void Max(int a, int b) {

	if(a>=b) 
		std::cout << "출력: " << a << std::endl;
	else
		std::cout << "출력: " << b << std::endl;
}
void Max(double a, double b) {

	if (a >= b)
		std::cout << "출력: " << a << std::endl;
	else
		std::cout << "출력: " << b << std::endl;
}
void Max(char a, char b) {	// 값만 필요한 경우는 구지 사용할 필요 없음!!

	if (a >= b)
		std::cout << "출력: " << char(a) << std::endl;
	else
		std::cout << "출력: " << char(b) << std::endl;
}


void Input(std::string s) {
	system("cls");
	std::cout << "-------- 큰 값 구하기 --------" << std::endl;	

	if(s=="정수")
		std::cout << "두 정수 입력: ";
	else if(s=="실수")
		std::cout << "두 실수 입력: ";
	else if(s=="문자")
		std::cout << "두 문자 입력: ";
}


int main() {
	/*
	NumberPrint(15);
	*/

	/* Q1) 이력할 정수의 개수를 지정해서 입력 받은 뒤, 입력한 값의 합을 출력해주는 함수를 작성하시오
	* (정수의 개수는 최대 5개까지 입력받을 수 있음)
	* 정수의 개수: 3
	* 정수 입력: 61 52 35
	* 정수 총합: 148
	*
	* 정수의 개수: 3
	* 정수 입력: 61 52 35
	* 정수 총합: 148
	*/

	/*
	int num, arr[5];
	int sum=0;
	std::cout << "정수의 개수: ";
	std::cin >> num;
	if (num > 5) {
		std::cout << "정수의 개수의 범위를 벗어났습니다!" << std::endl;
		return 0;
	}
	// int* arr = new int[num];
	std::cout << "정수 입력: ";
	for (int i = 0; i < num; i++) {
		std::cin >> arr[i];
	}
	switch (num)
	{
	case 1:
		SumPrint(arr[0]);
		break;
	case 2:
		SumPrint(arr[0], arr[1]);
		break;
	case 3:
		SumPrint(arr[0], arr[1], arr[2]);
		break;
	case 4:
		SumPrint(arr[0], arr[1], arr[2], arr[3]);
		break;
	case 5:
		SumPrint(arr[0], arr[1], arr[2], arr[3], arr[4]);
		break;
	}
	// SumPrint(arr[0]);
	// delete[] arr;
	*/

	/*
	Add(5, 3);
	Add(2.3, 2.4);
	Add(5, 4, 3);
	*/

	/*
	std::cout << "뺀 값: " << Sub(20, 10) << std::endl;
	*/

	/* Q1)
	* 정수, 실수, 문자 중 하나의 데이터 타입을 번호로 선택하고 해당 타입의 데이터 두 개를 입력받은 후, 데이터를 바꿔주는 프로그램을 작성해보세요.
	*
	* -------- 데이터 바꾸기 --------
	* 1. 정수
	* 2. 실수
	* 3. 문자
	* 입력:
	*
	* -------- 데이터 바꾸기 --------
	* 두 정수 입력: 10 20
	* 출력: 20 10
	*
	* -------- 데이터 바꾸기 --------
	* 두 실수 입력: 10.0 20.0
	* 출력: 20.0 10.0
	*
	*
	* -------- 데이터 바꾸기 --------
	* 두 문자 입력: a b
	* 출력: b a
	*/

	/*
	int N, num1, num2;
	double d1, d2;
	char ch1, ch2;


	std::cout << "-------- 데이터 바꾸기 --------" << std::endl;
	std::cout << "1. 정수" << std::endl;
	std::cout << "2. 실수" << std::endl;
	std::cout << "3. 문자" << std::endl;
	std::cout << "입력: ";
	std::cin >> N;
	Input(N);
	switch (N)
	{
	case 1:
		std::cin >> num1 >> num2;
		Swap(num1, num2);
		break;
	case 2:
		std::cin >> d1 >> d2;
		Swap(d1, d2);
		break;
	case 3:
		std::cin >> ch1 >> ch2;
		Swap(ch1, ch2);
		break;
	default:
		std::cout << "1 ~ 3의 범위를 벗어났습니다." << std::endl;
		break;
	}
	*/

	/* Q2) 정수, 실수, 문자 중 하나의 데이터 타입을 문자열로 선택하고 해당 타입의 데이터 두개
	* -------- 큰 값 구하기 --------
	* 정수, 실수, 문자 중 어느 수를 선택하겠습니까?
	* 입력:
	*
	* 두 정수 입력:
	* 큰 값:
	* 계속하려면 아무키나 누르십시오.
	*
	* 두 실수 입력:
	* 큰 값:
	* 계속하려면 아무키나 누르십시오.
	*
	* 두 문자 입력:				// 느린 문자 (사전순으로 뒤에 있는 문자)
	* 큰 값:
	* 계속하려면 아무키나 누르십시오.
	*
	*/

	std::string s;
	int num1, num2;
	double d1, d2;
	char ch1, ch2;


	std::cout << "-------- 큰 값 구하기 --------" << std::endl;
	std::cout << "정수, 실수, 문자 중 어느 타입을 입력하겠습니까?" << std::endl;;
	std::cout << "입력: ";
	std::cin >> s;
	Input(s);
	if (s == "정수")
	{
		std::cin >> num1 >> num2;
		Max(num1, num2);
	}
	else if (s == "실수")
	{
		std::cin >> d1 >> d2;
		Max(d1, d2);
	}
	else if (s == "문자")
	{
		std::cin >> ch1 >> ch2;
		Max(ch1, ch2);
	}
	else {
		std::cout << "정수, 실수, 문자의 범위를 벗어났습니다." << std::endl;
	}
	
	return 0;
}

/*
void NumberPrint(int n1, int n2)
{
	std::cout << "출력: " << n1 << ' ' << n2 << std::endl;
}
*/
