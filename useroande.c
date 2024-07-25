int test(int x); //function declaration//
int main()
{
    int a,c;
    printf("enter a number:");
    scanf("%d",&a);
    c = test(a);//funtion call//
    if (c==0)
    {
    printf("the number is even");
    }
    else
    printf("the number is odd");
    return 0;    
    
}

test(int x)
{
    int z;
    z = (x%2);
    return z;
}