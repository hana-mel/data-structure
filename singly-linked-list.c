#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_at_beginning(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    printf("Inserted %d at beginning: ",val);
}

void insert_at_end(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    printf("Inserted %d at end",val);
}

void insert_at_any(int val,int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
        printf("Inserted %d ",val);
        return;
    }
    struct node *temp = head;
    for(int i =0;i<pos-1 && temp != NULL;i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Invalid input\n");
        free(newnode);
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    printf("Inserted %d at %d",val,pos);
}

void delete_from_beg()
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    printf("Deleted %d from beginning\n",temp->data);
    free(temp);
}

void delete_from_end()
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(head->next == NULL)
    {
        printf("Deleted %d from end\n",head->data);
        free(head);
        head = NULL;
        return;
    }
    struct node *temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;
    printf("Deleted %d from end",temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void delete_fromany_pos(int pos)
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
    for(int i =0;i<pos-1 && temp != NULL;i++)
        temp = temp->next;
    if(temp == NULL && temp->next == NULL)
    {
        printf("Invalid positon\n");
        return;
    }
    struct node *del = temp->next;
    temp -> next = del->next;
    printf("Deleted %d from positon %d",del->data,pos);
    free(del);
}

void display()
{
    if(head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    struct node *temp = head;
    printf("Linked list: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int ch, val, pos;

    printf("MENU\n");
    printf("1. Insert at beginning\n2. Insert at end\n3. Insert at any position\n");
    printf("4. Delete from beginning\n5. Delete from end\n6. Delete from any position\n");
    printf("7. Display list\n8. Exit\n");

    do
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                insert_at_beginning(val);
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
                insert_at_any(val, pos);
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
                delete_fromany_pos(pos);
                break;

            case 7:
                display();
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 8);

    return 0;
}
