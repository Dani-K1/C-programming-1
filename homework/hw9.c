#include <stdio.h>
#include <string.h>

int main(){
    char line[100];

    puts("�� ���� �Է�:");
    fgets(line, sizeof(line), stdin); // \n�� �����

    int len = strlen(line);
    for(int i=0; i<len; i++){
        if(line[i]>='A' && line[i]<='Z'){ //�� -> ��
            line[i] = (line[i] - 'A' + 'a'); 
        }
        else if(line[i]>='a' && line[i]<='z'){ //�� -> ��
            line[i] = (line[i] - 'a' + 'A'); 
        }
        // else{ //�Ƚᵵ ����.
        //     continue;
        // }
    }
    puts(line);

    return 0;
}