#include <stdio.h>

//����1
// int Biggest(int num1, int num2, int num3){
//     int save;
//     if(num1>num2){
//         if(num1>num3) return num1;
//         else if(num1<num3) return num3;
//     }
//     else if (num1<num2)
//     {   if(num2>num3) return num2;
//         else if(num1<num3) return num3;
//     }
// }
// int MinNum(int n1, int n2, int n3){
//     if(n1<n2) return (n1<n3)? n1:n3;
//     else return (n2<n3)? n2:n3;
// }


// double CelToFah(double cel){
//     return (cel * 1.8) + 32;
// }
// double FahToCel(double fah){
//     return (fah -32 ) / 1.8;
// }

// void Fibonachi(int max){
//     int f1=0, f2 =1, f3;
//     if(max==1){
//         printf("%d", f1);
//     }
//     else{
//         printf("%d %d ", f1,f2); // 0 1
//     }
//     for(int i=0; i<max-2; i++){ // <1
//         f3 = f1+f2;
//         printf("%d ", f3);//1
//         f1 = f2; //1
//         f2 = f3; //1
//     }
// }



// int main(){
//     //�������� 09 - 1, ���� 1
//     // printf("3,4,5 �߿��� ū ���� %d �̴�. \n", Biggest(3,4,5));
//     // printf("3,4,5 �߿��� ���� ���� %d �̴�. \n", MinNum(3,4,5));

//     // //�������� 09 - 1, ���� 2
//     // printf("100ȭ���� %.2lf �� �̴�.\n", FahToCel(100));
//     // printf("37���� %.2lf ȭ�� �̴�.\n", CelToFah(37));

//     //�������� 09 - 1, ���� 3
//     int n;
//     printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ����: ");
//     scanf("%d", &n);
//     if(n<1){
//         printf("1�̻��� ���� �Է��ϼ���.\n");
//         return 1;
//     }
//     Fibonachi(n);
     

//     return 0;
// }



//����2
//�������� 09 - 2, ����1
// int total = 0;

// int AddToTotal (int num)
// {   static int total =0;
//     total += num;
//     return total;
// }

// int main()
// {   int num , i;
//     for(i = 0; i < 3; i++){
//         printf("�Է� %d: ", i +1);
//         scanf("%d", &num);
//         printf("���� : %d \n", AddToTotal(num));
//     }

//     return 0;
// }


//����3
// ���� 8
int recurMulti(int n){ //����Լ� �̿� ����
    if(n ==1) return 2;
    else return 2* recurMulti(n-1);
}
int repeMulti(int n){ //����Լ� ���̿����
    static int result =2;
    if(n ==0){
        return 1;
    }
    else
    {
        for(int i=1; i<n; i++){
            result *= 2;
        }
        return result;
    }

    // //������ ���
    // int result =1;
    // for(int i =1; i<=n; i++){
    //     result *= 2;
    // }
    // return result;

}
int main(){
    printf("2�� 4����? : %d\n",recurMulti(10));
    printf("2�� 4����? : %d\n",repeMulti(10));

}