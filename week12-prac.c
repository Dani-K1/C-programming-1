#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ClearLineFromReadBuffer(void){ //�������� 21 - 2, ���� 2
    while(getchar()!='\n');
}
int conv(char c){
    const int diff = 1 -'1'; //1-49 =-48, ����
    return c + diff;
}

int main(){
    // �������� 21 - 1
    // printf("���ĺ� ���� �ϳ� �Է�: ");
    // char input = getchar();
    // if(input>='A' && input<='Z'){
    //     putchar(input - 'A' + 'a'); 
    // }
    // else if(input>='a' && input<='z'){
    //     putchar(input - 'a' + 'A'); 
    // }
    // else{
    //     puts("����.");
    // }

    // // �������� 21 - 2, ���� 1
    // char str[50];
    // int len, sum =0;

    // printf("���ڿ��� ���ڵ� �Է�: ");
    // fgets(str, sizeof(str), stdin);
    // len = strlen(str);
    // for(int i=0; i<len; i++){
    //     if(str[i]>='1' && str[i]<='9'){
    //         sum += conv(str[i]);
    //     }
    // }
    // printf("%d", sum);


    //�������� 21 - 2, ���� 2
    // char str1[20], str2[20], str3[40];

    // printf("ù��° ���ڿ� �Է�: ");
    // fgets(str1, sizeof(str1), stdin); // \n���ڵ� �Բ�����Ǵϱ� ���������.
    // // str1[sizeof(str1)-1] =0; // \n������ ����, �۵��� �ȵɼ� ����.
    // int length = strlen(str1);
    // if(length>0 && str1[length-1] == '\n'){
    //     str1[length -1] = '\0'; //�ηδ�ü
    // }

    // printf("�ι�° ���ڿ� �Է�: ");
    // fgets(str2, sizeof(str2), stdin);
    // // str2[sizeof(str2)-1] =0; // \n������ ����
    // int length2 = strlen(str2);
    // if(length2>0 && str2[length2-1] == '\n'){
    //     str2[length2-1] = '\0';
    // }

    // // strcpy(str3,str1); //�����ؼ� 3�� ����
    // // strcat(str3,str2); //�ΰ� �̾����.
    // sprintf_s(str3, sizeof(str3), "%s%s", str1,str2);
    // printf("������ ���: %s\n", str3);
    


    // //�������� 21 - 2, ���� 3
    // char name1[20]="0", name2[20]="0";
    // int age1,age2;

    // printf("ù��° ������� �Է�: ");
    // scanf("%s %d", name1,&age1 );

    // printf("�ι�° ������� �Է�: ");    
    // scanf(" %s %d", name2,&age2);

    // if(!strcmp(name1, name2)){
    //     printf("�̸��� ����.");
    // }else{
    //     printf("�̸��� �������� ����.");
    // }
    // if(age1 == age2){
    //     printf("���� ����.");
    // }else{
    //     printf("���̰� �������� ����.");
    // }


//fgets() - ������ ���Ե� ���ڿ��� �Է¹��� ��
// ?
// strlen() -  ���ڿ��� ���̸� ���� ��
// ?
// strcpy(), strncpy(), sprintf() -  ���ڿ��� �����ϰų� ��ĥ ��
// ?
// strcmp() - �� ���ڿ��� ������ ���� �� ������ 0 ����
// ?
// atoi() / atof() - ���ڿ��� ���� �Ǽ��� ��ȯ�� ��

    return 0;
}