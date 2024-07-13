#include <stdio.h>

struct list {
  int *fp;
} data, *p;

int main(){
  int x[] = {100, 200, 300, 400};
  p = &data;  // B => A
  p->fp = x + 1;  // fp : C+1
  printf("%d", *(++p->fp));  // fp: C+1 => C+2 => 300
}

/* 출력 결과) 300 
Data 객체 - 주소 : A
[ fp [ C+1 => C+2 ] ]

*p 객체 - 주소 : B => A => Data쪽 fp를 가리킴
[ fp [  ] ]

X 객체 - 주소 : C
100, 200, 300, 400
(C)(C+1)(C+2)(C+3)

*(++p->fp) => 주소가 C+2인 곳의 값 => 300

따라서 출력 결과는 300
*/
