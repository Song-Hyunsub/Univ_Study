#include <iostream>

//---- 구조체 포인터 ----
// 구조체 포인터에서 역참조를 진행하는 기본적으로 ->(arrow 연산자)를 사용한다.
// 기존에 사용하던 *를 사용할 수도 있는데, 이때는 .(도트 연산자)와의 우선순위 때문에 괄호로 묶어준다.
//					ex) (*d).data1 == d->data1
// 
// 주소 = 16진수 16자리 = 2진수 64자리 = 64bit = 8byte
// 비트와 바이트 => 8bit => 1byte
// 8자리 저장 (한 자리 저장 => 한 개 bit 필요)
// char => 1byte	char* => 8
// short => 2byte	short* => 8
// int => 4byte		int* => 8
// double => 8byte	Data* => 8
// 32bit => 메모리 공간을 4byte로 사용	// x86
// 64bit => 메모리 공간을 8byte로 사용	// x64

//---- 포인터와 배열의 관계 ----
// 포인터와 배열은 상당히 밀접한 관계를 갖고 있으나, 분명한 차이점이 존재한다.
// 배열은 기본적으로 배열 공간의 시작 주소를 갖고 있다.
// 포인터와 배열은 둘 다 주소를 이용해 연산을 진행하기 때문에, [포인터를 배열처럼 인덱스를 이용해 공간에 접근할 수 있다.]
// 배열은 자기 자신의 공간은 사용하는 반면 [포인터는 다른 공간의 주소를 갖고 접근해 빌려 사용하는 개념]이다. (값 직접 변경 불가)

//---- 동적 할당 ---- (메모리 공간)
// 프로그램 중간에 메모리 공간의 크기를 필요한 만큼 할당 받고, 원하는 시점에 해제할 수 있다.
// 동적 할당의 원형: 주소를 저장할 변수 = new 자료형; 
// 동적 할당을 통해서 할당 받은 메모리 공간은 Heap 영역에 해당한다.
// 동적 할당 받은 메모리 공간을 해제할 때는 delete 해제할 공간의 주소; 형식으로 해제할 수 있다.
// 한 번의 동적 할당에는 반드시 한 번의 해제가 진행되어야 한다. (안 할 시, 나중에 메모리 누수현상 발생)
// 여러 개의 공간을 할당받고자 할 때는 new 자료형[공간의 개수]; 와 같이 배열 형식으로 진행한다.
// 배열 형식으로 할당받은 경우 delete[] 해제할 공간의 주소; 형식으로 해제할 수 있다.



/*
struct Data {
	int data1;
	int data2;
};


void Func(저장할 공간의 자료형* 변수명) {
}

void Func(Data* d) {		// 구조체 포인터
	(*d).data1 = 11;
	d->data2 = 22;
}
*/

/*
struct exam {
	int ko;
	int math;
	int en;
	int total;
	double avg;
	char grade;
};

void totalf(exam* e) {
	e->total = e->ko + e->math + e->en;
}

void avgf(exam* e) {
	e->avg = e->total / 3.0;
}

void gradef(exam* e) {
	switch ((int)e->avg / 10) {	// switch내의 변수는 정수 계열만 비교 가능
	case 10:		// 아래와 동일하면 생략 가능!!
	case 9:
		e->grade = 'A';
		break;
	case 8:
		e->grade = 'B';
		break;
	case 7:
		e->grade = 'C';
		break;
	case 6:
		e->grade = 'D';
		break;
	default:
		e->grade = 'F';
		break;
	}
}

*/

/*
struct Data {
	int data1;
	int data2;
	int data3;
	int data4;
};
*/

int main() {

	/*
	Data d;

	d.data1 = 10;
	d.data2 = 20;

	Func(&d);

	std::cout << "출력: " << d.data1 << " " << d.data2 << std::endl;
	*/

	/*
	exam e;
	std::cout << "국어, 수학, 영어 성적 입력: ";
	std::cin >> e.ko >> e.math >> e.en;

	totalf(&e);
	avgf(&e);
	gradef(&e);

	std::cout.setf(std::ios::fixed);	// 소수점 한정으로 고정
	std::cout.precision(2);		// 두 자리수까지

	std::cout << "총합: " << e.total << std::endl;
	std::cout << "평균: " << e.avg << std::endl;
	std::cout << "등급: " << e.grade << std::endl;
	*/

	/*
	Data d;	// d의 크기 : 하나당 4
	Data* pd;	// pd의 크기 : 멤버 X, 8바이트의 크기만을 갖는다.

	pd = &d;

	std::cout << "d의 크기: " << sizeof(d) << std::endl;
	std::cout << "pd 크기: " << sizeof(pd) << std::endl;

	std::cout << "pd의 값: " << pd << std::endl;	// pd의 값은 d의 주소 => 16진수
	*/

	/*
	int arr[5] = { 1, 2, 3, 4, 5 };
	std::cout << "arr의 주소: " << &arr << std::endl; 
	std::cout << "arr의 값: " << arr << std::endl;
	std::cout << "arr의 값: " << &arr[0] << std::endl;
	*/

	/*
	char str1[10] = "Hello";
	const char* str2 = "Abcde"; // 문자열을 배열의 포인터에 할당하려면 자료형을 const char* (리터럴 상수로 할당하기 때문) 로 고쳐야 함!
	*/

	/*
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	*/

	/*
	str1[0] = 'B';
	// str2[0] = 'Z';	// 실행 불가!
	std::cout << "str1: " << str1[0] << str1[1] << str1[2] << str1[3] << str1[4] << std::endl;
	std::cout << "str2: " << str2[0] << str2[1] << str2[2] << str2[3] << str2[4] << std::endl;
	*/

	/*
	int* ptr;
	
	ptr = new int;

	*ptr = 10;

	std::cout << "출력: " << *ptr << std::endl;

	delete ptr;	// 해제하지 않으면 공간이 낭비된다. => 공간이 부족해져 강제 종료될 수 있다. (메모리 누수 현상)
	*/

	/*
	int* ptr;

	ptr = new int[2];

	ptr[0] = 10;
	ptr[1] = 20;

	std::cout << "출력: " << ptr[0] << ' ' << ptr[1] << std::endl;

	delete[] ptr;	// 여러 개 공간을 해제할 때!

	return 0;
	*/


	/* 실습 예제)
	영단어를 입력 => 역순 출력
	영단어를 입력받기 전에 입력할 영단어의 길이를 먼저 입력받아 그 길이만큼 공간을 할당하시오. (해제도 꼭 해줘야 함)
	ex) 영단어 길이 입력: 5
	영단어 입력 : hello
	영단어 출력 : olleh
	*/
	int N;
	std::cout << "영단어 길이 입력: ";
	std::cin >> N;
	char* str; 
	str = new char[N+1];	// N으로 지정하면 널 값을 읽지 못함!
	std::cout << "영단어 입력: ";
	/*
	for (int i = 0; i < N; i++) {
		std::cin >> str[i];
	}
	*/
	std::cin >> str;

	std::cout << "영단어 출력: ";

	for (int i = 0; i < N; i++) {
		std::cout << str[N - i - 1];
	}

	delete[] str;

	return 0;
}
