#include <iostream>

//---- ����Ʈ �Ű����� ----
// �Լ��� �Ű������� �⺻���� �������ִ� ����
// �Ű� ������ �ݵ�� Ư�� ���� �Ѱܹ޾ƾ� ������ 
// ����Ʈ �Ű� ������ ���� �Ѱ� ���� ������ ������ �⺻���� ���� �ȴ�.
// ����Ʈ �Ű� ������ ����� ���� �Ű� ���� �ڿ� = �� �⺻���� �ۼ��ϸ� �ȴ�.
//				ex) void NumberPrint(int num = 10);
// ����Ʈ �Ű� ������ ���� �� ����� �� ������ 
// �μ� ���� �ݵ�� ���� ���� �Ű� �������� ���������� �ް� �Ǳ� ������
// ����Ʈ �Ű� ������ ���� ������ �Ű� �������� ���������� ����� �� �ִ�.
// ����Ʈ �Ű� ������ ����ϸ鼭 �Լ��� ������ ������ �� �⺻���� ���� �κп��� �ۼ����ָ� �ȴ�.

//---- �Լ� �����ε� ----
// ������ �̸��� ���� �Լ��� ���� �� �����ؼ� ����ϴ� ����
// �Լ��� ȣ���� ���� �Լ��� �̸� �Ӹ� �ƴ϶� �Ű� ������ ������ ��ġ�ؾ� �ȴ�.
// �Լ� �����ε��� ����� ����, �Ű������� Ÿ�� Ȥ�� ������ �ٸ��� �����ؾ� �ȴ�.
// �Լ� �����ε��� ����Ʈ �Ű������� ���� ����� ���� �ߺ��Ǵ� �Լ��� ������ ���� ��� Ȯ���ؾ� �ȴ�.
// �Լ��� �̸��� ������ ��ȯ ���� �ٸ��ٰ� �ؼ� �Լ� �����ε��� ����� ���� ����.

/*
void NumberPrint(int n1 = 11 , int n2 = 22);
*/

/* [Solution 1]
void SumPrint(int num, int* arr, int sum = 0) {
	for (int i = 0; i < num; i++) {
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << "���� ����: " << sum << std::endl;
}
*/

/*[Solution 2]

void SumPrint(int n1, int n2=0, int n3=0, int n4=0, int n5=0) {
	std::cout << "���� ����: " << n1 + n2 + n3 + n4 + n5 << std::endl;
}
*/

/*
void Add(int n1, int n2) {
	std::cout << "���� ��: " << n1 + n2 << std::endl;
}

void Add(double n1, double n2) {
	std::cout << "���� ��: " << n1 + n2 << std::endl;
}

void Add(int n1, int n2, int n3) {
	std::cout << "���� ��: " << n1 + n2 + n3 << std::endl;
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

void Swap(int& a, int& b) {

	int tmp = a;
	a = b;
	b = tmp;
	std::cout << "���: " << a << ' ' << b << std::endl;
}
void Swap(double& a, double& b) {
	
	double tmp = a;
	a = b;
	b = tmp;
	std::cout << "���: " << a << ' ' << b << std::endl;
}
void Swap(char& a, char& b) {
	
	char tmp = a;
	a = b;
	b = tmp;
	std::cout << "���: " << a << ' ' << b << std::endl;
}
void Input(int N) {
	system("cls");
	std::cout << "-------- ������ �ٲٱ� --------" << std::endl;
	switch (N)
	{
	case 1:
		std::cout << "�� ���� �Է�: ";
		break;
	case 2:
		std::cout << "�� �Ǽ� �Է�: ";
		break;
	case 3:
		std::cout << "�� ���� �Է�: ";
		break;
	} 
}



int main() {
	/*
	NumberPrint(15);
	*/

	/* Q1) �̷��� ������ ������ �����ؼ� �Է� ���� ��, �Է��� ���� ���� ������ִ� �Լ��� �ۼ��Ͻÿ�
	* (������ ������ �ִ� 5������ �Է¹��� �� ����)
	* ������ ����: 3
	* ���� �Է�: 61 52 35
	* ���� ����: 148
	* 
	* ������ ����: 3
	* ���� �Է�: 61 52 35
	* ���� ����: 148
	*/

	/*
	int num, arr[5];
	int sum=0;
	std::cout << "������ ����: ";
	std::cin >> num;
	if (num > 5) {
		std::cout << "������ ������ ������ ������ϴ�!" << std::endl;
		return 0;
	}
	// int* arr = new int[num];
	std::cout << "���� �Է�: ";	
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
	std::cout << "�� ��: " << Sub(20, 10) << std::endl;
	*/

	/* Q1)
	* ����, �Ǽ�, ���� �� �ϳ��� ������ Ÿ���� ��ȣ�� �����ϰ� �ش� Ÿ���� ������ �� ���� �Է¹��� ��, �����͸� �ٲ��ִ� ���α׷��� �ۼ��غ�����.
	* 
	* -------- ������ �ٲٱ� --------
	* 1. ����
	* 2. �Ǽ�
	* 3. ����
	* �Է�: 
	* 
	* -------- ������ �ٲٱ� --------
	* �� ���� �Է�: 10 20
	* ���: 20 10
	* 
	* -------- ������ �ٲٱ� --------
	* �� �Ǽ� �Է�: 10.0 20.0
	* ���: 20.0 10.0
	* 
	* 
	* -------- ������ �ٲٱ� --------
	* �� ���� �Է�: a b
	* ���: b a
	*/
	int N, num1, num2;
	double d1, d2;
	char ch1, ch2;


	std::cout << "-------- ������ �ٲٱ� --------" << std::endl;
	std::cout << "1. ����" << std::endl;
	std::cout << "2. �Ǽ�" << std::endl;
	std::cout << "3. ����" << std::endl;
	std::cout << "�Է�: ";
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
		std::cout << "1 ~ 3�� ������ ������ϴ�." << std::endl;
		break;
	}

	return 0;
}

/*
void NumberPrint(int n1, int n2)
{
	std::cout << "���: " << n1 << ' ' << n2 << std::endl;
}
*/