#include <stdio.h>

int main(){
    //1 - �������� ���
    // int dan=0, num=1;
	// printf("�� ��? ");
	// scanf("%d", &dan);
	
	// while(num<10) 
	// {
	// 	printf("%d��%d��%d \n", dan, num, dan*num);
	// 	num++;
	// }

    //2 - while���� ��ø�� �̿��� �������� ��ü ���
    // int cur=2;
	// int is=0;

	// while(cur<10)    // 2�ܺ��� 9�ܱ��� �ݺ�
	// {
	// 	is=1;    // ���ο� ���� ������ ���ؼ�
	// 	while(is<10)    // �� ���� 1���� 9�� ���� ǥ��
	// 	{
	// 		printf("%d��%d��%d \n", cur, is, cur*is);
	// 		is++;
	// 	}
	// 	cur++;    // ���� ������ �Ѿ�� ���� ����
	// 	printf("\n");
	// }

    //3 - do~while���� �ڿ������� ��Ȳ
    // int total=0, num=0;
	
	// do
	// {
	// 	printf("���� �Է�(0 to quit): ");
	// 	scanf("%d", &num);
	// 	total += num;
	// }while(num!=0);
	// printf("�հ�: %d \n", total);

    //4 - for�� ����� ����
    // int total=0;
	// int i, num;
	// printf("0���� num������ ����, num��? ");
	// scanf("%d", &num);
	
	// for(i=0; i<num+1; i++)
	// 	total+=i;
	
	// printf("0���� %d���� �������: %d \n", num, total);

    //5 - for�� ����� ����2
    // double total=0.0;
	// double input=0.0;
	// int num=0;
	
	// for( ; input>=0.0 ; )
	// {
	// 	total+=input;
	// 	printf("�Ǽ� �Է�(minus to quit) : ");
	// 	scanf("%lf", &input);
	// 	num++;
	// }
	// printf("���: %f \n", total/(num-1));

    //6 - for���� ��ø�� �̿��� �������� ��ü ���
    int cur, is;
    for(cur=2; cur<10; cur++){
        for(is=1; is<10; is++){
            printf("%dX%d=%d \n", cur, is, cur*is);
        }
        printf("\n");
    }


	return 0;
}