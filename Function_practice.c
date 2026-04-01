# include <stdio.h>
# include <time.h>

// 함수 정의는 main 함수 밖에서 !!!
// 함수 정의





// 함수 선언
// 반환형 함수이름 (전달값)
// 반환형이 void면 return값이 필요 없지만 int, double 등..은 return이 필요하다
	/* void p(int num);



	int n = 2;
	p(n);
	

	//파라미터(전달값)가 없는/있는 함수
	
	
	//곱하기 게임을 만들어 보자!! (while 내부에서 변수를 정의하면 while 밖에서 인식 불가....)
	srand(time(NULL));
	
	
		int cnt = 1;
		int fail_cnt = 0;
		int Max_cnt;
		printf("How many probelms you would try? \n\n");
		printf("_______________________________\n");
		scanf_s("%d", &Max_cnt);

		while ( cnt <= Max_cnt) {
			
			int a = rand() % 20 + 1;
			int b = rand() % 20 + 1;
			int try;
			
			printf("\n%d X %d = ? \n\n", a, b);
			scanf_s("%d", &try);
			
				if (try != a * b) {
					fail_cnt ++;
					break;
			}
			cnt++;
		}
		
		if (fail_cnt == 0) {

			printf("Success\n");
		}
		else {
			printf("Fail\n");
		}
		
		
		return 0;
}



	calculate_avg 함수(int형 반환) :

		정수 3개를 매개변수로 받아 평균을 계산해 반환(return) 합니다.

		print_status 함수(void형) :

		평균 점수를 매개변수로 받습니다.

		평균이 80점 이상이면 "Pass", 아니면 "Fail"을 출력합니다. (반환값 없음)

		main 함수 :

	사용자로부터 점수 3개를 scanf_s로 입력받습니다.

		calculate_avg를 호출해 평균을 구하고, 그 결과를 print_status에 전달합니다 


		int Calculate_avg (int n1, int n2 ,int n3);
		void print_status(int avg);

		int main(void) {
			int result1; int result2; int result3;

			printf("give me three results \n");
			scanf_s(" %d %d %d" , &result1, &result2, &result3);

			print_status(Calculate_avg(result1, result2, result3));


			return 0;
		}



		int Calculate_avg(int n1, int n2, int n3) {
			return (n1 + n2 + n3) / 3;}
		

		void print_status(int avg) {
			if (avg >= 80)
				printf("pass \n");

			else { printf("fail\n"); }	}    */

// 문이 5개가 있고 각 문마다 점점 어려운 수식 퀴즈가 출제 , 맞히면 통과 틀리면 탈락!!

int Make_multiply_Problem(int a, int b);


int main_function_profject (void) {
	srand(time(NULL));

	printf("I will give you 5 problems!! Solve all these problems!! \n");
	printf("problems will be getting harder !! \n\n");

	int err_cnt = 0;
	int cnt = 0;
	while (err_cnt < 1 && cnt <5) {

		err_cnt= Make_multiply_Problem(3*cnt,3*cnt);
		cnt++;

	}


	if (err_cnt == 0) {
		printf("success \n");
	}
	else {
		printf("Fail !! \n");
	}


	return 0;
}


int Make_multiply_Problem(int a, int b) {
	int c;
	int error_cnt = 0;

	a = rand() %4 +a;
	b = rand() %4 +b;
	printf("\n%d X %d = ? \n", a, b);
	scanf_s("%d", &c);

	if (c == a*b) {
		printf("Pass!!\n");
	}
	else {
		error_cnt++;
	}

	return error_cnt;
}
// for문으로도 가능~ a=rand() % (a+3) +1 ;  이렇게 범위에 괄호 쳐서 가능~
