#include <stdio.h>
#include <string.h>
#include <math.h>

//1 - ����ü ������ ����� ���� ���� ����1
// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(){
//     struct point pos1, pos2;
//     double distance;
//     fputs("point1 pos: ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);
//     fputs("point2 pos: ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     distance = sqrt((double)(pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) 
//                     + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos) );
//     printf("�� ���� �Ÿ��� %g �Դϴ�.\n", distance);

//     return 0;
// }


//2 - ����ü ������ ����� ���� ���� ����2
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(void){
//     struct person man1, man2;
//     strcpy(man1.name, "�ȼ���");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age = 23;
//     printf("�̸� �Է�: "); scanf("%s", man2.name);
//     printf("��ȣ �Է�: "); scanf("%s", man2.phoneNum);
//     printf("���� �Է�: "); scanf("%d", &(man2.age));
//     printf("�̸�: %s\n", man1.name); 
//     printf("��ȣ: %s\n", man1.phoneNum); 
//     printf("����: %d\n", man1.age);
//     printf("�̸�: %s\n", man2.name); 
//     printf("��ȣ: %s\n", man2.phoneNum); 
//     printf("����: %d\n", man2.age);

//     return 0;
// }


//3 - ����ü ������ �ʱ�ȭ
// struct point
// {
//     int xpos;
//     int ypos;
// };
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(){
//     struct point pos={10,20};
//     struct person man ={"�̽±�", "010-1212-0001", 21};
//     printf("%d %d\n", pos.xpos, pos.ypos);
//     printf("%s %s %d\n", man.name, man.phoneNum, man.age);
//     return 0;
// }

//4 - ����ü �迭�� ����� ����
// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(){
//     struct point arr[3];
//     for(int i=0; i<3; i++){
//         printf("���� ��ǥ �Է�: ");
//         scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//     }
//     for(int i=0; i<3; i++){
//         printf("[%d, %d]", arr[i].xpos, arr[i].ypos);
//     }
// }

//5 - ����ü �迭�� �ʱ�ȭ ����
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(){
//     struct person arr[3] ={
//         {"�̽±�", "010-1212-0001", 21},
//         {"������", "010-1313-0002", 22},
//         {"������", "010-1717-0003", 19}
//     };
//     for(int i=0; i<3; i++){
//         printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
//     }
//     return 0;
// }

//6 - ����ü ������ ������ ���� ����
// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(){
//     struct point pos1={1, 2};
// 	struct point pos2={100, 200};
// 	struct point* pptr = &pos1;

// 	(*pptr).xpos += 4;
// 	(*pptr).ypos += 5;
// 	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

// 	pptr = &pos2;
// 	pptr->xpos += 1;
// 	pptr->ypos += 2;
// 	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
// 	return 0;
// }


//7 - ������ ������ ����ü�� ����� �����ϱ� 1
// struct point
// {
// 	int xpos;
// 	int ypos;
// };
// struct circle
// {
// 	double radius;
// 	struct point* center;
// };
// int main(void)
// {
// 	struct point cen={2, 7};
// 	double rad=5.5;

// 	struct circle ring={rad, &cen};
// 	printf("���� ������: %g \n", ring.radius);
// 	printf("���� �߽� [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
// 	return 0;
// }


//8 - ������ ������ ����ü�� ����� �����ϱ� 2
// struct point
// {
//     int xpos;
//     int ypos;
//     struct point* ptr;
// }; 
// int main(void){
//     struct point pos1 = {1,1};
//     struct point pos2 = {2,2};
//     struct point pos3 = {3,3};
//     pos1.ptr = &pos2;
//     pos2.ptr = &pos3;
//     pos3.ptr = &pos1;
//     printf("���� �������...\n");
//     printf("[%d, %d]��(��) [%d, %d] ����\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
//     printf("[%d, %d]��(��) [%d, %d] ����\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
//     printf("[%d, %d]��(��) [%d, %d] ����\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
// }

//9 - ����ü ���ǿ� typedef ����
// struct point
// {
//     int xpos;
//     int ypos;
// };
// typedef struct point Point;

// typedef struct person //�̹���� �� ���̾�
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// }Person;
// int main(){
//     Point pos={10,20};
//     Person man ={"�̽±�", "010-1212-0001", 21};
//     printf("%d %d\n", pos.xpos, pos.ypos);
//     printf("%s %s %d\n", man.name, man.phoneNum, man.age);
//     return 0;
// }

//10 - �Լ��� ���ڷ� ���޵ǰ� return���� ���� ��ȯ�Ǵ� ����ü ����
//11 - call-by-pointer�� �̿��� ����ü ����
// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;
// void ShowPosition(Point pos){
//     printf("[%d, %d]\n", pos.xpos, pos.ypos);
// }
// void OrgSymTrans(Point* ptr){ //������Ī
//     ptr->xpos = (ptr->xpos) * -1;
//     ptr->ypos = (ptr->ypos) * -1;
// }
// Point GetCurrentPosition(void){
//     Point cen;
//     printf("Input current pos: ");
//     scanf("%d %d", &cen.xpos, &cen.ypos);
//     return cen;
// }
// int main(){
//     //10
//     Point curPos = GetCurrentPosition();
//     ShowPosition(curPos);

//     //11
//     Point pos = {7,-5};
//     OrgSymTrans(&pos);
//     ShowPosition(pos);
//     OrgSymTrans(&pos);
//     ShowPosition(pos);
//     return 0;
// }

// //12 - ����ü ������ ������� ��� ������ ���� ������
// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;
// int main(){
//     Point pos1 = {1,2};
//     Point pos2;
//     pos2 = pos1;

//     printf("ũ��: %d\n", sizeof(pos1));
//     printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
//     printf("ũ��: %d\n", sizeof(pos2));
//     printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
// }

//13 - ����ü ������ ������� �� ����� ���� ���� �Լ�
// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;
// Point AddPoint(Point pos1, Point pos2){
//     Point pos = {pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
//     return pos;
// }
// Point MinPoint(Point pos1, Point pos2){
//     Point pos = {pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos};
//     return pos;
// }
// int main(){
//     Point pos1 = {5,6};
//     Point pos2 = {2,9};
//     Point result;

//     result = AddPoint(pos1, pos2);
//     printf("[%d, %d]\n", result.xpos, result.ypos);
//     result = MinPoint(pos1,pos2);
//     printf("[%d, %d]\n", result.xpos, result.ypos);
//     return 0;
// }

//14 - ��ø�� ����ü�� ���ǿ� ������ ����
typedef struct point
{
    int xpos;
    int ypos;
}Point;
typedef struct circle
{   Point cen;
    double rad;
}Circle;
void ShowCircleInfo(Circle* cptr){
    printf("[%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
    printf("radius: %g\n\n", cptr->rad);
}
int main(){
    Circle c1 = {{1,2},3.5};
    Circle c2 = {2,4, 3.9};
    ShowCircleInfo(&c1);
    ShowCircleInfo(&c2);
    return 0;
}

