#include <iostream>
#include <string>

//---- std::string ----
// std::string을 사용하기 위해서는 반드시 string 헤더파일을 포함해줘야 한다.
// 문자열을 저장할 변수를 선언할 때는 std::string 변수명;  형식으로 선언할 수 있다.
//				ex) std::string str;
// std::string을 이용한 변수의 경우 기존 초기화 방법으로 초기화할 수 있다.
// 특정 문자의 개수를 지정해서 초기화 할 수 있는데 이때는  변수명(개수, '문자') 형식으로 진행할 수 있다.
//				ex) std::string str(5, 'a'); => "aaaaa"
// 배열과 마찬가지로 인덱스를 이용해서 공간을 접근할 수 있다.

//---- std::getline() ----
// std::getline() 함수는 변수에 문자열을 입력받을 때 전체 라인을 입력 받는 함수로 두 개의 매개 변수를 갖는다.
// 첫 번째 매개 변수는 입력 방식을 지정, 두 번째 매개 변수는 저장할 변수를 작성하면 된다.
//				ex) std::string str;
//					std::getline(std::cin, str);
// 

//---- 문자열 관련 함수 ----
// std::string의 경우 기존의 문자열 관련 함수는 사용할 수 없으며 추가적인 멤버 함수들을 사용해줘야 한다.
// 이때는 std::string 이라는 자료형을 가진 변수 뒤에 .을 붙여서 사용할 수 있다.
// str.length(); 문자열의 길이를 반환
// str.insert(인덱스, 문자열): 작성한 인덱스 위치에 문자열을 삽입
// str.find(문자 혹은 문자열): 넘겨준 문자, 문자열을 찾아서 해당 위치의 index를 반환
// str.find(문자 혹은 문자열, 인덱스): 해당 인덱스부터 문자, 문자열을 찾아서 해당 위치의 index를 반환
//									(해당 데이터를 찾지 못한 경우 std::string::npos의 값을 반환한다.)
// str.clear(): 저장되어 있는 문자열을 지움
// 
// 
// 
// 
// 



int main() {

	/*
	std::string str;		// 가변적인 길이를 입력받음 => 할당 필요 X
	std::cout << "입력: ";
	std::cin >> str;
	std::cout << "출력: " << str << std::endl;
	*/

	/*
	std::string str = "Hello";
	std::cout << "출력: " << str << std::endl;
	*/

	/*
	std::string str(7, 'd');
	std::cout << "출력: " << str << std::endl;
	*/

	/*
	std::string str = "hello";
	std::cout << "출력: " << str[0] << str[1] << str[2] << str[3] << str[4] << std::endl;
	*/

	/* 실습 2: (다시 풀어보기)
	주민등록번호를 입력 받고 '-'이 제거된 상태로 출력하시오. (주민번호는 문자열로 취급해야 한다.)
	
	std::string rrn;
	std::cout << "주민등록번호 입력: ";
	std::cin >> rrn;
	std::cout << "주민등록번호 출력: ";
	for (int i = 0; i < 14; i++) {
		if (rrn[i] != '-') std::cout << rrn[i];
	}
	*/

	/*
	std::string str;

	std::cout << "입력: ";
	std::getline(std::cin, str);		// cin.getline => 문자열에서는 불가! => getline으로 대체

	std::cout << "출력: " << str << std::endl;
	*/

	/*
	std::string str = "Hello";
	std::cout << "길이: " << str.length() << std::endl;	// strlen은 문자열에서 사용 X

	str.insert(2, "Abcd");
	std::cout << "str: " << str << std::endl;

	std::cout << "첫 번째 l의 위치: " << str.find('l') << std::endl;
	std::cout << "두 번째 l의 위치: " << str.find('l', 7) << std::endl;		// 7 부터 끝까지 찾아본다!
	std::cout << "a의 위치: " << str.find('a') << std::endl;		// npos 값이 출력됨!
	std::cout << "npos의 값: " << std::string::npos << std::endl;

	str.clear();
	std::cout << "str: " << str << std::endl;
	*/

	/* 실습 3번 : program이라는 문자열에서 우리가 입력한 문자를 찾아주는 프로그램을 작성하세요.
	* 
	출력 예시)

	찾을 문자 입력: q
	해당 문자는 존재하지 않습니다.
	----
	찾을 문자 입력: a
	문자를 찾았습니다.
	*/

	std::string str = "Program";
	char c;
	std::cout << "찾을 문자 입력: ";
	std::cin >> c;
	if (str.find(c) != std::string::npos) {
		std::cout << "\n문자를 찾았습니다." << std::endl;
	}
	else std::cout << "\n해당 문자는 존재하지 않습니다." << std::endl;


	return 0;
}
