#include <stdio.h>

int main(){
    //�� 5���� ������ �迭�� �Ѳ����� �Է� �޾Ƽ�, Ȧ���� ¦���� �������� ����ϴ� ���α׷��� �ۼ��� ������

    //**int array �� '\0' �̰ɷ� ������ �ʴ´�. �̰� string �϶���!
    int array[5];
    int idxo =0, idxe =0;
    int odd[5], even[5];

    printf("Please input five integers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);

        if(array[i]%2 ==0){ //even
            even[idxe] = array[i];
            idxe++;
        }
        else{ //odd
            odd[idxo] = array[i];
            idxo++;
        }
    }
    
    printf("Odd numbers:");
    for(int i=0; i<idxo; i++){
        printf("%d ",odd[i]);
    }
    printf("\n");

    printf("Even numbers:");
    for(int i=0; i<idxe; i++){
        printf("%d ",even[i]);
    }
    printf("\n");

    return 0;
}