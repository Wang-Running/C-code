#define _CRT_SECURE_NO_WARNINGS
//力扣 622. 设计循环队列

typedef struct {
	int *a;
	int head;
	int tail;
	int k;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);

//初始化
MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	obj->a = (int*)malloc(sizeof(int)*(k + 1));
	obj->head = obj->tail = 0;
	obj->k = k;
	return obj;
}

//入队
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	if (myCircularQueueIsFull(obj))
		return false;
	obj->a[obj->tail] = value;
	if (obj->tail == obj->k)
	{
		obj->tail = 0;
	}
	else
	{
		obj->tail++;
	}
	return true;
}

//出队
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return false;
	if (obj->head == obj->k)
	{
		obj->head = 0;
	}
	else
	{
		obj->head++;
	}
	return true;
}

//获取首元素
int myCircularQueueFront(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	return obj->a[obj->head];
}

//获取尾元素
int myCircularQueueRear(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	if (obj->tail == 0)
	{
		return obj->a[obj->k];
	}
	else
	{
		return obj->a[obj->tail - 1];
	}
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
	return obj->head == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
	if (obj->tail == obj->k&&obj->head == 0)
	{
		return true;
	}
	else
	{
		return obj->tail + 1 == obj->head;
	}

}

void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj->a);
	free(obj);
}