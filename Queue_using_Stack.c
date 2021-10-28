#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void push(struct node** top_ref, int new_data);

int pop(struct node** top_ref);

struct queue {
    struct node* stack1;
    struct node* stack2;
};

void enQueue(struct queue* q, int x)
{
    push(&q->stack1, x);
}

int deQueue(struct queue* q)
{
    int x;


    if (q->stack1 == NULL && q->stack2 == NULL)
    {
        printf("Q is empty");
        getchar();
        exit(0);
    }

    if (q->stack2 == NULL)
    {
        while (q->stack1 != NULL)
        {
            x = pop(&q->stack1);
            push(&q->stack2, x);
        }
    }

    x = pop(&q->stack2);
    return x;
}

void push(struct node** top_ref, int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Stack overflow \n");
        getchar();
        exit(0);
    }

    new_node->data = new_data;
    new_node->next = (*top_ref);
    (*top_ref) = new_node;
}

int pop(struct node** top_ref)
{
    int res;
    struct node* top;

    if (*top_ref == NULL) {
        printf("Stack underflow \n");
        getchar();
        exit(0);
    }
    else {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}

int main()
{
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->stack1 = NULL;
    q->stack2 = NULL;
    printf("Enter any 4 No.\n");
    int n;
    scanf("%d",&n);
    enQueue(q, n);
    scanf("%d",&n);
    enQueue(q, n);
    scanf("%d",&n);
    enQueue(q, n);
    scanf("%d",&n);
    enQueue(q, n);
    printf("By Queue using Stack Deletion is: ");
    printf("%d ", deQueue(q));
    printf("%d ", deQueue(q));
    printf("%d ", deQueue(q));
    printf("\n");
    return 0;
}
