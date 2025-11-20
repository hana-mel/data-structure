#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert_beginning(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->prev = NULL;
    if(head == NULL)
    {
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    printf("Element %d inserted",val);
}

void insert_at_end(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
        printf("Element %d ineserted",val);
        return;
    }
    struct node *temp = head;
    while(temp-> next != NULL)
        temp = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    printf("Inserted %d at end",val);
}

void insert_at_any_pos(int val,int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    
    if(pos == 1)
    {
        insert_beginning(val);
        return;
    }
    int i;
    struct node *temp = head;
    for(i=0;i<pos-1 & temp != NULL;i++)
        temp = temp->next;
    if(temp == NULL)
    {
        printf("Invalid position\n");
        free(newnode);
        return;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if(temp->next != NULL)
        temp->next->prev = newnode;
    temp->next = newnode;
    printf("Element %d inserted at %d pos",val,pos);
}

void delete_from_beg()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    struct node *temp = head;
    printf("deleted %d from list",temp->data);
    if(head->next == NULL)
    {
        head = NULL;
        free(temp);
        return;
    }
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void delete_from_end()
{
    if(head == NULL)
    {
        printf("list is empty\n");
    }
    struct node *temp = head;
    if(head->next == NULL)
    {
        printf("Element %d deleted from list\n");
        head = NULL;
        free(temp);
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;
    printf("Element %d deleted from list",temp->data);
    temp->prev->next = NULL;
    free(temp);
}

void delete_any_pos(int pos)
{
    if(head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    if(pos == 1)
    {
        delete_from_beg();
        return;
    }
    struct node *temp = head;
    int i;
    for(i=0;i<pos-1 & temp!= NULL;i++)
        temp = temp->next;
    if(head == NULL)
    {
        printf("Invalid pos\n");
        return;
    }
    printf("Deleted %d from %d postion",temp->data,pos);
    if(temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    if(temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    free(temp);
}

void display()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    struct node *temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int ch, val, pos;
    printf("1. Insert at beginning\n2. Insert at end\n3. Insert at any position\n");
    printf("4. Delete from beginning\n5. Delete from end\n6. Delete from any position\n");
    printf("7. Display list\n8. Exit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insert_beginning(val);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &val);
                insert_at_end(val);
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d", &val);
                printf("Enter position: ");
                scanf("%d", &pos);
                insert_at_any_pos(val, pos);
                break;
            case 4:
                delete_from_beg();
                break;
            case 5:
                delete_from_end();
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                delete_any_pos(pos);
                break;
            case 7:
                display();
                break;
            case 8:
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 8);
    return 0;
}
