#include <iostream>
#include <string>

//---- 문자열 처리 ----
// std::string을 사용하면 배열보다 문자열을 더 쉽게 처리할 수 있다.
// 공간 선언 이후에 문자열을 저장할 때, 배열과는 다르게 대입 연산자를 사용할 수 있다.
// 문자열의 복사 또한 대입 연산자를 이용해 훨씬 간단하게 진행할 수 있다.
//					ex) std::string str1 = "Abcd", str2;
//						str2 = str1;
// 문자열을 이어붙일때는 산술 연산자를 사용해서 이어붙일 수 있다.
//					ex) std::string str1 = "Abcd", str2 = "Efgh";
//						str1 = str1 + str2;
//						str1 += str2;

//---- 문자열 비교 ----
// std::string을 사용하면 문자열을 비교할 때 일반 변수와 같이 연산자로 진행할 수 있다.
// 두 개의 문자열을 비교할 때는 ==를 이용해서 동일 여부를 확인할 수 있다.
//					ex) std::string str1 = "Hello", str2 = "Hallo";
//						if (str1 == str2)
// 두 개의 문자열을 사전 편찬순의 순서로 검사할 수 있는데 이때는 부등호를 사용한다.
//					ex) std::string str1 = "Hello", str2 = "Hallo";
//						if (str1 > str2)


//---- system() ----
// system("명령어"): 콘솔 환경에서 작동되는 명령어를 실행시켜주는 함수 (ex: system("cls"))
// system("cls"): 화면을 한 번 지워준다.
// system("pause"): 아무 키나 입력될 때 까지 화면을 멈춰준다.

//---- 구조체 ----
// 여래 개의 멤버들을 모아서 하나의 새로운 자료형을 만드는 개념
// 구조체 변수 안의 멤버에 접근할 때는 .(도트 연산자)를 사용해서 접근할 수 있다.
//					ex) struct Data d;
//						d.data1 = 10;
// 구조체의 크기는 구조체 멤버들을 모두 더한 크기이다. (ex: int형은 하나당 4바이트)
// 
// 기본 구조체 정의 원형: 
//	struct 구조체 이름 {
//		멤버;
//	};
// 별칭, 익명 구조체

/*
struct Data {
	int data1;
	int data2;
};
*/

struct exam {
	int ko;
	int math;
	int en;
	int total;
	double avg;
	char grade;
};

int totalf(int ko, int math, int en, int total) {
	total = ko + math + en;
}

int avgf(int total, double avg) {
	avg = total / (double)3;
}

