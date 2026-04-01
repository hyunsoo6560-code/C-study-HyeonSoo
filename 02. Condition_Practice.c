# include<stdio.h>
# include <time.h>  
# include <stdlib.h>

int main (void) {

	/*버스를 탄 거야.학생 / 일반인 구분

	int age = 15;
	if (age >= 20)
	{
		printf("Gneral person.\n");
	}
	else
	{
		printf("Student\n ");
	}
	


	// 초 중 고 일반인 구분 ㄱㄱ
	// C언어의  And : &&        Or : ||        Not : !

	int age;
	printf("How old are you? \n\n");
	scanf_s("%d", &age);
	printf("Your age is %d\n", age);
	
	
	if (age < 8) {
		printf("child");
	}
	// else if 를 사용함으로써 (age >= 8) 이 보장됨   ,if를 사용하면 if문을 다 검사하지만 얘는 탈출! 컴퓨터 입장에서 더 좋지
	else if   (age <17) {
		printf("Cho Ding Jung Ding");
	}
	else if (age < 20) {
		printf("Go Ding");
	}

	else {
		printf("Sung In");
	}
	

	// break  ,   continue  
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 한다.

	for (int i = 1; i <= 30; i++) {
		printf("number %d studnet, prepare the presentaion.\n\n", i);
		if (i >= 5) {
			printf("Left members can go home now !!\n");
			break;
		}
		

	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.   , continue ; 는 pass 느낌
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {

			// == 주의
			if (i == 7) {
				printf("number %d is vacant, pass!!\n", i);
				continue;
			}

			printf("number %d Prepare !!\n", i);
		}

	}
	

	// rand() 사용법    # include <time.h>  # include <stdlib.h>
		//srand(time(NULL));  // 난수 초기화를 꼭 해주고 rand() 함수 써야됨!!!
		//int num = rand ( ) % 3; // 시작은 0이다.  0,1,2 중 하나 뽑음
	
	// 가위바위보

	printf("Rock Scissors Paper !! \nRock Scissors Paper !! \nTry to beat me !! \n\n");
	printf("Press numbers (you can press 0 , 1 , 2)\n ");
	printf("Rock is 0 \nScissors is 1 \nPaper is 2\n\n");

	int i; 
	scanf_s(" %d", &i);

	srand((unsigned int)time(NULL));
	int j = rand() % 3; // 컴퓨터 난수 생성
	// 0주먹  1가위  2보
	


	// 사용자가 이기는 경우
	if (i == 0 && j == 1 || i == 1 && j == 2 || i == 2 && j == 0) {
		printf("User: %d \nCom: %d \nUser Win !!\n", i, j);
		}

	// 컴퓨터가 이기는 경우
	else if (j == 0 && i == 1 || j == 1 && i == 2 || j == 2 && i == 0) {
		printf("User: %d \nCom: %d \nCom Win !! HAHAHA!!\n", i, j);
	}

	else {
		printf("Draw!!\n");
	}
	





	int i; // 사용자 선택
	int j; // 컴퓨터 선택

	printf("========= Rock Scissors Paper Game =========\n");
	printf("Try to beat me!! \n\n");
	printf("0 : Rock \n1 : Scissors \n2 : Paper\n");
	printf("--------------------------------------------\n");
	printf("Press number: ");

	// 1. 사용자 입력 받기
	scanf_s("%d", &i);

	if (i != 0 && i!=1 && i!=2) {
		printf("Please enter a valid number.\n");
	}

	// 2. 컴퓨터 난수 생성
	srand((unsigned int)time(NULL));
	j = rand() % 3;

	printf("\n--- Result ---\n");

	// 3. switch 문으로 사용자 선택 출력
	printf("User chose: ");
	switch (i) {
	case 0:
		printf("Rock\n");
		break;
	case 1:
		printf("Scissors\n");
		break;
	case 2:
		printf("Paper\n");
		break;
	default:
		printf("Unknown (Invalid Input)\n");
		break;
	}

	// 4. switch 문으로 컴퓨터 선택 출력
	printf("Com chose : ");
	switch (j) {
	case 0:
		printf("Rock\n");
		break;
	case 1:
		printf("Scissors\n");
		break;
	case 2:
		printf("Paper\n");
		break;
	}
	printf("--------------\n");

	// 5. 승패 판정 로직 (입력값이 0, 1, 2일 때만 실행)
	if (i >= 0 && i <= 2) {
		if (i == j) {
			printf("Draw!!\n");
		}
		else if ((i == 0 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 0)) {
			printf("User Win !! You're lucky...\n");
		}
		else {
			printf("Com Win !! HAHAHA Go away!!\n");
		}
	}
	else {
		printf("I told you to press 0, 1, or 2! You lose by default.\n");
	}


// siwtch 문 이해!!  switch(i) {  case 1; . break; ... defalut : ...  }

*/

// 프로젝트 숫자 맞추기      case 안에 부등식은 안됨!!
printf("Hey !! I will give you 5 chances !! guess my number!!! (anser : 1 ~50 integer)\n");

//정답 난수 생성
srand(time(NULL));
int ans = rand() % 50 + 1;

// 첫번째 시도
int guess;

printf("give me your first try: \n");
scanf_s("%d", &guess);
int cnt = 1;

while (cnt <= 4) {

	if (guess < ans) {
		printf("up!! \n");
	}
	else if (guess > ans)
	{
		printf("down!! \n");
	}
	else {
		break;
	}

	cnt++;
	printf("\nGive me your no.%d try \n", cnt);
	scanf_s("%d", &guess);
}



		if (guess == ans) {
			printf("\nSuccess!! \n");

		}
		else  {
		printf("\nFail!! \n");
		}

		printf("Answer : %d\n", ans);
		printf("Your final answer : %d\n", guess);
	
	





return 0;
}
