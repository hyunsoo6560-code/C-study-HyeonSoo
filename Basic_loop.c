#include <stdio.h>

// 정수형 변수 int , printf는 무조건 " " 열어야 되나? 그래서 %d가 필요한 건가?, %d가 정수형 변수를 가져왔죠
// 실수형 변수 float , double   , %f가 float의 실수형 변수 소환 , %lf는 double의 변수 소환
// 상수형 변수 (한 번 정의하면 끝!, 보통 대문자로) , const int 
	
//scanf : 키보드 입력 받아서 저장 , scanf_s ( "%d", &input) ;
/*int main(void) {
	int input;
	printf("give me a number :");
	scanf_s("%d", &input);
	printf("\nyou press this : %d\n", input);
	
	return 0;
}


int main(void) {
	float one, two, three;

	printf("press 3 numbers : \n");
	scanf_s("%f %f %f", &one, &two ,&three);

	printf("\nyour numbers are : %.2f, %.2f, %.2f \n", one, two, three);
	
	return 0;
}
int main(void) {

		// 문자와 문자열 |  문자 선언 : char A ;   문자열 선언 : char str [256] ; 
		char str[256] ;
		scanf_s ("%s", str, sizeof (str ) ) ;  // 문자열 입력 받을 땐 & 없이 str(문자)써라. 대신 사이즈를 적어야댐 sizeof()
		printf("%s\n", str);
		


	// 프로젝트 경찰관의 조서 작성, 이름 나이 몸무게 키 범죄명
	
int main(void) {

	char name[256];
	printf("what is your name? : \n");
	scanf_s("%s", name, sizeof(name));


	int age;
	printf("what is your age? : \n");
	scanf_s("%d", &age);


	float weight;
	printf("how hevay are you?(kg) : \n");
	scanf_s("%f", &weight);


	double height;
	printf("how tall are you?(cm) : \n");
	scanf_s("%lf", &height);

	char what[256];
	printf("what did you do? : \n");
	scanf_s("%s", what, sizeof(what ));

	// 조서 내용 출력

	printf("\n\n --- crime information --- \n");
	printf("\nName: %s  \nAge: %d \nWeight: %.1f \nHeight: %.1lf \nWhat: %s \n\n", name, age, weight, height, what);


	
	return 0;
	}
 */


// 반복문을 배워보자(피라미드 쌓기)  For, While, Do While
// a++  and   ++a


/*for (선언; 조건; 증감)  {  }

int main(void) {


	for (int i = 1; i <= 10; i++)

	{
		printf("this is %dth.\n", i);


	}

	*/

 /* while 문   변수 선언 미리하고, while (조건) {}
int main (void) {
int i = 1;
while (i <= 10) {
	printf("this is %dth sentence. \n", i);
	i++;

}
*/


/* do while문.      do {} while (조건);

int main(void) {
	int i = 1;
	do {
		printf("This is %d\n", i );
		i++;
	}
		while (i <= 10); 
		*/




/*
//2중 반복문.(구구단)
int main(void) {

	printf("Let's print 99 multiply\n\n----------------------------------\n");

	for (int i = 1; i <= 9; i++)
	{
		for (int  j = 1; j <= 9; j++) {
		printf("%d X %d = %d\n", i, j, i* j );

	       }
	}
	
	*/




/*
피라미드 만들기 (반쪽부터) 
*
**
***
****
*****



int main(void) {


	for (int i = 1; i <= 5; i++) {

		
		for (int k = 1; k <= i; k++) {
			printf("*");
			
		}
		printf("\n");


	}



	return 0;
	}
	
	이번엔 반대 반쪽 피라미드 
    *
   **
  ***
 ****
*****


int main(void) {

	for (int i = 1; i <= 5; i++) {
		
			for (int j= 5-i ; j >=1 ; j--) {
				printf(" ");
			}
			
			for (int k = i; k >= 1 ; k--)
			{
				printf("*");
			}
		printf("\n");

	}
	
	
	
	return 0;
}

    *
   ***
  *****
   ***
	*
해보자 !! 
*/

int main_loop (void) {

	for (int i = 1; i <= 5; i++) {
		for (int j = 2 + abs(3 - i); j >= 1; j--) {
			printf(" ");
			}
		
		for (int k = 5-2*abs(3-i); k >= 1; k--) {
			printf("*");

		}
		for (int j = 2 + abs(3 - i) ; j >= 1; j--) {
			printf(" ");
		}

		printf("\n");

	}


	return 0;
}

// loop (반복문)까지 공부. 
