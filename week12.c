#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ClearLineFromReadBuffer(void){ //5
    while(getchar()!='\n');
}
void RemoveBSN(char str[]){//6
    int len = strlen(str);
    str[len-1]=0; //=='\n'
}

int main(){
    //scanf는 형식화된 다양한 타입의 데이터 입력에 적합하며, 복잡한 데이터 구조를 입력받을 때 유용합니다.
    //getchar와 fputc는 단순하고 직접적인 단일 문자 입력과 출력에 적합하며, 버퍼 관리가 더 간단합니다.

    //1 - 문자, 입출력 관련 예제
    // int ch1,ch2;
    // ch1 = getchar(); //문자입력
    // ch2 = fgetc(stdin); //엔터키 입력

    // putchar(ch1); //문자출력
    // fputc(ch2, stdout); //엔터키 출력

    //2 - 문자, 입출력 관련 예제
    // int ch;
    // while (1)
    // {
    //     ch = getchar();
    //     if(ch==EOF) break; //컨트롤+Z or 컨트롤+D -> (end of file, 파일의 끝 표현)
    //     putchar(ch);
    // }

    //3 - 문자열 출력 함수: puts, fputs
    // char* str ="Simple String";

    // printf("1. puts test ----\n");
    // puts(str);
    // puts("So Simple String"); //puts는 자동줄바꿈 됨, fputs는 줄바꿈 안됨.

    // printf("2. fputs test ----\n");
    // fputs(str, stdout);
    // printf("\n");
    // fputs("So Simple String", stdout);
    // printf("\n");
    // printf("3. end of main ----\n");

    //4 - fgets 함수의 호출의 예
    // char str[7];//마지막널빼고 크기6저장
    // for(int i=0; i<3; i++){
    //     fgets(str, sizeof(str), stdin);//엔터키의 입력도 문자열의 일부로, 공백도 읽음.
    //     printf("Read %d: %s\n", i+1, str);
    // }


    //5 - 입력버퍼는 어떻게 비워야 하나요?
    // char perID[7];
    // char name[10];

    // fputs("주민번호 앞 6자리 입력: ", stdout);
    // fgets(perID, sizeof(perID), stdin);
    // ClearLineFromReadBuffer();//엔터키가 남음,입력버퍼 지우기

    // fputs("이름 입력: ", stdout);
    // fgets(name, sizeof(name), stdin);

    // printf("주민번호: %s\n",perID);
    // printf("이름: %s\n", name);
    

    //6 - 문자열의 길이를 반환하는 함수: strlen
    // char str[100];
    // printf("문자열 입력: ");
    // fgets(str, sizeof(str), stdin);
    // printf("길이: %d, 내용: %s\n", strlen(str), str);

    // RemoveBSN(str);
    // printf("길이: %d, 내용: %s \n", strlen(str), str);

    // 7 - strncpy 함수를 잘못 사용한 예
    // char str1[20] ="1234567890";
    // char str2[20];
    // char str3[5];
    
    // //case1 - strcpy는 배열의 범위를 넘어서 복사가 진행될 위험 있음
    // strcpy(str2,str1);
    // puts(str2);
    // //case2 - strncpy이용, 배열길이 str1에 딱 맞는 길이만큼만 복사를 하겠담!
    // strncpy(str3, str1, sizeof(str3));
    // puts(str3);//오류.복사하는 과정에서 문자열의 끝을 의미하는 널 문자가 복사되지 않음.
    // //case3 - 2번의 올바른 사용법, strncpy는 널문자 고려해야함.
    // strncpy(str3, str1, sizeof(str3)-1); //str3크기보다 -1만큼 복사하여, 마지막에 널문자 추가할 공간 남겨둠.
    // str3[sizeof(str3)-1] =0;//마지막문자를 널로 설정. 올바르게 종료.버퍼오버플로우 방지
    // puts(str3);

    //8 - 문자열을 덧붙이는 함수들: strcat, strncat
    // char str1[20] = "First~";
    // char str2[20] = "Second";
    // char str3[20] = "Simple num: ";
    // char str4[20] = "1234567890";

    // //case1
    // strcat(str1, str2);
    // puts(str1);
    // //case2
    // strncat(str3, str4, 7); //strncat덧붙일 문자열의 최대길이를 제한, n+1개(널포함)의 문자덧붙
    // puts(str3);

    // 9 - sprintf!!!!!!!!!!!!!!!!!!!!!!!!!!!! - 시험때 사용!!!!!!!!!!!
    // char str1[5] = "123", str2[5] ="456", str3[10];
    // sprintf_s(str3, sizeof(str3), "%s%s", str1,str2);
    // printf("%s", str3);

    //10 - 문자열을 비교하는 함수들: strcmp, strncmp - 많이 사용하는것!!!!!!!!!!!!!!
    // char str1[20];
    // char str2[20];
    // printf("문자열 입력 1: ");
    // scanf("%s", str1);
    // printf("문자열 입력 2: ");
    // scanf("%s", str2);
    // if(!strcmp(str1, str2)){
    //     puts("두 문자열은 완벽히 동일합니다.");
    // }else{
    //     puts("두 문자열은 동일하지 않음.");
    //     if(!strncmp(str1,str2,3)){
    //         puts("그러나 앞 세 글자는 동일합니다.");
    //     }
    // }

    //11 - 그 이외의 변환함수들 -atoi(문자열->int), atol(->long), atof(->double)
    char str[20];
    printf("정수 입력: ");
    scanf("%s", str);
    printf("%d\n", atoi(str)); //int형으로 변환

    printf("실수 입력: ");
    scanf("%s", str);
    printf("%g\n", atof(str));//double형으로 변환



    return 0;
}