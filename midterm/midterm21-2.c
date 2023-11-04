#include <stdio.h>
#include <string.h>

//�ܱ�/���� ��ȯ, ��Ģ����, ��и� ���, GS25 �����ǳ����
// (���̵� �� 15�� 1����, �� 25�� 2����, �� 35�� 1����)

//��Ģ����
//�ΰ��� ������ �ϳ��� ������ �Է¹޾�, ������ ���
int calculate(int a, int b, char op){
    switch (op)
    {
    case '+': 
        return a+b; //�����ؼ� �극��ũ ���ص���
    case '-': 
        return a-b;
    case '*': 
        return a*b;
    case '/': 
        if (b != 0){
            return a/b;
        }
        else{
            printf("0���� ���� �� �����ϴ�.\n");
            return -1;    
        }
    default:
        printf("��ȿ���� ���� �������Դϴ�.\n");
        return -1;
    }
}


//��и� ���
//����ڷκ��� x, y ��ǥ�� �Է�, ��ǥ�� ��ġ�� ��и��� ���
int determineQuadrant(int x, int y){
    if(x>0 && y>0){
        return 1;
    } else if(x<0 && y>0){
        return 2;
    } else if(x<0 && y<0){
        return 3;
    } else if(x>0 && y<0){
        return 4;
    } else{
        return 5;
    }

}

//GS25 �����ǳ����
//����ڷκ��� �پ��� ���� �̸��� ������ �Է¹޾�
// ������ ����� �����ϰ�, 
//��ü ���� ����Ʈ�� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻʽÿ�. 
//�ִ� 5���� ���Ḹ ���� �����մϴ�.
void inputDrink(char drinks[][50], int prices[], int *total){
    for(int i=0; i<5; i++){
        printf("���� �̸��� �Է��ϼ��� (�����Ϸ��� 'end' �Է�): ");
        scanf("%s", drinks[i]);
        if (strcmp(drinks[i], "end") == 0) {
            break;
        }
        printf("���� ������ �Է��ϼ���: ");
        scanf("%d", &prices[i]);
        *total += prices[i];
    }
}
void displayDrinks(char drinks[][50], int prices[], int total){
    printf("\n������ ����� ���� ����Ʈ:\n");
    for (int i = 0; i < 5 && strcmp(drinks[i], "end") != 0; i++) {
        printf("%s: %d��\n", drinks[i], prices[i]);
    }
    printf("\n�� ����: %d��\n", total);
}


int main(){

    //�ܱ�/���� ��ȯ
    //����(��: 2023)�� �Է¹޾�, �ܱ�(��: 23)�� ����ϴ� ���α׷�
    int year;
    printf("���� ������ �Է��ϼ���: "); //2023
    scanf("%d", &year);

    printf("�ܱ�: %d\n", year % 100); //23


    //��Ģ����
    int a,b,result;
    char op;
    printf("�� ���� ������ �Է�(��: 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    result = calculate(a, b ,op);
    if(result != -1){
        printf("���: %d\n", result);
    } else{
        printf("����");
    }
    
    //��и� ���
    int x,y,quadrant;

    printf("x, y ��ǥ�� �Է�: ");
    scanf("%d %d", &x, &y);

    quadrant = determineQuadrant(x, y);

    switch (quadrant)
    {
    case 1:
        printf("%d, %d = 1��и�\n", x, y);
        break;
    case 2:
        printf("%d, %d = 2��и�\n", x, y);
        break;
    case 3:
        printf("%d, %d = 3��и�\n", x, y);
        break;
    case 4:
        printf("%d, %d = 4��и�\n", x, y);
        break;
    case 5:
        printf("%d, %d = ��ǥ�� ���� ��ġ\n", x, y);
        break;
    }

    //GS25 �����ǳ����
    char drinks[5][50];
    int prices[5];
    int total = 0;

    inputDrink(drinks, prices, &total);
    displayDrinks(drinks, prices, total);


    return 0;
}