// split compile (분할 컴파일)
/*
#include "struct.h"

int main()
{
  MyStruct PandaCoding = {
      "Panda",
      26,
  };

  display(PandaCoding);
  return 0;
}
*/



// 추상화와 클래스
/*
추상화 : 어떤 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것
클래스 : 추상화를 사용자 정의 데이터형으로 변환해주는 수단
*/

// 1. 데이터 은닉
// 데이터에 직접 접근하지 못하게 차단
// public : 공개 멤버, 클래스, 외부에서도 접근 가능
// private : 비공개 멤버, 클래스 내에서만 접근 가능 -> private의 데이터 값을 변경하기 위해서는 public의 함수들을 통해서만 변경 가능

#include <iostream>

using namespace std;

class Stock
{
  private:
    string name;
    int shares;
    float share_val;
    double total_val;
    void set_total() { total_val = shares * share_val; }

  public:
    void acquire(string, int, float);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock(); // 생성자
    ~Stock(); // 파괴자
};
// 생성자와 파과자는 c++에서 기본적인 디폴트 값을 제공하기 때문에 없어도 코드는 돌아감


// :: (사용 범위 결정 연산자)
// ex) Stock::acquire -> acquire이 Stock에 귀속되어 있는 함수임을 알림

void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
}

Stock::Stock() {
}

Stock::~Stock()
{

}

int main() {

	Stock temp;
	temp.acquire("Panda", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;

}