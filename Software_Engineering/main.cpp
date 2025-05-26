//��� ����
#include <fstream>
#include <iostream>
#include <windows.h>

//��� ����
#define INPUT_FILE_NAME "data/input.txt"
#define OUTPUT_FILE_NAME "data/output.txt"

//���� ����
std::ifstream in_fp;
std::ofstream out_fp;

//�Լ� ����
void doTask();  // �޴� �Ľ� ���

int main() {
	// ���� ������� ���� �ʱ�ȭ
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	doTask();

	in_fp.close();
	out_fp.close();

	return 0;
}