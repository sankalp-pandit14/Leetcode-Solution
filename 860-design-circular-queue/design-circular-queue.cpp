class MyCircularQueue {
public:
vector<int> arr;
int k;
int rear = -1;
int front = 0;
int currSize = 0;

MyCircularQueue(int k) {
    this->k = k;
    arr.resize(k);
}
bool enQueue(int value) {
    if (currSize == k) return false;
    rear = (rear + 1) % k;
    arr[rear] = value;
    currSize++;
   return true;
}
bool deQueue() {
    if (currSize == 0) return false;
    front = (front + 1) % k;
    currSize--;
    return true;
}
int Front() {
    if (currSize == 0) return -1;
    return arr[front];
}
int Rear() {
    if (currSize == 0) return -1;
    return arr[rear];
}
bool isEmpty() {
    return currSize == 0;
}
bool isFull() {
    return currSize == k;
}
};