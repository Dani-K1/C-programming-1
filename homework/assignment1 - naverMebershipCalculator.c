#include <stdio.h>

int main(){
    //0이상만 출력하는거 수정해주기

    int paidAmount;
    char paymentMethod;
    char membership;
    int discountAmount =0, naverPayMoney =0, naverAccount =0;
    int hyundaiCard=0, naverMembershipMore=0, totalRewards =0;

    //step 1: 주문액 입력
    printf("=== 네이버페이 결제 계산 프로그램 ===\n");
    printf("주문액을 입력하세요: ");
    scanf("%d", &paidAmount);
    
    //step 2: 결제 수단 입력
    printf("\n=== 결제 수단 목록 ===\n");
    // printf("a) NPay머니 네이버통장 충전결제\n");
    // printf("b) NPay머니 일반 충전결제\n");
    // printf("c) 계좌 간편결제\n");
    // printf("d) 네이버 현대카드 간편결제\n");
    // printf("e) 청구할인 삼성카드결제\n");
    // printf("f) 일반 카드결제\n");
    printf("a)NPay머니 네이버통장 충전결제 b)NPay머니 일반 충전결제 c)계좌 간편결제\n");
    printf("d)네이버 현대카드 간편결제     e)청구할인 삼성카드결제  f)일반 카드결제\n");

    printf("결제 수단을 입력하세요: ");
    scanf(" %c", &paymentMethod); //한칸 꼭 띄워야함! 

    while(paymentMethod < 'a' || paymentMethod >'f'){
        printf("잘못 입력하셨습니다. 재입력 바랍니다.\n");
        printf("결제 수단을 입력하세요: ");
        scanf(" %c", &paymentMethod); //한칸 띄기!
    }

    //step 3: 멤버십 가입 여부 입력
    printf("\n네이버 멤버십에 가입되어 있나요 (y/n)? ");
    scanf(" %c", &membership);

    //step 4: 계산
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

    //step 5: 결제 및 적립 내역
    printf("\n=== 결제 및 적립 내역 ===\n");
    printf("주문금액 %d원\n", paidAmount);
    if ( discountAmount > 0){
        printf("청구할인 %d원\n", discountAmount);
    }
    printf("기본 적립 %d원\n", basicRewards);
    if(naverPayMoney >0){
        printf("네이버페이 머니 결제적립 %d원\n", naverPayMoney);
    }
    if(naverAccount >0){
        printf("네이버통장 추가적립 %d원\n", naverAccount);
    }
    if(hyundaiCard >0){
        printf("네이버 현대카드 추가적립 %d원\n", hyundaiCard);
    }
    if(naverMembershipMore>0){
        printf("네이버 멤버십 추가적립 %d원\n",  naverMembershipMore);
    }
    printf("총 적립액은 %d원입니다.\n", totalRewards);


    return 0;
}