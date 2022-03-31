#define _CRT_SECURE_NO_WARNINGS
//力扣 622. 设计循环队列

//typedef struct {
//	int *a;
//	int head;
//	int tail;
//	int k;
//} MyCircularQueue;
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj);
//bool myCircularQueueIsFull(MyCircularQueue* obj);
//
////初始化
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	obj->a = (int*)malloc(sizeof(int)*(k + 1));
//	obj->head = obj->tail = 0;
//	obj->k = k;
//	return obj;
//}
//
////入队
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if (myCircularQueueIsFull(obj))
//		return false;
//	obj->a[obj->tail] = value;
//	if (obj->tail == obj->k)
//	{
//		obj->tail = 0;
//	}
//	else
//	{
//		obj->tail++;
//	}
//	return true;
//}
//
////出队
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return false;
//	if (obj->head == obj->k)
//	{
//		obj->head = 0;
//	}
//	else
//	{
//		obj->head++;
//	}
//	return true;
//}
//
////获取首元素
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	return obj->a[obj->head];
//}
//
////获取尾元素
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj))
//		return -1;
//	if (obj->tail == 0)
//	{
//		return obj->a[obj->k];
//	}
//	else
//	{
//		return obj->a[obj->tail - 1];
//	}
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	return obj->head == obj->tail;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	if (obj->tail == obj->k&&obj->head == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return obj->tail + 1 == obj->head;
//	}
//
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->a);
//	free(obj);
//}

//力扣 232. 用栈实现队列

//typedef int Datatype;
//
//typedef struct Stack
//{
//	Datatype* a;
//	int top;   //栈顶位置
//	int capacity;   //容量
//}ST;
//
//void StackInit(ST* ps);
//
//void StackDestory(ST* ps);
//
//void StackPush(ST* ps, Datatype x);
//
//void StackPop(ST* ps);
//
////判断栈是否为空
//bool StackEmpty(ST* ps);
//
////数据个数
//int StackSize(ST* ps);
//
////访问栈顶数据
//Datatype StackTop(ST* ps);
//
//
////初始化
//void StackInit(ST* ps)
//{
//	assert(ps);
//	ps->a = NULL;
//	ps->capacity = 0;
//	ps->top = 0;
//}
//
////销毁
//void StackDestory(ST* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->capacity = ps->top = 0;
//}
//
//void StackPush(ST* ps, Datatype x)
//{
//	assert(ps);
//	if (ps->top == ps->capacity)
//	{
//		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		ps->a = realloc(ps->a, newcapacity*sizeof(Datatype));
//		if (ps->a == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		ps->capacity = newcapacity;
//	}
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(ps->top>0);
//	ps->top--;
//}
//
////判断栈是否为空
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//	//if (ps->top > 0)
//	//{
//	//	return false;
//	//}
//	//else
//	//{
//	//	return true;
//	//}
//	return ps->top == 0;
//}
//
////数据个数
//int StackSize(ST* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//
////访问栈顶数据
//Datatype StackTop(ST* ps)
//{
//	assert(ps);
//	assert(ps->top>0);
//	return ps->a[ps->top - 1];
//}
//
//
//
//
//
//typedef struct {
//	ST Pushs1;
//	ST Pops2;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	assert(obj);
//	StackInit(&obj->Pushs1);
//	StackInit(&obj->Pops2);
//	return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	assert(obj);
//	StackPush(&obj->Pushs1, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//	assert(obj);
//	//s2空时需要push进s1元素才能出
//	if (StackEmpty(&obj->Pops2))
//	{
//		while (!StackEmpty(&obj->Pushs1))
//		{
//			StackPush(&obj->Pops2, StackTop(&obj->Pushs1));
//			StackPop(&obj->Pushs1);
//		}
//	}
//	int front = StackTop(&obj->Pops2);
//	StackPop(&obj->Pops2);
//	return front;
//}
//
//int myQueuePeek(MyQueue* obj) {
//	assert(obj);
//	if (StackEmpty(&obj->Pops2))
//	{
//		while (!StackEmpty(&obj->Pushs1))
//		{
//			StackPush(&obj->Pops2, StackTop(&obj->Pushs1));
//			StackPop(&obj->Pushs1);
//		}
//	}
//	return StackTop(&obj->Pops2);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->Pushs1) && StackEmpty(&obj->Pops2);
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestory(&obj->Pushs1);
//	StackDestory(&obj->Pops2);
//	free(obj);
//}





//力扣 225. 用队列实现栈


typedef int QDatatype;

//定义单链表结点
typedef struct QueueNode
{
	QDatatype data;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* pq);

void QueueDestory(Queue* pq);

void QueuePush(Queue* pq, QDatatype x);

void QueuePop(Queue* pq);

bool QueueEmpty(Queue* pq);

size_t QueueSize(Queue* pq);

QDatatype QueueFront(Queue* pq);

QDatatype QueueBack(Queue* pq);



//队列初始化
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

//队列销毁
void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}

//队尾插入
void QueuePush(Queue* pq, QDatatype x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head == NULL)
	{
		assert(pq->tail == NULL);
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}

//队头删除
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head&&pq->tail);

	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}

}

//判断是否为空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL&&pq->tail == NULL;
}

//队列元素个数
size_t QueueSize(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	size_t size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

//对头元素
QDatatype QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}

//队尾元素
QDatatype QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->tail);
	return pq->tail->data;
}


typedef struct {
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate() {
	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
	assert(pst);
	QueueInit(&pst->q1);
	QueueInit(&pst->q2);
	return pst;
}

void myStackPush(MyStack* obj, int x) {
	assert(obj);
	if (!QueueEmpty(&obj->q1))
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj) {
	assert(obj);
	//判断空和非空是哪个
	Queue* emptyQ = &obj->q1;
	Queue* nonemptyQ = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		emptyQ = &obj->q2;
		nonemptyQ = &obj->q1;
	}

	//把非空队列前N个数据导入空队列
	//剩下一个删除实现后进先出
	while (QueueSize(nonemptyQ)>1)
	{
		QueuePush(emptyQ, QueueFront(nonemptyQ));
		QueuePop(nonemptyQ);
	}
	int top = QueueFront(nonemptyQ);
	QueuePop(nonemptyQ);
	return top;
}

int myStackTop(MyStack* obj) {
	assert(obj);
	if (!QueueEmpty(&obj->q1))
	{
		return QueueBack(&obj->q1);
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}

bool myStackEmpty(MyStack* obj) {
	assert(obj);
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
	assert(obj);
	QueueDestory(&obj->q1);
	QueueDestory(&obj->q2);
	free(obj);
}