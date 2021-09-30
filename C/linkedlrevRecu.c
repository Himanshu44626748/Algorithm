 struct node
{
    int x;
    struct node *next;
};
struct node *head;


void reverseprint(struct node *p)
{
    if(p==0)
    {
        return;
    }
    reverseprint(p->next);
    printf("%d ",p->x);
}
int main()
{
    struct node *one,*two,*three,*four;
    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(one->x));
    scanf("%d",&(two->x));
    scanf("%d",&(three->x));
    scanf("%d",&(four->x));
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=0;
    head=one;
    reverseprint(head);

    head=four;


}
