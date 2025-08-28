#include<stdio.h>
int main()
{
    int ch,i,val,n;
    printf("Enter size of stack: ");
    scanf("%d",&n);
    int stack[n],top = -1;
    do 
    {
        printf("Stack MENU\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if (top < n - 1)
                {
                    printf("Enter element to be pushed:");
                    scanf("%d",&val);
                    stack[++top] = val;
                    printf("Pushed %d onto the stack:\n",val);
                }
                else 
                {
                    printf("overflow\n");
                }
                break;
            
            
            case 2:
                if(top >= 0)
                {
                    int delelm = stack[top--];
                    printf("Popped element %d\n",delelm);
                }
                else
                {
                    printf("Underflow\n");
                }
                break;
            
            case 3:
                if(top == -1)
                {
                    printf("no element\n");
                }
                else
                {
                    printf("Top element is %d\n",stack[top]);
                }
                break;
            
            case 4:
                if(top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    for(i = top;i>=0;i--)
                    {
                        printf("%d\n",stack[i]);
                    }
                }
                break;
                
            case 5:
                printf("Exiting\n");
                break;
            
            default:
                printf("Wrong choice boii\n");
        }
    }while(ch != 5);
    
    return 0;
}
