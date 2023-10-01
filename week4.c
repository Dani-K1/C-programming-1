#include <stdio.h>

int main(){
    //1 - 구구단의 출력
    // int dan=0, num=1;
	// printf("몇 단? ");
	// scanf("%d", &dan);
	
	// while(num<10) 
	// {
	// 	printf("%d×%d＝%d \n", dan, num, dan*num);
	// 	num++;
	// }

    //2 - while문의 중첩을 이용한 구구단의 전체 출력
    // int cur=2;
	// int is=0;

	// while(cur<10)    // 2단부터 9단까지 반복
	// {
	// 	is=1;    // 새로운 단의 시작을 위해서
	// 	while(is<10)    // 각 단의 1부터 9의 곱을 표현
	// 	{
	// 		printf("%d×%d＝%d \n", cur, is, cur*is);
	// 		is++;
	// 	}
	// 	cur++;    // 다음 단으로 넘어가기 위한 증가
	// 	printf("\n");
	// }

    //3 - do~while문이 자연스러운 상황
    // int total=0, num=0;
	
	// do
	// {
	// 	printf("정수 입력(0 to quit): ");
	// 	scanf("%d", &num);
	// 	total += num;
	// }while(num!=0);
	// printf("합계: %d \n", total);

    //4 - for문 기반의 예제
    // int total=0;
	// int i, num;
	// printf("0부터 num까지의 덧셈, num은? ");
	// scanf("%d", &num);
	
	// for(i=0; i<num+1; i++)
	// 	total+=i;
	
	// printf("0부터 %d까지 덧셈결과: %d \n", num, total);

    //5 - for문 기반의 예제2
    // double total=0.0;
	// double input=0.0;
	// int num=0;
	
	// for( ; input>=0.0 ; )
	// {
	// 	total+=input;
	// 	printf("실수 입력(minus to quit) : ");
	// 	scanf("%lf", &input);
	// 	num++;
	// }
	// printf("평균: %f \n", total/(num-1));

    //6 - for문의 중첩을 이용한 구구단의 전체 출력
    int cur, is;
    for(cur=2; cur<10; cur++){
        for(is=1; is<10; is++){
            printf("%dX%d=%d \n", cur, is, cur*is);
        }
        printf("\n");
    }


	return 0;
}