#include <stdio.h>

int main(){

    //1 - if���� �̿��� ������ ����
    // int num;
	// printf("���� �Է�: ");
	// scanf("%d", &num);
	
	// if(num<0)     // num�� 0���� ������ �Ʒ��� ���� ����
	// 	printf("�Է� ���� 0���� �۴�. \n");
	
	// if(num>0)     // num�� 0���� ũ�� �Ʒ��� ���� ����
	// 	printf("�Է� ���� 0���� ũ��. \n");
	
	// if(num==0)     // num�� 0�̸� �Ʒ��� ���� ����
	// 	printf("�Է� ���� 0�̴�. \n");


    //2 - if~else ���� �̿��� �帧�� �б�
    // int num;
    // printf("���� �Է�: ");
    // scanf("%d", &num);
    // if(num<0){
    //     printf("�Է� ���� 0���� �۴�. \n");
    // }
    // else{
    //     printf("�Է� ���� 0���� ���� �ʴ�. \n");
    // }


    //3 - if~else if ���� ����
    // int opt;
    // double num1, num2;
    // double result;
    // printf("1.���� 2.���� 3.���� 4.������\n");
    // printf("����?");
    // scanf("%d",&opt);
    // printf("�� ���� �Ǽ� �Է�: ");
    // scanf("%lf %lf", &num1, &num2);

    // if(opt==1) result = num1 + num2;
    // else if(opt==2) result = num1 - num2;
    // else if(opt==3) result = num1 * num2;
    // else result = num1 / num2;

    // printf("���: %f\n", result);
    

    //4 - ���� ������
    // int num, abs;
	// printf("���� �Է�: ");
	// scanf("%d", &num);
	
    //****1
	// abs = num>0 ? num : num*(-1);
	// printf("����: %d \n", abs);
    //****2
	// printf("����: %d \n", (num>0)? num: num*(-1));
    //****3
    // if (num > 0){
    //     abs = num;
    // } else{
    //     abs = -num;
    // }
	// printf("����: %d \n", abs);


    //5 - break! ���� �׸� ����������
    // int sum=0,num=0;
    // while(1){
    //     sum += num;
    //     if(sum>5000){
    //         break; //�ݺ��� Ż��
    //     }
    //     num++;
    // }
    // printf("sum: %d\n", sum);
    // printf("num: %d\n", num);
    

    //6 - continue! �ٽ� ó������
    // int num;
	// printf("start! ");
	
	// for(num=0; num<20; num++)
	// {
	// 	if(num%2==0 || num%3==0)
	// 		continue;
	// 	printf("%d ", num);
	// }
	// printf("end! \n");


    //7 - switch�� ���� ����
	// int num;
	// printf("1�̻� 5������ ���� �Է�: ");
	// scanf("%d", &num);
	
	// switch(num)
	// {
	// case 1:
	// 	printf("1�� ONE \n");
	// 	break;
	// case 2:
	// 	printf("2�� TWO \n");
	// 	break;
	// case 3:
	// 	printf("3�� THREE \n");
	// 	break;
	// case 4:
	// 	printf("4�� FOUR \n");
	// 	break;
	// case 5:
	// 	printf("5�� FIVE \n");
	// 	break;
	// default:
	// 	printf("I don't know! \n");
	// }


    //8 - break���� ������ ������ switch�� ����(or�� �ǹ�)
	// char sel;
	// printf("M ����, A ����, E ���� \n");
	// printf("�Է�: ");		
	// scanf("%c", &sel);
	
	// switch(sel)
	// {
	// case 'M': 
	// case 'm':
	// 	printf("Morning \n");
	// 	break;	
	// case 'A':
	// case 'a':
	// 	printf("Afternoon \n");
	// 	break;
	// case 'E':
	// case 'e':
	// 	printf("Evening \n");
	// 	break;     // ��� ���ʿ��� break��! 
	// }


    //9 - goto��
    int num;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);
	
	if(num==1)
		goto ONE;
	else if(num==2)
		goto TWO; 
	else 
		goto OTHER; 

ONE:
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;
OTHER: 
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���! \n");	
END:
	return 0;



    return 0;
}