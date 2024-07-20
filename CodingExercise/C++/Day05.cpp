#include <iostream>
#include <string>

//---- 레퍼런스 ----
// Reference: 참조
// 특정 변수에 대한 별명을 추가적으로 만들어 다른 이름으로 접근 가능하도록 만드는 개념
// 레퍼런스 변수 선언 원형: 저장할 변수의 자료형& 변수명 = 저장할 변수;
// 포인터와 비슷해 보이지만, 레퍼런스는 메모리 공간이 할당되지 않는다.
// 레퍼런스 변수는 선언 시 반드시 초기화를 진행해줘야 한다.
// 초기화를 진행할 때는 상수 값이 아닌 변수 값으로만 초기화가 가능하다.
// 레퍼런스 변수는 지정하고 있는 대상을 바꿀 수 없다. (주소 변경 불가)
// &는 선언이 끝난 변수 앞에 작성되면 주소를 나타내지만
// 선언할 때 사용하면 해당 변수가 레퍼런스임을 알려준다.


/*
struct Data {
	int data1;
	int data2;
};
*/

/*
struct student {
	std::string name;
	int kor;
	int mat;
	int eng;
	double avg;
	int total;
	char grade;
};

void totalf(student* score) {
	score->total = score->kor + score->mat + score->eng;
}

void avgf(student* score) {
	score->avg = score->total / 3.0;
}

void gradef(student* score) {
	switch ((int)score->avg / 10) {
	case 10:
	case 9:
		score->grade = 'A';
		break;
	case 8:
		score->grade = 'B';
		break;
	case 7:
		score->grade = 'C';
		break;
	case 6:
		score->grade = 'D';
		break;
	default:
		score->grade = 'F';
		break;
	}
}
*/

int main() {
	/*
	Data* ptr;
	ptr = new Data;
	ptr->data1 = 10; // (*ptr).data1 = 10;  => Heap 영역의 구조체 Data 내의 data1에 10을 저장
	ptr->data2 = 20; // (*ptr).data2 = 20;
	std::cout << "출력: " << ptr->data1 << ' ' << ptr->data2 << std::endl;
	delete ptr;
	*/

	/* 실습) 학생의 인원을 입력받아 해당 인원만큼 성적을 처리하는 프로그램 작성
	* 
	입력)
	학생 수 입력 : 2
	
	학생 이름 입력: 철수
	철수의 국어, 수학, 영어 성적: 98 92 87

	학생 이름 입력 : 민수
	민수의 국어, 수학, 영어 성적: 98 92 87
	
	출력)
	철수의 성적:
	총합: 277
	평균: 92.33 (두 자리수까지만 표기)
	등급: A

	민수의 성적:
	총합:
	평균:
	등급:
	*/

	/*
	int N;
	std::cout << "학생 수 입력: ";
	std::cin >> N;
	std::cout << std::endl;
	student* score;
	score = new student[N];	// string 형태가 아니므로 N개만 할당
	for (int i = 0; i < N; i++) {
		std::cout << "학생 이름 입력: ";
		std::cin >> score[i].name;
		std::cout << score[i].name << "의 국어, 수학, 영어 성적: ";
		std::cin >> score[i].kor >> score[i].mat >> score[i].eng;
		std::cout << std::endl;
		totalf(&score[i]);
		avgf(&score[i]);
		gradef(&score[i]);
	}

	std::cout.setf(std::ios::fixed);	// 소수점 한정으로 고정
	std::cout.precision(2);		// 두 자리수까지

	for (int i = 0; i <N; i++) {
		std::cout << std::endl;
		std::cout << score[i].name << "의 성적: "<< std::endl;
		std::cout << "총합: " << score[i].total << std::endl;
		std::cout << "평균: " << score[i].avg << std::endl;
		std::cout << "등급: " << score[i].grade << std::endl << std::endl;
	}
	
	delete[] score;
	*/

	/*
	int num;
	int& ref = num;
	int* ptr = &num;
	ref = 5;
	std::cout << "num의 값: " << num << std::endl;
	std::cout << "ref의 값: " << ref << std::endl;
	std::cout << "num의 주소: " << &num << std::endl; 
	std::cout << "ref의 주소: " << &ref << std::endl; 
	std::cout << "ptr의 주소: " << &ptr << std::endl;
	*/

	/*
	int num1, num2;
	int& ref = num1;

	num1 = 5;
	num2 = 10;

	std::cout << "변경 전의 ref의 값: " << ref << std::endl;
	std::cout << "변경 전의 ref의 주소: " << &ref << std::endl;
	ref = num2;
	std::cout << "변경 후의 ref의 값: " << ref << std::endl; 
	std::cout << "변경 후의 ref의 주소: " << &ref << std::endl;
	*/

	/* 예제)
	정수형 변수 선언 
	=> 레퍼런스 변수를 통해 해당 변수에 특정 별칭을 만들어 준 후, 
	레퍼런스 변수를 통해 정수형 변수에 값을 입력 받으시오.
	*/

	int num;
	int& ref = num;
	std::cout << "입력: ";
	std::cin >> ref;
	std::cout << "출력: " << num << std::endl;

	return 0;
}