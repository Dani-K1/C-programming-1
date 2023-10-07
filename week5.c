#include <stdio.h>

int main(){

    //1 - if문을 이용한 조건적 실행
    // int num;
	// printf("정수 입력: ");
	// scanf("%d", &num);
	
	// if(num<0)     // num이 0보다 작으면 아래의 문장 실행
	// 	printf("입력 값은 0보다 작다. \n");
	
	// if(num>0)     // num이 0보다 크면 아래의 문장 실행
	// 	printf("입력 값은 0보다 크다. \n");
	
	// if(num==0)     // num이 0이면 아래의 문장 실행
	// 	printf("입력 값은 0이다. \n");


    //2 - if~else 문을 이용한 흐름의 분기
    // int num;
    // printf("정수 입력: ");
    // scanf("%d", &num);
    // if(num<0){
    //     printf("입력 값은 0보다 작다. \n");
    // }
    // else{
    //     printf("입력 값은 0보다 작지 않다. \n");
    // }


    //3 - if~else if 문의 적용
    // int opt;
    // double num1, num2;
    // double result;
    // printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
    // printf("선택?");
    // scanf("%d",&opt);
    // printf("두 개의 실수 입력: ");
    // scanf("%lf %lf", &num1, &num2);

    // if(opt==1) result = num1 + num2;
    // else if(opt==2) result = num1 - num2;
    // else if(opt==3) result = num1 * num2;
    // else result = num1 / num2;

    // printf("결과: %f\n", result);
    

    //4 - 삼항 연산자
    // int num, abs;
	// printf("정수 입력: ");
	// scanf("%d", &num);
	
    //****1
	// abs = num>0 ? num : num*(-1);
	// printf("절댓값: %d \n", abs);
    //****2
	// printf("절댓값: %d \n", (num>0)? num: num*(-1));
    //****3
    // if (num > 0){
    //     abs = num;
    // } else{
    //     abs = -num;
    // }
	// printf("절댓값: %d \n", abs);


    //5 - break! 이제 그만 빠져나가자
    // int sum=0,num=0;
    // while(1){
    //     sum += num;
    //     if(sum>5000){
    //         break; //반복문 탈출
    //     }
    //     num++;
    // }
    // printf("sum: %d\n", sum);
    // printf("num: %d\n", num);
    

    //6 - continue! 다시 처음으로
    // int num;
	// printf("start! ");
	
	// for(num=0; num<20; num++)
	// {
	// 	if(num%2==0 || num%3==0)
	// 		continue;
	// 	printf("%d ", num);
	// }
	// printf("end! \n");


    //7 - switch문 관련 예제
	// int num;
	// printf("1이상 5이하의 정수 입력: ");
	// scanf("%d", &num);
	
	// switch(num)
	// {
	// case 1:
	// 	printf("1은 ONE \n");
	// 	break;
	// case 2:
	// 	printf("2는 TWO \n");
	// 	break;
	// case 3:
	// 	printf("3은 THREE \n");
	// 	break;
	// case 4:
	// 	printf("4는 FOUR \n");
	// 	break;
	// case 5:
	// 	printf("5는 FIVE \n");
	// 	break;
	// default:
	// 	printf("I don't know! \n");
	// }


    //8 - break문을 생략한 형태의 switch문 구성(or의 의미)
	// char sel;
	// printf("M 오전, A 오후, E 저녁 \n");
	// printf("입력: ");		
	// scanf("%c", &sel);
	
	// switch(sel)
	// {
	// case 'M': 
	// case 'm':
	// 	printf("Morning \n");
	// 	break;	
	// case 'A':
	// case 'a':
	// 	printf("Afternoon \n");
	// 	break;
	// case 'E':
	// case 'e':
	// 	printf("Evening \n");
	// 	break;     // 사실 불필요한 break문! 
	// }


    //9 - goto문
    int num;
	printf("자연수 입력: ");
	scanf("%d", &num);
	
	if(num==1)
		goto ONE;
	else if(num==2)
		goto TWO; 
	else 
		goto OTHER; 

ONE:
	printf("1을 입력하셨습니다! \n");
	goto END;
TWO:
	printf("2를 입력하셨습니다! \n");
	goto END;
OTHER: 
	printf("3 혹은 다른 값을 입력하셨군요! \n");	
END:
	return 0;



    return 0;
}