#include <stdio.h>
#define n 5

int queue[n];
int front = -1, rear = -1;

void enQueue(int value) 
{
    if (rear == n - 1) 
    {
        printf("Queue is Full");
    } 
    else 
    {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

void deQueue() 
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
        front = rear = -1;  
    } 
    else 
    {
        printf("Dequeued %d\n", queue[front]);
        front++;
        if (front > rear) 
        {
            front = rear = -1;  
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
        for (int i = front; i <= rear; i++) 
        {
            printf("%d ", queue[i]);
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
    }while(ch != 4);
    return 0;
}
