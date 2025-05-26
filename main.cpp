//헤더 선언
#include <fstream>
#include <iostream>

//상수 선언
#define INPUT_FILE_NAME "data/input.txt"
#define OUTPUT_FILE_NAME "data/output.txt"

//변수 선언
std::ifstream in_fp;
std::ofstream out_fp;

//함수 선언
void doTask();  // 메뉴 파싱 담당

int main() {
  // 파일 입출력을 위한 초기화
  in_fp.open(INPUT_FILE_NAME);
  out_fp.open(OUTPUT_FILE_NAME);

  doTask();

  in_fp.close();
  out_fp.close();
  
  return 0;
}