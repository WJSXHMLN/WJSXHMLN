//#include <stdio.h>
//
////����Ԫ�ظ��������е����ݴ洢������ͷβָ��
//#define Maxsize 10
//typedef struct 
//{
//	int data[Maxsize];
//	int front,rear;//����ͷβָ��
//}SqQueue;  //�������
//
////���г�ʼ��
//void InitQueue(SqQueue *Q)
//{
//	(*Q).front = (*Q).rear = 0;
//}
//
////�����п�
//int IsEmpty(SqQueue Q)
//{
//	if( Q.front == Q.rear )
//		return 0;
//	else 
//		return 1;
//}
//
////����Ԫ�����
//int EnQueue(SqQueue *Q,int x)
//{
//	//������
//	if( ((*Q).rear+1)%Maxsize  == (*Q).front )  //���һ��Ԫ���¸�λ���Զ���0
//		return 0;
//	(*Q).data[(*Q).rear] = x;
//	(*Q).rear  = ((*Q).rear+1)%Maxsize;  //��βָ���1
//	return 1;
//}
//
////����Ԫ�س���
//int DeQueue(SqQueue *Q, int *x)
//{
//	//�ܳ�������Ԫ�ظ������?
//	if( (*Q).front = (*Q).rear ) //�ӿ�
//		return 0;
//	*x = (*Q).data[(*Q).front];//��ͷԪ���ȳ�
//	(*Q).front = ((*Q).front+1)%Maxsize;//��ͷָ���1
//
//	return  *x;
//}
//
//
//int main()
//{
//	int x = 4;
//	int receive = 0;
//	SqQueue Q;//����һ������
//	InitQueue(&Q);//��ʼ������
//
//	IsEmpty(Q);//�ж϶����Ƿ�Ϊ��
//	if(receive == 0) printf("��Ϊ��\n");
//	else printf("�ǿձ�\n");
//
//	receive = EnQueue(&Q,x);//Ԫ�����
//	if(receive == 1) printf("����ɹ�,����Ԫ����%d \n",Q.data[0]);
//	else printf("����ʧ��\n");
//
//	receive = DeQueue(&Q,&x);//Ԫ�س���
//	printf("����Ԫ����:%d \n",receive);
//
//
//	return 0 ;
//}



//#include <stdio.h>
//
//int main()
//{
//	if( NULL == 0)
//		printf("null == 0");
//	else 
//		printf("null != 0");
//	return 0;
//}



//��ʽ����
#include <stdio.h>
#include <stdlib.h>

#define Maxsize 100
typedef struct 
{
	int data;  //�����������
	struct LinkLNode * next;  //�����ָ����
}LinkLNode;	  //����һ�����н��

typedef struct 
{
	LinkLNode *front , *rear; //����ͷβָ��
}LinkQueue;//����һ������


//��ʼ��ѭ������
void InitQueue(LinkQueue *Q)
{
	//Ϊ���д���һ��ͷ���
	(*Q)->front = (*Q)->rear =(LinkLNode*)malloc(sizeof(LinkLNode));
	//Ȼ���ʼ��
	(*Q)->front = NULL;
}

//Ԫ�����
int EnQueue(LinkQueue *Q,int x)
{
	//��������
	LinkLNode *p =(LinkLNode*) malloc(sizeof(LinkLNode));
	
}

int DeQueue(LinkQueue *Q,int *x)
{
	
}


int main()
{
	int x  = 5;
	LinkQueue Q;
	InitQueue(&Q);
	EnQueue(&Q,x);
	DeQueue(&Q,&x);
	return 0;
}

