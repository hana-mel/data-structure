#include <stdio.h>
#define n 8
int queue[n];
int front = -1, rear = -1;

void enQueue(int value) 
{
    if ((rear + 1) % n == front) 
    {
        printf("Queue is Full\n");
    } 
    else 
    {
        if (front == -1) 
        front = 0;
        rear = (rear + 1) % n;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

void deQueue() 
{
    if (front == -1) 
    {
        printf("Queue is Empty\n");
    } 
    else 
    {
        printf("Dequeued %d\n", queue[front]);
        if (front == rear) 
        {
            front = rear = -1;
        } 
        else 
        {
            front = (front + 1) % n;
        }
    }
}

void display() 
{
    if (front == -1) 
    {
        printf("Queue is empty\n");
    } 
    else 
    {
        printf("Queue elements: ");
        int i = front;
        while (1) 
        {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % n;
        }
        printf("\n");
    }
}

int main() 
{
    int ch, value;
    do
    {
        printf("MENU\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) 
        {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enQueue(value);
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    } while(ch != 4);
    return 0;
}
