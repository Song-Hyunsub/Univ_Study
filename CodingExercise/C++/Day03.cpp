#include <iostream>
#include <string>

//---- ���ڿ� ó�� ----
// std::string�� ����ϸ� �迭���� ���ڿ��� �� ���� ó���� �� �ִ�.
// ���� ���� ���Ŀ� ���ڿ��� ������ ��, �迭���� �ٸ��� ���� �����ڸ� ����� �� �ִ�.
// ���ڿ��� ���� ���� ���� �����ڸ� �̿��� �ξ� �����ϰ� ������ �� �ִ�.
//					ex) std::string str1 = "Abcd", str2;
//						str2 = str1;
// ���ڿ��� �̾���϶��� ��� �����ڸ� ����ؼ� �̾���� �� �ִ�.
//					ex) std::string str1 = "Abcd", str2 = "Efgh";
//						str1 = str1 + str2;
//						str1 += str2;

//---- ���ڿ� �� ----
// std::string�� ����ϸ� ���ڿ��� ���� �� �Ϲ� ������ ���� �����ڷ� ������ �� �ִ�.
// �� ���� ���ڿ��� ���� ���� ==�� �̿��ؼ� ���� ���θ� Ȯ���� �� �ִ�.
//					ex) std::string str1 = "Hello", str2 = "Hallo";
//						if (str1 == str2)
// �� ���� ���ڿ��� ���� �������� ������ �˻��� �� �ִµ� �̶��� �ε�ȣ�� ����Ѵ�.
//					ex) std::string str1 = "Hello", str2 = "Hallo";
//						if (str1 > str2)


//---- system() ----
// system("��ɾ�"): �ܼ� ȯ�濡�� �۵��Ǵ� ��ɾ ��������ִ� �Լ� (ex: system("cls"))
// system("cls"): ȭ���� �� �� �����ش�.
// system("pause"): �ƹ� Ű�� �Էµ� �� ���� ȭ���� �����ش�.

