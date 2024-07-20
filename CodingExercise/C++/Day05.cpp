#include <iostream>
#include <string>

//---- ���۷��� ----
// Reference: ����
// Ư�� ������ ���� ������ �߰������� ����� �ٸ� �̸����� ���� �����ϵ��� ����� ����
// ���۷��� ���� ���� ����: ������ ������ �ڷ���& ������ = ������ ����;
// �����Ϳ� ����� ��������, ���۷����� �޸� ������ �Ҵ���� �ʴ´�.
// ���۷��� ������ ���� �� �ݵ�� �ʱ�ȭ�� ��������� �Ѵ�.
// �ʱ�ȭ�� ������ ���� ��� ���� �ƴ� ���� �����θ� �ʱ�ȭ�� �����ϴ�.
// ���۷��� ������ �����ϰ� �ִ� ����� �ٲ� �� ����. (�ּ� ���� �Ұ�)
// &�� ������ ���� ���� �տ� �ۼ��Ǹ� �ּҸ� ��Ÿ������
// ������ �� ����ϸ� �ش� ������ ���۷������� �˷��ش�.


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
	ptr->data1 = 10; // (*ptr).data1 = 10;  => Heap ������ ����ü Data ���� data1�� 10�� ����
	ptr->data2 = 20; // (*ptr).data2 = 20;
	std::cout << "���: " << ptr->data1 << ' ' << ptr->data2 << std::endl;
	delete ptr;
	*/

	/* �ǽ�) �л��� �ο��� �Է¹޾� �ش� �ο���ŭ ������ ó���ϴ� ���α׷� �ۼ�
	* 
	�Է�)
	�л� �� �Է� : 2
	
	�л� �̸� �Է�: ö��
	ö���� ����, ����, ���� ����: 98 92 87

	�л� �̸� �Է� : �μ�
	�μ��� ����, ����, ���� ����: 98 92 87
	
	���)
	ö���� ����:
	����: 277
	���: 92.33 (�� �ڸ��������� ǥ��)
	���: A

	�μ��� ����:
	����:
	���:
	���:
	*/

	/*
	int N;
	std::cout << "�л� �� �Է�: ";
	std::cin >> N;
	std::cout << std::endl;
	student* score;
	score = new student[N];	// string ���°� �ƴϹǷ� N���� �Ҵ�
	for (int i = 0; i < N; i++) {
		std::cout << "�л� �̸� �Է�: ";
		std::cin >> score[i].name;
		std::cout << score[i].name << "�� ����, ����, ���� ����: ";
		std::cin >> score[i].kor >> score[i].mat >> score[i].eng;
		std::cout << std::endl;
		totalf(&score[i]);
		avgf(&score[i]);
		gradef(&score[i]);
	}

	std::cout.setf(std::ios::fixed);	// �Ҽ��� �������� ����
	std::cout.precision(2);		// �� �ڸ�������

	for (int i = 0; i <N; i++) {
		std::cout << std::endl;
		std::cout << score[i].name << "�� ����: "<< std::endl;
		std::cout << "����: " << score[i].total << std::endl;
		std::cout << "���: " << score[i].avg << std::endl;
		std::cout << "���: " << score[i].grade << std::endl << std::endl;
	}
	
	delete[] score;
	*/

	/*
	int num;
	int& ref = num;
	int* ptr = &num;
	ref = 5;
	std::cout << "num�� ��: " << num << std::endl;
	std::cout << "ref�� ��: " << ref << std::endl;
	std::cout << "num�� �ּ�: " << &num << std::endl; 
	std::cout << "ref�� �ּ�: " << &ref << std::endl; 
	std::cout << "ptr�� �ּ�: " << &ptr << std::endl;
	*/

	/*
	int num1, num2;
	int& ref = num1;

	num1 = 5;
	num2 = 10;

	std::cout << "���� ���� ref�� ��: " << ref << std::endl;
	std::cout << "���� ���� ref�� �ּ�: " << &ref << std::endl;
	ref = num2;
	std::cout << "���� ���� ref�� ��: " << ref << std::endl; 
	std::cout << "���� ���� ref�� �ּ�: " << &ref << std::endl;
	*/

	/* ����)
	������ ���� ���� 
	=> ���۷��� ������ ���� �ش� ������ Ư�� ��Ī�� ����� �� ��, 
	���۷��� ������ ���� ������ ������ ���� �Է� �����ÿ�.
	*/

	int num;
	int& ref = num;
	std::cout << "�Է�: ";
	std::cin >> ref;
	std::cout << "���: " << num << std::endl;

	return 0;
}