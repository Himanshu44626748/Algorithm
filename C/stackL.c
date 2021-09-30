#define MAXSIZE 100
struct stacks {
    struct stacks *next;
    int e;

};
typedef struct stacks stack;



void create(stack **top){
    *top=0;

}
void push (stack **top,int element)
{
stack *ne;

    ne = (stack *) malloc(sizeof(stack));
    if(ne==0)
    {
       printf ("\n Stack is full");
       exit(-1);

    }
    ne->next=*top;
    ne->e=element;
    *top=ne;
}
int pop(stack **top)
{
    if(*top==0)
    {
        printf ("\n Stack is empty");
       exit(-1);
    }
    else{
            int x;
       x= (*top)->e;
       stack *p;
       p=*top;
       *top=(*top)->next;
       free(p);
       return(x);
    }

}
int isempty(stack *top)
{

    if(top==0)
    {
        return 1;
    }
    else
    return(0);

}
int main()
{

    stack *A,*B;
    create(&A);create(&B);
    push(&A,10);
    push(&A,20);
    push(&B,30);
    printf("%d %d",pop(&A),pop(&B));

}
