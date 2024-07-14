#include <iostream>

//---- ����ü ������ ----
// ����ü �����Ϳ��� �������� �����ϴ� �⺻������ ->(arrow ������)�� ����Ѵ�.
// ������ ����ϴ� *�� ����� ���� �ִµ�, �̶��� .(��Ʈ ������)���� �켱���� ������ ��ȣ�� �����ش�.
//					ex) (*d).data1 == d->data1
// 
// �ּ� = 16���� 16�ڸ� = 2���� 64�ڸ� = 64bit = 8byte
// ��Ʈ�� ����Ʈ => 8bit => 1byte
// 8�ڸ� ���� (�� �ڸ� ���� => �� �� bit �ʿ�)
// char => 1byte	char* => 8
// short => 2byte	short* => 8
// int => 4byte		int* => 8
// double => 8byte	Data* => 8
// 32bit => �޸� ������ 4byte�� ���	// x86
// 64bit => �޸� ������ 8byte�� ���	// x64

//---- �����Ϳ� �迭�� ���� ----
// �����Ϳ� �迭�� ����� ������ ���踦 ���� ������, �и��� �������� �����Ѵ�.
// �迭�� �⺻������ �迭 ������ ���� �ּҸ� ���� �ִ�.
// �����Ϳ� �迭�� �� �� �ּҸ� �̿��� ������ �����ϱ� ������, [�����͸� �迭ó�� �ε����� �̿��� ������ ������ �� �ִ�.]
// �迭�� �ڱ� �ڽ��� ������ ����ϴ� �ݸ� [�����ʹ� �ٸ� ������ �ּҸ� ���� ������ ���� ����ϴ� ����]�̴�. (�� ���� ���� �Ұ�)

//---- ���� �Ҵ� ---- (�޸� ����)
// ���α׷� �߰��� �޸� ������ ũ�⸦ �ʿ��� ��ŭ �Ҵ� �ް�, ���ϴ� ������ ������ �� �ִ�.
// ���� �Ҵ��� ����: �ּҸ� ������ ���� = new �ڷ���; 
// ���� �Ҵ��� ���ؼ� �Ҵ� ���� �޸� ������ Heap ������ �ش��Ѵ�.
// ���� �Ҵ� ���� �޸� ������ ������ ���� delete ������ ������ �ּ�; �������� ������ �� �ִ�.
// �� ���� ���� �Ҵ翡�� �ݵ�� �� ���� ������ ����Ǿ�� �Ѵ�. (�� �� ��, ���߿� �޸� �������� �߻�)
// ���� ���� ������ �Ҵ�ް��� �� ���� new �ڷ���[������ ����]; �� ���� �迭 �������� �����Ѵ�.
// �迭 �������� �Ҵ���� ��� delete[] ������ ������ �ּ�; �������� ������ �� �ִ�.



/*
struct Data {
	int data1;
	int data2;
};


void Func(������ ������ �ڷ���* ������) {
}

void Func(Data* d) {		// ����ü ������
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
	switch ((int)e->avg / 10) {	// switch���� ������ ���� �迭�� �� ����
	case 10:		// �Ʒ��� �����ϸ� ���� ����!!
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

	std::cout << "���: " << d.data1 << " " << d.data2 << std::endl;
	*/

	/*
	exam e;
	std::cout << "����, ����, ���� ���� �Է�: ";
	std::cin >> e.ko >> e.math >> e.en;

	totalf(&e);
	avgf(&e);
	gradef(&e);

	std::cout.setf(std::ios::fixed);	// �Ҽ��� �������� ����
	std::cout.precision(2);		// �� �ڸ�������

	std::cout << "����: " << e.total << std::endl;
	std::cout << "���: " << e.avg << std::endl;
	std::cout << "���: " << e.grade << std::endl;
	*/

	/*
	Data d;	// d�� ũ�� : �ϳ��� 4
	Data* pd;	// pd�� ũ�� : ��� X, 8����Ʈ�� ũ�⸸�� ���´�.

	pd = &d;

	std::cout << "d�� ũ��: " << sizeof(d) << std::endl;
	std::cout << "pd ũ��: " << sizeof(pd) << std::endl;

	std::cout << "pd�� ��: " << pd << std::endl;	// pd�� ���� d�� �ּ� => 16����
	*/

	/*
	int arr[5] = { 1, 2, 3, 4, 5 };
	std::cout << "arr�� �ּ�: " << &arr << std::endl; 
	std::cout << "arr�� ��: " << arr << std::endl;
	std::cout << "arr�� ��: " << &arr[0] << std::endl;
	*/

	/*
	char str1[10] = "Hello";
	const char* str2 = "Abcde"; // ���ڿ��� �迭�� �����Ϳ� �Ҵ��Ϸ��� �ڷ����� const char* (���ͷ� ����� �Ҵ��ϱ� ����) �� ���ľ� ��!
	*/

	/*
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	*/

	/*
	str1[0] = 'B';
	// str2[0] = 'Z';	// ���� �Ұ�!
	std::cout << "str1: " << str1[0] << str1[1] << str1[2] << str1[3] << str1[4] << std::endl;
	std::cout << "str2: " << str2[0] << str2[1] << str2[2] << str2[3] << str2[4] << std::endl;
	*/

	/*
	int* ptr;
	
	ptr = new int;

	*ptr = 10;

	std::cout << "���: " << *ptr << std::endl;

	delete ptr;	// �������� ������ ������ ����ȴ�. => ������ �������� ���� ����� �� �ִ�. (�޸� ���� ����)
	*/

	
	int* ptr;

	ptr = new int[2];

	ptr[0] = 10;
	ptr[1] = 20;

	std::cout << "���: " << ptr[0] << ' ' << ptr[1] << std::endl;

	delete[] ptr;	// ���� �� ������ ������ ��!

	return 0;
}