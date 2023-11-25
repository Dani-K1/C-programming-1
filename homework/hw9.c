#include <stdio.h>
#include <string.h>

int main(){
    char line[100];

    puts("한 문장 입력:");
    fgets(line, sizeof(line), stdin); // \n도 저장됨

    int len = strlen(line);
    for(int i=0; i<len; i++){
        if(line[i]>='A' && line[i]<='Z'){ //대 -> 소
            line[i] = (line[i] - 'A' + 'a'); 
        }
        else if(line[i]>='a' && line[i]<='z'){ //소 -> 대
            line[i] = (line[i] - 'a' + 'A'); 
        }
        // else{ //안써도 무관.
        //     continue;
        // }
    }
    puts(line);

    return 0;
}