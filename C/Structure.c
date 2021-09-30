struct st
{
    float e,p,c,m,t,per;
    char name[20];
};
int main()
{
    int n,i;
    scanf("%d",&n);
    struct st M[n];
    for (i=0;i<n;i++)
    {
        gets(M[i].name);
        scanf("%f %f %f %f",&M[i].e,&M[i].p,&M[i].c,&M[i].m);
    }
}
