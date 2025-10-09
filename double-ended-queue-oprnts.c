#include <stdio.h>
#define n 5

int deque[n];
int front = -1, rear = -1;

void insertRear(int value) 
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1)) 
    {
        printf("Deque is Full!\n");
    } 
    else 
    {
        if (front == -1) 
        { 
            front = rear = 0;
        } 
        else if (rear == n - 1) 
        {
            rear = 0;
        } 
        else 
        {
            rear++;
        }
        deque[rear] = value;
        printf("Inserted %d at rear.\n", value);
    }
}

void deleteFront() 
{
    if (front == -1) 
    {
        printf("Deque is Empty!\n");
    } 
    else 
    {
        printf("Deleted %d from front.\n", deque[front]);
        if (front == rear) 
        {
            front = rear = -1;
        } 
        else if (front == n- 1) 
        {
            front = 0;
        } 
        else 
        {
            front++;
        }
    }
}

void insertFront(int value) 
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1)) 
    {
        printf("Deque is Full!\n");
    } 
    else 
    {
        if (front == -1) 
        { 
            front = rear = 0;
        } 
        else if (front == 0) 
        {
            front = n - 1;
        } 
        else 
        {
            front--;
        }
        deque[front] = value;
        printf("Inserted %d at front.\n", value);
    }
}

void deleteRear() 
{
    if (front == -1) 
    {
        printf("Deque is Empty!\n");
    } 
    else 
    {
        printf("Deleted %d from rear.\n", deque[rear]);
        if (front == rear) 
        {
            front = rear = -1;
        }
        else if (rear == 0) 
        {
            rear = n- 1;
        }
        else 
        {
            rear--;
        }
    }
}

void display() 
{
    if (front == -1) 
    {
        printf("Deque is Empty!\n");
        return;
    }

    printf("Deque elements: ");
    int i;
    for (i = front; ; i = (i + 1) % n) 
    {
        printf("%d ", deque[i]);
        if (i == rear)
            break;
    }
    printf("\n");
}

int main() 
{
    int ch, value;

    do 
    {
        printf("MENU\n");
        printf("1.Insert at Rear\n2.Delete from Front\n3.Insert at Front\n4.Delete from Rear\n5.Display\n6.Exit\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                printf("Enter value to insert at rear: ");
                scanf("%d", &value);
                insertRear(value);
                break;
            case 2:
                deleteFront();
                break;
            case 3:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    } while (1);

    return 0;
}
