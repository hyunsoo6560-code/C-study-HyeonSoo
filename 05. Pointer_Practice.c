# include <stdio.h>
void swap(int a, int b);
void swap_address(int *a, int *b);
void change_array(int *a);
int main_pointer (void) {
	/*
	// 포인터

	// [다람쥐] 101호 -> 메모리 공간의 주소
	// [거북이] 201호
	// [햄스터] 301호

	// 각 암호가 걸려 있음
	int squirrel = 1; // 암호
	int turtle = 2;
	int hamster = 3;

	printf(" squirrel adress :%d PW : %d \n", &squirrel, squirrel);  // &변수이름 으로 저장된 메모리 공간의 주소를 불러옴
	printf(" turtle adress :%d PW : %d \n", &turtle, turtle);
	printf(" hamster adress :%d PW : %d \n", &hamster, hamster);


	// 미션맨 : 아파트 각 집에 방문해서 문에 적힌 암호 확인 !!

	int *mission_man;   // 포인터 변수 선언
	mission_man = &squirrel;
	printf(" mission man visit address : %d, PW : %d\n\n", mission_man, *mission_man);   // 주소를 먹여서 그 값은 *로 불러온다 !! 포인터 변수.


	// 2nd 미션 : 각 암호에 3을 곱해라

	mission_man = &squirrel;
	*mission_man  *= 3 ;
	printf("mission man changes squirrel PW : %d\n", *mission_man);


	// 스파이
	// 미션맨이 바꾼 암호에서 2를 빼라 !
	// int *spy = mission_man;       // spy랑 mission_man 2개의 포인터 변수가 하나의 메모리 주소를 가리키고 있음.
	printf("\n Spy is doing betray ... \n");

	int *spy = &squirrel;
	*spy = *spy - 2;   // squirrel = squirrel -2 랑 같음

	printf("\n spy visiting address : %d,  PW : %d\n", spy, *spy);

	printf(" mission_manl adreess :%d,  PW : %d\n", mission_man, *mission_man);   // * spy와 * mission_man 포인터 변수가 가리키는 메모리 주소가 같기에 *spy 값을 바꾸면 *misison_man 값도 바뀜.*/




	// 배열과 포인터의 관계
	//int arr[3] = { 5, 10, 15 };
	//int *ptr = arr;
	//for (int i = 0; i < 3; i++) {

	//	printf("arr[%d] is : %d \n", i, arr[i]);    // arr[i]  랑   *(arr + i) 같은 표현이다 ... arr 자체가 주소 느낌인 건가,,
	//}
	//printf("\n");
	//for (int i = 0; i < 3; i++) {

	//	printf("pointer ptr[%d] is : %d \n", i, ptr[i]);
	//}

	//ptr [0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;

	//printf("\n change!! -------------\n");
	//for (int i = 0; i < 3; i++) {

	//	printf("arr[%d] is : %d \n", i, arr[i]);
	//}
	//printf("\n");
	//for (int i = 0; i < 3; i++) {
	//	// arr = arr 배열의 첫번째 값의 주소와 동일 =  & arr [0]         : 포인터와 배열의 대칭성 !!   arr 자체는 주소고 arr [i]가 *ptr 느낌.. []가 * 느낌 아닌교 ..
	//	// 그럼 * arr = arr[0]= * &arr[0] 이겠죠 !
	//	printf("pointer ptr[%d] is : %d \n", i, ptr[i]);


	// swap !!

//	int a = 10;
//	int b = 20;
//	// a와 b의 값을 바꾼다 !  (배열 정렬할 때 쓰겠네)
//	printf("\n Before Swap => a=%d, b=%d\n", a, b);
//	swap(a, b);
//	printf("After Swap (call boy value) => a=%d, b=%d\n", a, b);
//	// 값에 의한 복사 (Call by Value) 함수 밖에선 안바뀜...
//	// 메모리 공간에 있는 주소값 자체를 넘기자!
//
//	printf("\n Before Swap => a=%d, b=%d\n", a, b);
//	swap_address(&a, &b);
//	printf(" After Swap(call by adress) = > a = % d, b = % d\n", a, b);
//
//
//	return 0;
//}
//
//
//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 애초에 주소를 매개변수로 주자!! (바깥 세계관과 함수 내 세계꽌 연결)
//void swap_address(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}



// 네가 만약 배열의 3번째 항의 값을 바꾸고 싶어
int arr2[3] = { 10, 20, 30 };
change_array(arr2);
for (int i = 0; i < 3; i++) {
	printf("arr[%d]= %d\n",i, arr2[i]);
}

	return 0;
}
//함수 정의 어떤 문자열 array를 받아서 그 array의 [2]항을 50으로 바꾸는 함수
void change_array( int *arr ) {
	*(arr + 2) = 50;
	}
