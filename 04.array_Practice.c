
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

	/* [] 개의 변수를 갖는 배열, 여러 개의 변수를 함께 동시에 선언
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf(" %d people are in Subway no.%d now. \n", subway_array[i],i+1  );

	}
	


	// int size = 10 ; 하고  int arr[size] 해도 안됨!! array [ ] 안에는 : 무조건 숫자 자체를 넣어야 함
	// int arr [10] = { 1 , 2 }; 크기 10인 배열 선언 해놓고 숫자 2개만 넣으면 첫번째 두번째 제외한 나머지 8개 항은 (2항~9항) 0으로 들어감 !! 
	// int arr [] = { 1, 2}; 하면 알아서 크기가 2인 배열 생성.
	// float arr_f [ ] = { 1.0f , 2.0f } ;     -> 1.0f 이렇게 만드네 ..
		
	// 문자와 문자열
	// 문자열 끝에는 언제 끝나는지 알려주는 NULL 문자 '\0'을 넣어야 해...
	char str[7] = "coding";  // [c] [o] [d] [i] [n] [g] 6글자인데 NULL문자를 위해 크기가 7인 배열 선언...         영어는 1글자당 1byte 한글은 1글자당 2byte 
	// 그래서 char str[] = "coding" 하면 알아서 크기가 7인 배열을 만듬.
	printf("%s \n", str);
	

	// 참고 : ASCII 코드 : 미국 표준협회 ANSI에서 정의한 코드
	// 7 bit , 총 128개 코드 (0-127)
	// a: 97 A: 65 0:48 


int main(void) {
    srand((unsigned int)time(NULL));

    printf("=== Help bald person!! ===\n");
    printf("=== Find a treatment that can grow his hair ===\n\n");

    // 1. 진짜 발모제 번호 결정 (0, 1, 2, 3 중 하나)
    int treatment = rand() % 4;

    int num_ShowBottle = 0;      // 이번 회차에 보여줄 병 개수
    int pre_num_ShowBottle = 0;  // 직전 회차에 보여준 병 개수

    // 3번의 힌트 기회
    for (int i = 1; i <= 3; i++) {
        int bottles[4] = { 0, 0, 0, 0 }; // 병 선택 여부 (0:미선택, 1:선택)

        // 이전 판과 다른 개수의 병을 보여주기 위한 로직
        do {
            num_ShowBottle = (rand() % 2) + 2; // 2개 또는 3개
        } while (num_ShowBottle == pre_num_ShowBottle);
        pre_num_ShowBottle = num_ShowBottle;

        printf("> No.%d try (Showing %d potions):\n", i, num_ShowBottle);

        int is_included = 0; // 이번 힌트에 정답이 포함되었는가?
        int selected_count = 0;

        // 중복 없이 병 선택하기
        while (selected_count < num_ShowBottle) {
            int randIdx = rand() % 4; // 0~3 사이 난수

            if (bottles[randIdx] == 0) { // 아직 선택 안 된 병이라면
                bottles[randIdx] = 1;    // 선택 표시
                selected_count++;

                if (randIdx == treatment) { // 하필 그게 정답이라면?
                    is_included = 1;
                }
            }
        }

        // 선택된 병 번호 출력 (사용자에게 1~4로 보여줌)
        for (int k = 0; k < 4; k++) {
            if (bottles[k] == 1) {
                printf("%d ", k + 1);
            }
        }
        printf("potion combined... ");

        // 결과 알림
        if (is_included) {
            printf(">>> SUCCESS!! Hair grown! \n");
        }
        else {
            printf(">>> FAIL... No change. \n");
        }

        printf("Press Enter to next try...\n");
        while (getchar() != '\n'); // 버퍼 비우기 및 대기
    }

    // 최종 정답 입력
    int user_ans;
    printf("\n\nFinal Guess! What is the number of treatment? (1~4): ");
    scanf_s("%d", &user_ans);

    if (user_ans == treatment + 1) {
        printf("\n[CORRECT!] You saved his hair! \n");
    }
    else {
        printf("\n[WRONG...] He is still bald. Answer was %d. \n", treatment + 1);
    }*/


    
    //  프로젝트: 5과목 성적 계산기
// 사용자로부터 5개 과목의 점수를 입력받아 배열에 저장한 뒤, 총점과 평균을 구하고 최고 점수를 찾아내는 프로그램입니다.

// 평균 산출 함수 선언  ( sum / n )
float Make_avg(float sum, int n);


int main_array(void)
{
    int score_arr [5]  ;

    printf("Give me your mid-term test scores.\n");
    printf("Press the score of Korean , Math , English , Social , Science (Press Enter between each score) : \n");
        
    int Sum_score = 0;
    int Max_score = 0;
    
    
    for (int i = 0; i <=4; i++) {
        scanf_s("%d", &score_arr[i]);

        if (score_arr[i] >= Max_score) {
            Max_score = score_arr[i];}
        
        Sum_score = Sum_score + score_arr[i];
        }

    
    printf("\n\nSum of your score is %d\n", Sum_score);
    printf("Average of your score is %.2f\n", Make_avg(Sum_score , 5));
    printf("Your best score is %d\n", Max_score);

    return 0;
}

//평균 산출 함수 정의
float Make_avg(float sum , int n) {
    return (sum / n) ;
    }
