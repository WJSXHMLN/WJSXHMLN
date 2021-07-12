//#include <stdio.h>
//
////队列元素个数；队列的数据存储；队列头尾指针
//#define Maxsize 10
//typedef struct 
//{
//	int data[Maxsize];
//	int front,rear;//定义头尾指针
//}SqQueue;  //定义队列
//
////队列初始化
//void InitQueue(SqQueue *Q)
//{
//	(*Q).front = (*Q).rear = 0;
//}
//
////队列判空
//int IsEmpty(SqQueue Q)
//{
//	if( Q.front == Q.rear )
//		return 0;
//	else 
//		return 1;
//}
//
////队列元素入队
//int EnQueue(SqQueue *Q,int x)
//{
//	//满了吗
//	if( ((*Q).rear+1)%Maxsize  == (*Q).front )  //最后一个元素下个位置自动归0
//		return 0;
//	(*Q).data[(*Q).rear] = x;
//	(*Q).rear  = ((*Q).rear+1)%Maxsize;  //队尾指针加1
//	return 1;
//}
//
////队列元素出队
//int DeQueue(SqQueue *Q, int *x)
//{
//	//能出队吗？有元素给你出吗?
//	if( (*Q).front = (*Q).rear ) //队空
//		return 0;
//	*x = (*Q).data[(*Q).front];//对头元素先出
//	(*Q).front = ((*Q).front+1)%Maxsize;//队头指针加1
//
//	return  *x;
//}
//
//
//int main()
//{
//	int x = 4;
//	int receive = 0;
//	SqQueue Q;//创建一个队列
//	InitQueue(&Q);//初始化队列
//
//	IsEmpty(Q);//判断队列是否为空
//	if(receive == 0) printf("表为空\n");
//	else printf("非空表\n");
//
//	receive = EnQueue(&Q,x);//元素入队
//	if(receive == 1) printf("插入成功,插入元素是%d \n",Q.data[0]);
//	else printf("插入失败\n");
//
//	receive = DeQueue(&Q,&x);//元素出队
//	printf("出队元素是:%d \n",receive);
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



//链式队列
#include <stdio.h>
#include <stdlib.h>

#define Maxsize 100
typedef struct 
{
	int data;  //链表的数据域
	struct LinkLNode * next;  //链表的指针域
}LinkLNode;	  //创建一个队列结点

typedef struct 
{
	LinkLNode *front , *rear; //创建头尾指针
}LinkQueue;//创建一个队列


//初始化循环队列
void InitQueue(LinkQueue *Q)
{
	//为队列创建一个头结点
	(*Q)->front = (*Q)->rear =(LinkLNode*)malloc(sizeof(LinkLNode));
	//然后初始化
	(*Q)->front = NULL;
}

//元素入队
int EnQueue(LinkQueue *Q,int x)
{
	//入队随便入
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

