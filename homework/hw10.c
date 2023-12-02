#include <stdio.h>
#include <string.h>


typedef struct city
{
    char name[20];
    char country[20];
    int population;
}City;
void ClearLineFromReadBuffer(void){ //5
    while(getchar()!='\n');
}
void RemoveBSN(char str[]){//6
    int len = strlen(str);
    str[len-1]=0; //=='\n'
}

int main(){
    City arr[3];
    printf("Input three cities:\n");
    for(int i=0; i<3; i++){
        printf("������ �̸�: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strlen(arr[i].name)-1] =0;//���๮�� ����
        // RemoveBSN(arr[i].name);

        printf("���� ����: ");
        fgets(arr[i].country, sizeof(arr[i].country), stdin);
        arr[i].country[strlen(arr[i].country)-1] =0;//���๮�� ����
        // RemoveBSN(arr[i].country);

        printf("�α� ��: ");
        scanf("%d", &arr[i].population);
        // getchar();//�Է¹��������
        ClearLineFromReadBuffer();//�Է¹��� �����
    }

    puts("\nPrinting the three cities:");
    for(int i=0; i<3; i++){
        printf("%d. %s in %s with a population of %d people\n",i+1, 
                arr[i].name, arr[i].country, arr[i].population);
    }
    return 0;
}