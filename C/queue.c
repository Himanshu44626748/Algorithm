#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front, *rear;

void enqueue(int d)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = NULL;
    if (front == NULL)
    {
        rear = front = temp;
        printf("\nElement enqueued is : %d ", rear->data);
    }

    else
    {
        rear->next = temp;
        rear = temp;
        printf("\nElement enqueued is : %d ", rear->data);
    }
}

void dequeue()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("\nQueue is empty (underflow)");
    }

    else
    {
        temp = front;
        front = front->next;

        if (front == NULL)
            rear == NULL;

        temp->next = NULL;
        printf("\nElement dequeued is : %d ", temp->data);
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if (rear == NULL && front == NULL)
    {
        printf("\nQueue is empty");
    }

    else
    {
        printf("\nElements in the queue are : ");
        struct node *temp = front;

        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    display();
}