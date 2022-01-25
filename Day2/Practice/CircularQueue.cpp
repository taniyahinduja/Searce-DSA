#include <iostream>
using namespace std;
#define MAX 100
class queue
{
    int front = -1, rear = -1;
    int q[MAX];

public:
    void enqueue(int data)
    {
        // if(front == -1 && rear == -1){
        //     front = rear = 0;
        // }
        if ((rear + 1) % MAX == front)
        {
            cout << "Queue is full" << endl;
            cout << "Front " << front << endl;
            cout << "Rear " << rear << endl;
        }
        else
        {
            rear = (rear + 1) % MAX;
            q[rear] = data;
        }
        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else if (front == rear)
        {
            cout << q[front] << " removed" << endl;
            front = rear = -1;
        }
        else
        {
            cout << q[front] << " removed" << endl;
            front = (front + 1) % MAX;
        }
    }
    void display()
    {
        for (int i = front; i != rear; i = (i + 1) % MAX)
            cout << q[i] << endl;
    }
};
int main()
{
    queue q1;
    int n, num;
    cout << "Enter the number of elements in the queue" << endl;
    cin >> num;
    cout << "Enter the elements of the queue" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        q1.enqueue(n);
    }
    cout<<"The Elements of the queue are"<<endl;
    q1.display();
    // q1.enqueue(11);
    // q1.dequeue();
    // q1.display();
}