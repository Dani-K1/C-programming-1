#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ClearLineFromReadBuffer(void){ //연습문제 21 - 2, 문제 2
    while(getchar()!='\n');
}
int conv(char c){
    const int diff = 1 -'1'; //1-49 =-48, 차이
    return c + diff;
}

int main(){
    // 연습문제 21 - 1
    // printf("알파벳 문자 하나 입력: ");
    // char input = getchar();
    // if(input>='A' && input<='Z'){
    //     putchar(input - 'A' + 'a'); 
    // }
    // else if(input>='a' && input<='z'){
    //     putchar(input - 'a' + 'A'); 
    // }
    // else{
    //     puts("오류.");
    // }

    // // 연습문제 21 - 2, 문제 1
    // char str[50];
    // int len, sum =0;

    // printf("문자열인 숫자들 입력: ");
    // fgets(str, sizeof(str), stdin);
    // len = strlen(str);
    // for(int i=0; i<len; i++){
    //     if(str[i]>='1' && str[i]<='9'){
    //         sum += conv(str[i]);
    //     }
    // }
    // printf("%d", sum);


    //연습문제 21 - 2, 문제 2
    // char str1[20], str2[20], str3[40];

    // printf("첫번째 문자열 입력: ");
    // fgets(str1, sizeof(str1), stdin); // \n문자도 함께저장되니까 지워줘야함.
    // // str1[sizeof(str1)-1] =0; // \n문자의 삭제, 작동이 안될수 잇음.
    // int length = strlen(str1);
    // if(length>0 && str1[length-1] == '\n'){
    //     str1[length -1] = '\0'; //널로대체
    // }

    // printf("두번째 문자열 입력: ");
    // fgets(str2, sizeof(str2), stdin);
    // // str2[sizeof(str2)-1] =0; // \n문자의 삭제
    // int length2 = strlen(str2);
    // if(length2>0 && str2[length2-1] == '\n'){
    //     str2[length2-1] = '\0';
    // }

    // // strcpy(str3,str1); //복사해서 3에 저장
    // // strcat(str3,str2); //두개 이어붙임.
    // sprintf_s(str3, sizeof(str3), "%s%s", str1,str2);
    // printf("조합의 결과: %s\n", str3);
    


    // //연습문제 21 - 2, 문제 3
    // char name1[20]="0", name2[20]="0";
    // int age1,age2;

    // printf("첫번째 사람정보 입력: ");
    // scanf("%s %d", name1,&age1 );

    // printf("두번째 사람정보 입력: ");    
    // scanf(" %s %d", name2,&age2);

    // if(!strcmp(name1, name2)){
    //     printf("이름이 동일.");
    // }else{
    //     printf("이름이 동일하지 않음.");
    // }
    // if(age1 == age2){
    //     printf("나이 동일.");
    // }else{
    //     printf("나이가 동일하지 않음.");
    // }


//fgets() - 공백이 포함된 문자열을 입력받을 때
// ?
// strlen() -  문자열의 길이를 구할 때
// ?
// strcpy(), strncpy(), sprintf() -  문자열을 복사하거나 합칠 때
// ?
// strcmp() - 두 문자열이 같은지 비교할 때 같으면 0 리턴
// ?
// atoi() / atof() - 문자열을 정수 실수로 변환할 때

    return 0;
}