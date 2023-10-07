#include <stdio.h>

int main(){
    //0�̻� ����ϴ°� �������ֱ�

    int paidAmount;
    char paymentMethod;
    char membership;
    int discountAmount =0, naverPayMoney =0, naverAccount =0;
    int hyundaiCard=0, naverMembershipMore=0, totalRewards =0;

    //step 1: �ֹ��� �Է�
    printf("=== ���̹����� ���� ��� ���α׷� ===\n");
    printf("�ֹ����� �Է��ϼ���: ");
    scanf("%d", &paidAmount);
    
    //step 2: ���� ���� �Է�
    printf("\n=== ���� ���� ��� ===\n");
    // printf("a) NPay�Ӵ� ���̹����� ��������\n");
    // printf("b) NPay�Ӵ� �Ϲ� ��������\n");
    // printf("c) ���� �������\n");
    // printf("d) ���̹� ����ī�� �������\n");
    // printf("e) û������ �Ｚī�����\n");
    // printf("f) �Ϲ� ī�����\n");
    printf("a)NPay�Ӵ� ���̹����� �������� b)NPay�Ӵ� �Ϲ� �������� c)���� �������\n");
    printf("d)���̹� ����ī�� �������     e)û������ �Ｚī�����  f)�Ϲ� ī�����\n");

    printf("���� ������ �Է��ϼ���: ");
    scanf(" %c", &paymentMethod); //��ĭ �� �������! 

    while(paymentMethod < 'a' || paymentMethod >'f'){
        printf("�߸� �Է��ϼ̽��ϴ�. ���Է� �ٶ��ϴ�.\n");
        printf("���� ������ �Է��ϼ���: ");
        scanf(" %c", &paymentMethod); //��ĭ ���!
    }

    //step 3: ����� ���� ���� �Է�
    printf("\n���̹� ����ʿ� ���ԵǾ� �ֳ��� (y/n)? ");
    scanf(" %c", &membership);

    //step 4: ���
    int basicRewards = paidAmount * 0.01;

    switch (paymentMethod)
    {
    case 'a':
        naverPayMoney = paidAmount * 1.5/100;
        naverAccount = paidAmount * 0.5/100;
        break;
    case 'b':
        naverPayMoney = paidAmount * 1.5/100;
        break;
    case'c':
        break;
    case 'd':
        hyundaiCard = ((paidAmount * 0.05) > 10000)? 10000 : (paidAmount * 0.05);
        break;
    case 'e':
        if(paidAmount >= 50000){
            discountAmount = paidAmount * 0.05;
            if(discountAmount > 5000){
                discountAmount = 5000;
            }
        }
        break;
    case 'f':
        break;
    }


    if (membership =='Y' || membership == 'y'){
        if(paidAmount < 200000){
            naverMembershipMore = paidAmount * 0.04;
        } else{
            naverMembershipMore = (200000 * 0.04) + ((paidAmount - 200000) * 0.01);
            if(naverMembershipMore > 20000){
                naverMembershipMore = 20000;
            }
        }
    }

    totalRewards = basicRewards + naverPayMoney + naverAccount + hyundaiCard + naverMembershipMore;

    //step 5: ���� �� ���� ����
    printf("\n=== ���� �� ���� ���� ===\n");
    printf("�ֹ��ݾ� %d��\n", paidAmount);
    if ( discountAmount > 0){
        printf("û������ %d��\n", discountAmount);
    }
    printf("�⺻ ���� %d��\n", basicRewards);
    if(naverPayMoney >0){
        printf("���̹����� �Ӵ� �������� %d��\n", naverPayMoney);
    }
    if(naverAccount >0){
        printf("���̹����� �߰����� %d��\n", naverAccount);
    }
    if(hyundaiCard >0){
        printf("���̹� ����ī�� �߰����� %d��\n", hyundaiCard);
    }
    if(naverMembershipMore>0){
        printf("���̹� ����� �߰����� %d��\n",  naverMembershipMore);
    }
    printf("�� �������� %d���Դϴ�.\n", totalRewards);


    return 0;
}