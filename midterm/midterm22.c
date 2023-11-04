#include <stdio.h>
#include <string.h>

//함수 결과 계산, 퀴즈 챗봇, 트리 그리기


//함수 결과 계산
int calculate(int x, int y){
    if(x>y){
        return x+y;
    } else if(x==y){
        return x*y;
    } else{ //x<y
        return x/y;
    }
}


//퀴즈 챗봇
void quiz_bot(char question[]){
    if(strcmp(question, "안녕") == 0){ //string & compare : 두문자열이 동일한지 비교,동일0/앞-/뒤+
        printf("안녕하세요!\n");
    }
    else if(strcmp(question, "이름이 뭐야?") == 0){
        printf("저는 C-ChatBot입니다.\n");
    }else{
        printf("잘 모르겠습니다.\n");
    }
}
int areStringEqual(char str1[], char str2[]){
    int i=0;
    while(str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return 0; //false
        }
        i++;
    }
    return (str1[i] == str2[i]); //true if both strings end here,1 
}
void quizBot(char question[]){
    //char str[] = "Hello"; // 문자 배열로 문자열 저장
    //char *ptr = "World";  // 문자 포인터로 문자열 저장

    if (areStringEqual(question, "안녕")){
        printf("안녕하세요!\n");
    }
    else if (areStringEqual(question, "이름이 뭐야?")){
        printf("저는 C-ChatBot입니다.\n");
    }
    else{
        printf("그건 잘 모르겠습니다.\n");
    }
}

//트리 그리기
void drawTree(int height){//5
    for(int i=0; i<height; i++){//4
        for(int j=0; j<height -i -1; j++){//-1 -2..
            printf(" ");
        }
        for(int k=0; k<2*i+1; k++){//1 3 5
            printf("*");
        }
        printf("\n");
    }
}


int main(){
    int x,y,height;
    char question[100];

    //함수 결과 테스트
    printf("문제 1 테스트: 두 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);
    printf("결과: %d\n", calculate(x,y));

    //퀴즈 쳇봇 테스트
    printf("\n문제 2 테스트: 질문을 입력하세요(안녕/이름이 뭐야?): ");
    getchar(); //버퍼를 비우기 위한 코드
    fgets(question, sizeof(question), stdin); //(저장할곳,읽어드릴문자열최대크기,표준입력/키보드입력)
    question[strcspn(question, "\n")] = '\0'; //끝에 개행\n 문자 == nUll 로바꿔줌
    //strcspn 은 1,2번쨰 문자열의 위치 인덱스 반환
    quizBot(question);

    //트리 그리기 테스트
    printf("\n문제 3 테스트: 트리의 높이를 입력: ");
    scanf("%d", &height);
    drawTree(height);

    return 0;
}

