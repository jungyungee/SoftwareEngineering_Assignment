#include <fstream>
#include <iostream>

#define INPUT_FILE_NAME "data/input.txt"
#define OUTPUT_FILE_NAME "data/output.txt"

std::ifstream in_fp;
std::ofstream out_fp;

void doTask();  // 메뉴 파싱 담당

int main() {
  in_fp.open(INPUT_FILE_NAME);
  out_fp.open(OUTPUT_FILE_NAME);

  doTask();

  in_fp.close();
  out_fp.close();
  return 0;
}