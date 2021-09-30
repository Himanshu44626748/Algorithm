#define MAXSIZE 100
struct stacks{
    int st[100];
    int top;
};
typedef struct stacks stack;
void create(stack *s)
{
    s->top=-1;
}
void push(stack *s,int e)
{
    if(s->top==100-1)
    {
        printf("\n overflow");
        exit(-1);
    }
    else{
        s->top++;
        s->st[s->top]=e;
    }
}
int pop(stack *s)
{
    if(s->top==-1)
    {
        printf("stack uunderflow\n");
        exit(-1);
    }
    else{
   return( s->st[s->top--]);
   }

}
int isempty(stack *s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}
int isfull(stack *s)
{
    if(s->top==MAXSIZE-1);
}
int main()
{
      stack A,B;
      create(&A);create(&B);
      push(&A,10);push(&B,20);
      push(&A,30);
      printf("%d %d\n",pop(&A),pop(&B));

}
