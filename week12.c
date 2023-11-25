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
    //scanf�� ����ȭ�� �پ��� Ÿ���� ������ �Է¿� �����ϸ�, ������ ������ ������ �Է¹��� �� �����մϴ�.
    //getchar�� fputc�� �ܼ��ϰ� �������� ���� ���� �Է°� ��¿� �����ϸ�, ���� ������ �� �����մϴ�.

    //1 - ����, ����� ���� ����
    // int ch1,ch2;
    // ch1 = getchar(); //�����Է�
    // ch2 = fgetc(stdin); //����Ű �Է�

    // putchar(ch1); //�������
    // fputc(ch2, stdout); //����Ű ���

    //2 - ����, ����� ���� ����
    // int ch;
    // while (1)
    // {
    //     ch = getchar();
    //     if(ch==EOF) break; //��Ʈ��+Z or ��Ʈ��+D -> (end of file, ������ �� ǥ��)
    //     putchar(ch);
    // }

    //3 - ���ڿ� ��� �Լ�: puts, fputs
    // char* str ="Simple String";

    // printf("1. puts test ----\n");
    // puts(str);
    // puts("So Simple String"); //puts�� �ڵ��ٹٲ� ��, fputs�� �ٹٲ� �ȵ�.

    // printf("2. fputs test ----\n");
    // fputs(str, stdout);
    // printf("\n");
    // fputs("So Simple String", stdout);
    // printf("\n");
    // printf("3. end of main ----\n");

    //4 - fgets �Լ��� ȣ���� ��
    // char str[7];//�������λ��� ũ��6����
    // for(int i=0; i<3; i++){
    //     fgets(str, sizeof(str), stdin);//����Ű�� �Էµ� ���ڿ��� �Ϻη�, ���鵵 ����.
    //     printf("Read %d: %s\n", i+1, str);
    // }


    //5 - �Է¹��۴� ��� ����� �ϳ���?
    // char perID[7];
    // char name[10];

    // fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
    // fgets(perID, sizeof(perID), stdin);
    // ClearLineFromReadBuffer();//����Ű�� ����,�Է¹��� �����

    // fputs("�̸� �Է�: ", stdout);
    // fgets(name, sizeof(name), stdin);

    // printf("�ֹι�ȣ: %s\n",perID);
    // printf("�̸�: %s\n", name);
    

    //6 - ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�: strlen
    // char str[100];
    // printf("���ڿ� �Է�: ");
    // fgets(str, sizeof(str), stdin);
    // printf("����: %d, ����: %s\n", strlen(str), str);

    // RemoveBSN(str);
    // printf("����: %d, ����: %s \n", strlen(str), str);

    // 7 - strncpy �Լ��� �߸� ����� ��
    // char str1[20] ="1234567890";
    // char str2[20];
    // char str3[5];
    
    // //case1 - strcpy�� �迭�� ������ �Ѿ ���簡 ����� ���� ����
    // strcpy(str2,str1);
    // puts(str2);
    // //case2 - strncpy�̿�, �迭���� str1�� �� �´� ���̸�ŭ�� ���縦 �ϰڴ�!
    // strncpy(str3, str1, sizeof(str3));
    // puts(str3);//����.�����ϴ� �������� ���ڿ��� ���� �ǹ��ϴ� �� ���ڰ� ������� ����.
    // //case3 - 2���� �ùٸ� ����, strncpy�� �ι��� ����ؾ���.
    // strncpy(str3, str1, sizeof(str3)-1); //str3ũ�⺸�� -1��ŭ �����Ͽ�, �������� �ι��� �߰��� ���� ���ܵ�.
    // str3[sizeof(str3)-1] =0;//���������ڸ� �η� ����. �ùٸ��� ����.���ۿ����÷ο� ����
    // puts(str3);

    //8 - ���ڿ��� �����̴� �Լ���: strcat, strncat
    // char str1[20] = "First~";
    // char str2[20] = "Second";
    // char str3[20] = "Simple num: ";
    // char str4[20] = "1234567890";

    // //case1
    // strcat(str1, str2);
    // puts(str1);
    // //case2
    // strncat(str3, str4, 7); //strncat������ ���ڿ��� �ִ���̸� ����, n+1��(������)�� ���ڵ���
    // puts(str3);

    // 9 - sprintf!!!!!!!!!!!!!!!!!!!!!!!!!!!! - ���趧 ���!!!!!!!!!!!
    // char str1[5] = "123", str2[5] ="456", str3[10];
    // sprintf_s(str3, sizeof(str3), "%s%s", str1,str2);
    // printf("%s", str3);

    //10 - ���ڿ��� ���ϴ� �Լ���: strcmp, strncmp - ���� ����ϴ°�!!!!!!!!!!!!!!
    // char str1[20];
    // char str2[20];
    // printf("���ڿ� �Է� 1: ");
    // scanf("%s", str1);
    // printf("���ڿ� �Է� 2: ");
    // scanf("%s", str2);
    // if(!strcmp(str1, str2)){
    //     puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
    // }else{
    //     puts("�� ���ڿ��� �������� ����.");
    //     if(!strncmp(str1,str2,3)){
    //         puts("�׷��� �� �� ���ڴ� �����մϴ�.");
    //     }
    // }

    //11 - �� �̿��� ��ȯ�Լ��� -atoi(���ڿ�->int), atol(->long), atof(->double)
    char str[20];
    printf("���� �Է�: ");
    scanf("%s", str);
    printf("%d\n", atoi(str)); //int������ ��ȯ

    printf("�Ǽ� �Է�: ");
    scanf("%s", str);
    printf("%g\n", atof(str));//double������ ��ȯ



    return 0;
}