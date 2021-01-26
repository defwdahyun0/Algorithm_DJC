#include <stdio.h>

int main()
{
	int score;

	scanf("%d", &score);

	//시험 점수를 입력받아 90 ~100점은 A, 80 ~89점은 B, 70 ~79점은 C, 60 ~69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
	if (90 <= score && score <= 100) printf("A");
	else if (80 <= score && score <= 89) printf("B");
	else if (70 <= score && score <= 79) printf("C");
	else if (60 <= score && score <= 69) printf("D");
	else printf("F");
	
}