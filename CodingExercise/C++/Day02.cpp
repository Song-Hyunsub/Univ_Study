#include <iostream>
#include <string>

//---- std::string ----
// std::string�� ����ϱ� ���ؼ��� �ݵ�� string ��������� ��������� �Ѵ�.
// ���ڿ��� ������ ������ ������ ���� std::string ������;  �������� ������ �� �ִ�.
//				ex) std::string str;
// std::string�� �̿��� ������ ��� ���� �ʱ�ȭ ������� �ʱ�ȭ�� �� �ִ�.
// Ư�� ������ ������ �����ؼ� �ʱ�ȭ �� �� �ִµ� �̶���  ������(����, '����') �������� ������ �� �ִ�.
//				ex) std::string str(5, 'a'); => "aaaaa"
// �迭�� ���������� �ε����� �̿��ؼ� ������ ������ �� �ִ�.

//---- std::getline() ----
// std::getline() �Լ��� ������ ���ڿ��� �Է¹��� �� ��ü ������ �Է� �޴� �Լ��� �� ���� �Ű� ������ ���´�.
// ù ��° �Ű� ������ �Է� ����� ����, �� ��° �Ű� ������ ������ ������ �ۼ��ϸ� �ȴ�.
//				ex) std::string str;
//					std::getline(std::cin, str);
// 

//---- ���ڿ� ���� �Լ� ----
// std::string�� ��� ������ ���ڿ� ���� �Լ��� ����� �� ������ �߰����� ��� �Լ����� �������� �Ѵ�.
// �̶��� std::string �̶�� �ڷ����� ���� ���� �ڿ� .�� �ٿ��� ����� �� �ִ�.
// str.length(); ���ڿ��� ���̸� ��ȯ
// str.insert(�ε���, ���ڿ�): �ۼ��� �ε��� ��ġ�� ���ڿ��� ����
// str.find(���� Ȥ�� ���ڿ�): �Ѱ��� ����, ���ڿ��� ã�Ƽ� �ش� ��ġ�� index�� ��ȯ
// str.find(���� Ȥ�� ���ڿ�, �ε���): �ش� �ε������� ����, ���ڿ��� ã�Ƽ� �ش� ��ġ�� index�� ��ȯ
//									(�ش� �����͸� ã�� ���� ��� std::string::npos�� ���� ��ȯ�Ѵ�.)
// str.clear(): ����Ǿ� �ִ� ���ڿ��� ����
// 
// 
// 
// 
// 



int main() {

	/*
	std::string str;		// �������� ���̸� �Է¹��� => �Ҵ� �ʿ� X
	std::cout << "�Է�: ";
	std::cin >> str;
	std::cout << "���: " << str << std::endl;
	*/

	/*
	std::string str = "Hello";
	std::cout << "���: " << str << std::endl;
	*/

	/*
	std::string str(7, 'd');
	std::cout << "���: " << str << std::endl;
	*/

	/*
	std::string str = "hello";
	std::cout << "���: " << str[0] << str[1] << str[2] << str[3] << str[4] << std::endl;
	*/

	/* �ǽ� 2: (�ٽ� Ǯ���)
	�ֹε�Ϲ�ȣ�� �Է� �ް� '-'�� ���ŵ� ���·� ����Ͻÿ�. (�ֹι�ȣ�� ���ڿ��� ����ؾ� �Ѵ�.)
	
	std::string rrn;
	std::cout << "�ֹε�Ϲ�ȣ �Է�: ";
	std::cin >> rrn;
	std::cout << "�ֹε�Ϲ�ȣ ���: ";
	for (int i = 0; i < 14; i++) {
		if (rrn[i] != '-') std::cout << rrn[i];
	}
	*/

	/*
	std::string str;

	std::cout << "�Է�: ";
	std::getline(std::cin, str);		// cin.getline => ���ڿ������� �Ұ�! => getline���� ��ü

	std::cout << "���: " << str << std::endl;
	*/

	/*
	std::string str = "Hello";
	std::cout << "����: " << str.length() << std::endl;	// strlen�� ���ڿ����� ��� X

	str.insert(2, "Abcd");
	std::cout << "str: " << str << std::endl;

	std::cout << "ù ��° l�� ��ġ: " << str.find('l') << std::endl;
	std::cout << "�� ��° l�� ��ġ: " << str.find('l', 7) << std::endl;		// 7 ���� ������ ã�ƺ���!
	std::cout << "a�� ��ġ: " << str.find('a') << std::endl;		// npos ���� ��µ�!
	std::cout << "npos�� ��: " << std::string::npos << std::endl;

	str.clear();
	std::cout << "str: " << str << std::endl;
	*/

	/* �ǽ� 3�� : program�̶�� ���ڿ����� �츮�� �Է��� ���ڸ� ã���ִ� ���α׷��� �ۼ��ϼ���.
	* 
	��� ����)

	ã�� ���� �Է�: q
	�ش� ���ڴ� �������� �ʽ��ϴ�.
	----
	ã�� ���� �Է�: a
	���ڸ� ã�ҽ��ϴ�.
	*/

	std::string str = "Program";
	char c;
	std::cout << "ã�� ���� �Է�: ";
	std::cin >> c;
	if (str.find(c) != std::string::npos) {
		std::cout << "\n���ڸ� ã�ҽ��ϴ�." << std::endl;
	}
	else std::cout << "\n�ش� ���ڴ� �������� �ʽ��ϴ�." << std::endl;


	return 0;
}