//---- ����ü ----
// ���� ���� ������� ��Ƽ� �ϳ��� ���ο� �ڷ����� ����� ����
// ����ü ���� ���� ����� ������ ���� .(��Ʈ ������)�� ����ؼ� ������ �� �ִ�.
//					ex) struct Data d;
//						d.data1 = 10;
// ����ü�� ũ��� ����ü ������� ��� ���� ũ���̴�. (ex: int���� �ϳ��� 4����Ʈ)
// 
// �⺻ ����ü ���� ����: 
//	struct ����ü �̸� {
//		���;
//	};
// ��Ī, �͸� ����ü

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
	std::string str1 = "Abcd", str2 = "Efgh";		// strcat (string catch up in c => �� ���ڸ� �̾����!)

	// str1 = str1 + str2;
	str1 += str2;

	std::cout << "str1: " << str1 << std::endl;
	*/

	/*
	std::string str1 = "Hello", str2 = "Hello";		// ���� �迭 �� �Լ� => strcmp (comparison)

	if (str1 == str2)
		std::cout << "�� ���ڿ��� �����ϴ�." << std::endl;
	else
		std::cout << "�� ���ڿ��� �ٸ��ϴ�." << std::endl;
	*/

	/*
	std::string str1 = "Hello", str2 = "Hallo";

	if (str1 > str2)
		std::cout << "str1�� �� �����ϴ�." << std::endl;
	else
		std::cout << "str1�� �� �����ϴ�." << std::endl;
	*/

	/*
	std::cout << "ABCD" << std::endl;
	system("pause");
	std::cout << "EFGH" << std::endl;
	*/

	/*
	(1) �Է��� ���ڰ� ���� �� => "�ش� ���ڰ� �����ϴ�." ��� => Ƚ���� �� �� ����
	(2) ��� Ƚ���� �������� �� => "Ʋ�Ƚ��ϴ�. ������ system�Դϴ�." ��� => ���α׷� ����
	(3) �Է��� ���ڰ� ������ �� => ���� ���¸� �ٲ��ָ� Ƚ���� ���� X
	(4) ��� ���ڸ� �� ã���� �� => "������ ������ϴ�." ��� => ���α׷� ����
	(5) �̹� ã�� ���ڸ� �Է����� �� => "�ش� ���ڴ� �̹� �ֽ��ϴ�." ��� => Ƚ�� ���� X

	���������� ��������!!!

	���)
	���� ����: ------		���� Ƚ�� : 10	// ���ڿ��� ã�� ���������� 1�� ����
	���� ���� �Է�:							//

	ã�Ҵٸ� "����Ϸ��� �ƹ�Ű�� ��������." ��� => system("pause")
	�� ���� ������ ã���� => ���� ���� - ���� �ش� ���ڷ� ��ȯ
	������ ���� �� =>

	Hint)
	std::string answer = "system";
	int length;
	int tries;
	std::string view;
	char ch;
	int pos;

	*/

	/* ������Ʈ �ǽ�
	�ʱ� ����)
	std::string answer = "system";
	int length = answer.length();
	int tries = 10;
	std::string view;
	char ch;
	int pos;

	view = "------";

	system("cls");
	std::cout << "���� ���� : " << view << "\t\t" << "���� Ƚ�� : " << tries << std::endl;
	std::cout << "�������� �Է� : ";
	std::cin >> ch;

	while (1) {
		if (tries != 1) {

			// (1) �Է��� ���ڰ� ���� �� (�Ϸ�)
			if (answer.find(ch) == std::string::npos) {
				tries--;
				system("cls");
				std::cout << "���� ���� : " << view << "\t\t" << "���� Ƚ�� : " << tries << std::endl;
				std::cout << "\n�ش� ���ڰ� �����ϴ�." << std::endl;
				std::cout << "����Ϸ��� ���ڸ� �ٽ� �Է��ϼ��� : ";
				std::cin >> ch;
			}
			// (3) �Է��� ���ڰ� ������ �� (�Ϸ�)
			else {
				for (int i = 0; i < length; i++) {
					if (i == answer.find(ch, i)) {
						view[answer.find(ch, i)] = answer[answer.find(ch, i)];		// ���ʿ��� ����
					}
				}
				// (4) ��� ���ڸ� �� ã���� ��
				if (view == answer) {
					system("cls");
					std::cout << "���� ���� : " << view << "\t\t" << "���� Ƚ�� : " << tries << std::endl;
					std::cout << "������ ������ϴ�." << std::endl;
					break;
				}
				else {
					// view ���ڿ��� answer�� ���ڿ��� �ִ� ���ڸ� insert�Ѵ�.
					system("cls");
					std::cout << "���� ���� : " << view << "\t\t" << "���� Ƚ�� : " << tries << std::endl;
					std::cout << "\n�ش� ���ڸ� ã�ҽ��ϴ�." << std::endl;
					std::cout << "����Ϸ��� ���ڸ� �ٽ� �Է��ϼ��� : ";
					std::cin >> ch;
				}
			}
			// (5) �̹� ã�� ���ڸ� �Է����� ��
			if (view.find(ch) != std::string::npos) {
				system("cls");
				std::cout << "���� ���� : " << view << "\t\t" << "���� Ƚ�� : " << tries << std::endl;
				std::cout << "\n�ش� ���ڴ� �̹� �ֽ��ϴ�." << std::endl;
				std::cout << "����Ϸ��� ���ڸ� �ٽ� �Է��ϼ��� : ";
				std::cin >> ch;
			}
		}
		// (2) ��� Ƚ���� �������� ��
		else {
			while (1) {
				if (answer.find(ch) == std::string::npos) {
					std::cout << "Ʋ�Ƚ��ϴ�. ������ system�Դϴ�." << std::endl;
					return 0;
				}
				else if (answer.find(ch) == view.find(ch)) {
					system("cls");
					std::cout << "���� ���� : " << view << "\t\t" << "���� Ƚ�� : " << tries << std::endl;
					std::cout << "\n�ش� ���ڴ� �̹� �ֽ��ϴ�." << std::endl;
					std::cout << "����Ϸ��� ���ڸ� �ٽ� �Է��ϼ��� : ";
					std::cin >> ch;
				}
				else {
					for (int i = 0; i < length; i++) {
						if (i == answer.find(ch, i)) {
							view[answer.find(ch, i)] = answer[answer.find(ch, i)];
						}
					}
					// view ���ڿ��� answer�� ���ڿ��� �ִ� ���ڸ� insert�Ѵ�.
					system("cls");
					std::cout << "���� ���� : " << view << "\t\t" << "���� Ƚ�� : " << tries << std::endl;
					std::cout << "\n�ش� ���ڸ� ã�ҽ��ϴ�." << std::endl;
					std::cout << "����Ϸ��� ���ڸ� �ٽ� �Է��ϼ��� : ";
					std::cin >> ch;
				}
			}
		}
	}
	return 0;

	*/
	
	/*
	���� ����)
	std::string answer = "system";
	int length = answer.length();
	int tries = 0;		// �õ� Ƚ��
	std::string view(length, '-');
	char ch;
	int pos;

	while (1) {
		system("cls");
		std::cout << "���� ����: " << view << "\t���� Ƚ��: " << 10 - tries << std::endl;
		std::cout << "���� ���� �Է�: ";
		std::cin >> ch;

		if (view.find(ch) != std::string::npos) {
			std::cout << "�ش� ���ڴ� �̹� �ֽ��ϴ�." << std::endl;
			system("pause");
			continue;			// ���� �帧�� ���� �ø���.
		}

		pos = answer.find(ch);

		if (pos == std::string::npos) {

			tries++;
			if (tries >= 10) {
				std::cout << "Ʋ�Ƚ��ϴ�. ������ " << answer << "�Դϴ�." << std::endl;
				break;
			}
			std::cout << "�ش� ���ڰ� �����ϴ�." << std::endl;		// ������ ���� ��� ������ �ٲ��1!
		}
		else {
			while (pos != std::string::npos) {
				view[pos] = ch;
				pos = answer.find(ch, pos + 1);
			}
			if (answer == view) {
				std::cout << "������ ������ϴ�." << std::endl;
				break;
			}
			std::cout << "���ڸ� ã�ҽ��ϴ�." << std::endl;
		}
		system("pause");
	}
	return 0;
	*/

	/*
	struct Data d;		// struct ���� ���� (c++������)

	d.data1 = 10;
	d.data2 = 20;

	std::cout << "���: " << d.data1 << ' ' << d.data2 << std::endl;
	std::cout << "d�� ũ��: " << sizeof(d) << std::endl;
	*/
	
	/* 
	����ü ����)
	Q) ö���� ������ ����, ����, ���� ������ �Է� ���� ��
	�� ������ ������ ����ü ��� total�� ��ȯ���ִ� �Լ�,
	�� ���� �޾� ����� ����ü ��� avg�� ��ȯ���ִ� �Լ�,
	����� ���� ����� ����ü ��� grade�� ��ȯ���ִ� �Լ��� �ۼ��ϰ�
	main���� �� ����, ���, ����� ����ϼ���.
	(A, B, C, D, F(60�� �̸�))
	�ʿ� ������ ����ü�� ���� ����
	
	�����)
	����, ����, ���� ���� �Է�:
	����:
	���: (�� �ڸ�)
	���: 
	*/
	exam e;
	std::cout << "����, ����, ���� ���� �Է�: ";
	std::cin >> e.ko >> e.math >> e.en;

	


	std::cout << "����: " << e.total << std::endl;
	std::cout << "���: " << e.avg << std::endl;
	std::cout << "���: " << e.grade << std::endl;
	
	return 0;
}