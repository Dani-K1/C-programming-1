#include <stdio.h>
#include <string.h>

//�Լ� ��� ���, ���� ê��, Ʈ�� �׸���


//�Լ� ��� ���
int calculate(int x, int y){
    if(x>y){
        return x+y;
    } else if(x==y){
        return x*y;
    } else{ //x<y
        return x/y;
    }
}


//���� ê��
void quiz_bot(char question[]){
    if(strcmp(question, "�ȳ�") == 0){ //string & compare : �ι��ڿ��� �������� ��,����0/��-/��+
        printf("�ȳ��ϼ���!\n");
    }
    else if(strcmp(question, "�̸��� ����?") == 0){
        printf("���� C-ChatBot�Դϴ�.\n");
    }else{
        printf("�� �𸣰ڽ��ϴ�.\n");
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
    //char str[] = "Hello"; // ���� �迭�� ���ڿ� ����
    //char *ptr = "World";  // ���� �����ͷ� ���ڿ� ����

    if (areStringEqual(question, "�ȳ�")){
        printf("�ȳ��ϼ���!\n");
    }
    else if (areStringEqual(question, "�̸��� ����?")){
        printf("���� C-ChatBot�Դϴ�.\n");
    }
    else{
        printf("�װ� �� �𸣰ڽ��ϴ�.\n");
    }
}

//Ʈ�� �׸���
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

    //�Լ� ��� �׽�Ʈ
    printf("���� 1 �׽�Ʈ: �� ������ �Է��ϼ���: ");
    scanf("%d %d", &x, &y);
    printf("���: %d\n", calculate(x,y));

    //���� �º� �׽�Ʈ
    printf("\n���� 2 �׽�Ʈ: ������ �Է��ϼ���(�ȳ�/�̸��� ����?): ");
    getchar(); //���۸� ���� ���� �ڵ�
    fgets(question, sizeof(question), stdin); //(�����Ұ�,�о�帱���ڿ��ִ�ũ��,ǥ���Է�/Ű�����Է�)
    question[strcspn(question, "\n")] = '\0'; //���� ����\n ���� == nUll �ιٲ���
    //strcspn �� 1,2���� ���ڿ��� ��ġ �ε��� ��ȯ
    quizBot(question);

    //Ʈ�� �׸��� �׽�Ʈ
    printf("\n���� 3 �׽�Ʈ: Ʈ���� ���̸� �Է�: ");
    scanf("%d", &height);
    drawTree(height);

    return 0;
}