int gradef(int avg, int grade) {
	if (avg >= 90) {
		grade = 'A';
	}
	else if (avg >= 80) {
		grade = 'B';
	}
	else if (avg >= 70) {
		grade = 'C';
	}
	else if (avg >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
}

int main() {

	/*
	std::string str;
	str = "Hello";

	std::cout << "str: " << str << std::endl;
	*/

	/*
	std::string str1 = "Abcd", str2;
	str2 = str1;		// strcpy (char type in c)
	std::cout << "str2: " << str2 << std::endl;
	*/

	/*
	std::string str1 = "Abcd", str2 = "Efgh";		// strcat (string catch up in c => 두 문자를 이어붙임!)

	// str1 = str1 + str2;
	str1 += str2;

	std::cout << "str1: " << str1 << std::endl;
	*/

	/*
	std::string str1 = "Hello", str2 = "Hello";		// 문자 배열 비교 함수 => strcmp (comparison)

	if (str1 == str2)
		std::cout << "두 문자열은 같습니다." << std::endl;
	else
		std::cout << "두 문자열은 다릅니다." << std::endl;
	*/

	/*
	std::string str1 = "Hello", str2 = "Hallo";

	if (str1 > str2)
		std::cout << "str1이 더 느립니다." << std::endl;
	else
		std::cout << "str1이 더 빠릅니다." << std::endl;
	*/

	/*
	std::cout << "ABCD" << std::endl;
	system("pause");
	std::cout << "EFGH" << std::endl;
	*/

	/*
	(1) 입력한 문자가 없을 때 => "해당 문자가 없습니다." 출력 => 횟수만 한 번 감소
	(2) 모든 횟수를 소진했을 때 => "틀렸습니다. 정답은 system입니다." 출력 => 프로그램 종료
	(3) 입력한 문자가 존재할 때 => 현재 상태를 바꿔주며 횟수는 차감 X
	(4) 모든 문자를 다 찾았을 때 => "정답을 맞췄습니다." 출력 => 프로그램 종료
	(5) 이미 찾은 문자를 입력했을 때 => "해당 문자는 이미 있습니다." 출력 => 횟수 차감 X

	순차적으로 차근차근!!!

	출력)
	현재 상태: ------		남은 횟수 : 10	// 문자열을 찾지 못했을때만 1씩 차감
	추측 문자 입력:							//

	찾았다면 "계속하려면 아무키나 누르세요." 출력 => system("pause")
	한 번에 여러개 찾을시 => 여러 개를 - 에서 해당 문자로 변환
	정답을 맞출 시 =>

	Hint)
	std::string answer = "system";
	int length;
	int tries;
	std::string view;
	char ch;
	int pos;

	*/

	/* 프로젝트 실습
	초기 구현)
	std::string answer = "system";
	int length = answer.length();
	int tries = 10;
	std::string view;
	char ch;
	int pos;

	view = "------";

	system("cls");
	std::cout << "현재 상태 : " << view << "\t\t" << "남은 횟수 : " << tries << std::endl;
	std::cout << "추측문자 입력 : ";
	std::cin >> ch;

	while (1) {
		if (tries != 1) {

			// (1) 입력한 문자가 없을 때 (완료)
			if (answer.find(ch) == std::string::npos) {
				tries--;
				system("cls");
				std::cout << "현재 상태 : " << view << "\t\t" << "남은 횟수 : " << tries << std::endl;
				std::cout << "\n해당 문자가 없습니다." << std::endl;
				std::cout << "계속하려면 문자를 다시 입력하세요 : ";
				std::cin >> ch;
			}
			// (3) 입력한 문자가 존재할 때 (완료)
			else {
				for (int i = 0; i < length; i++) {
					if (i == answer.find(ch, i)) {
						view[answer.find(ch, i)] = answer[answer.find(ch, i)];		// 불필요한 접근
					}
				}
				// (4) 모든 문자를 다 찾았을 때
				if (view == answer) {
					system("cls");
					std::cout << "현재 상태 : " << view << "\t\t" << "남은 횟수 : " << tries << std::endl;
					std::cout << "정답을 맞췄습니다." << std::endl;
					break;
				}
				else {
					// view 문자열에 answer의 문자열에 있는 문자를 insert한다.
					system("cls");
					std::cout << "현재 상태 : " << view << "\t\t" << "남은 횟수 : " << tries << std::endl;
					std::cout << "\n해당 문자를 찾았습니다." << std::endl;
					std::cout << "계속하려면 문자를 다시 입력하세요 : ";
					std::cin >> ch;
				}
			}
			// (5) 이미 찾은 문자를 입력했을 때
			if (view.find(ch) != std::string::npos) {
				system("cls");
				std::cout << "현재 상태 : " << view << "\t\t" << "남은 횟수 : " << tries << std::endl;
				std::cout << "\n해당 문자는 이미 있습니다." << std::endl;
				std::cout << "계속하려면 문자를 다시 입력하세요 : ";
				std::cin >> ch;
			}
		}
		// (2) 모든 횟수를 소진했을 때
		else {
			while (1) {
				if (answer.find(ch) == std::string::npos) {
					std::cout << "틀렸습니다. 정답은 system입니다." << std::endl;
					return 0;
				}
				else if (answer.find(ch) == view.find(ch)) {
					system("cls");
					std::cout << "현재 상태 : " << view << "\t\t" << "남은 횟수 : " << tries << std::endl;
					std::cout << "\n해당 문자는 이미 있습니다." << std::endl;
					std::cout << "계속하려면 문자를 다시 입력하세요 : ";
					std::cin >> ch;
				}
				else {
					for (int i = 0; i < length; i++) {
						if (i == answer.find(ch, i)) {
							view[answer.find(ch, i)] = answer[answer.find(ch, i)];
						}
					}
					// view 문자열에 answer의 문자열에 있는 문자를 insert한다.
					system("cls");
					std::cout << "현재 상태 : " << view << "\t\t" << "남은 횟수 : " << tries << std::endl;
					std::cout << "\n해당 문자를 찾았습니다." << std::endl;
					std::cout << "계속하려면 문자를 다시 입력하세요 : ";
					std::cin >> ch;
				}
			}
		}
	}
	return 0;

	*/
	
	/*
	구현 정답)
	std::string answer = "system";
	int length = answer.length();
	int tries = 0;		// 시도 횟수
	std::string view(length, '-');
	char ch;
	int pos;

	while (1) {
		system("cls");
		std::cout << "현재 상태: " << view << "\t남은 횟수: " << 10 - tries << std::endl;
		std::cout << "추측 문자 입력: ";
		std::cin >> ch;

		if (view.find(ch) != std::string::npos) {
			std::cout << "해당 문자는 이미 있습니다." << std::endl;
			system("pause");
			continue;			// 실행 흐름을 위로 올린다.
		}

		pos = answer.find(ch);

		if (pos == std::string::npos) {

			tries++;
			if (tries >= 10) {
				std::cout << "틀렸습니다. 정답은 " << answer << "입니다." << std::endl;
				break;
			}
			std::cout << "해당 문자가 없습니다." << std::endl;		// 순서에 따라 출력 유무가 바뀐다1!
		}
		else {
			while (pos != std::string::npos) {
				view[pos] = ch;
				pos = answer.find(ch, pos + 1);
			}
			if (answer == view) {
				std::cout << "정답을 맞췄습니다." << std::endl;
				break;
			}
			std::cout << "문자를 찾았습니다." << std::endl;
		}
		system("pause");
	}
	return 0;
	*/

	/*
	struct Data d;		// struct 생략 가능 (c++에서만)

	d.data1 = 10;
	d.data2 = 20;

	std::cout << "출력: " << d.data1 << ' ' << d.data2 << std::endl;
	std::cout << "d의 크기: " << sizeof(d) << std::endl;
	*/
	
	/* 
	구조체 문제)
	Q) 철수의 성적을 국어, 수학, 영어 순서로 입력 받은 뒤
	세 성적의 총합을 구조체 멤버 total에 반환해주는 함수,
	그 값을 받아 평균을 구조체 멤버 avg에 반환해주는 함수,
	평균을 비교해 등급을 구조체 멤버 grade에 반환해주는 함수를 작성하고
	main에서 각 총합, 평균, 등급을 출력하세요.
	(A, B, C, D, F(60점 미만))
	필요 변수는 구조체를 통해 선언
	
	입출력)
	국어, 수학, 영어 성적 입력:
	총합:
	평균: (두 자리)
	등급: 
	*/
	exam e;
	std::cout << "국어, 수학, 영어 성적 입력: ";
	std::cin >> e.ko >> e.math >> e.en;

	


	std::cout << "총합: " << e.total << std::endl;
	std::cout << "평균: " << e.avg << std::endl;
	std::cout << "등급: " << e.grade << std::endl;
	
	return 0;
}