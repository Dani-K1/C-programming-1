#include <stdio.h>

int main(){
    //총 5개의 정수를 배열로 한꺼번에 입력 받아서, 홀수와 짝수를 구분지어 출력하는 프로그램을 작성해 보세요

    //**int array 는 '\0' 이걸로 끝내지 않는다. 이건 string 일때만!
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