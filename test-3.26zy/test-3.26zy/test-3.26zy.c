#define _CRT_SECURE_NO_WARNINGS
//���� 622. ���ѭ������

typedef struct {
	int *a;
	int head;
	int tail;
	int k;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);

//��ʼ��
MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	obj->a = (int*)malloc(sizeof(int)*(k + 1));
	obj->head = obj->tail = 0;
	obj->k = k;
	return obj;
}

//���
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

//����
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

//��ȡ��Ԫ��
int myCircularQueueFront(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	return obj->a[obj->head];
}

//��ȡβԪ��
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