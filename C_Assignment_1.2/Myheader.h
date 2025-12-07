int add(float x, float y)
{
    printf("Addition of %.2f and %.2f is %.2f.",x,y,x+y);
}

int sub(float x, float y)
{
    printf("Subtraction of %.2f and %.2f is %.2f.",x,y,x-y);
}

int mul(float x, float y)
{
    printf("Multiplication of %.2f and %.2f is %.2f.",x,y,x*y);
}

int div(float x, float y)
{

    printf("Division of %.2f and %.2f is %.2f.",x,y,x/y);
}

int reverseNum(int n)
{
    int original, rem, reverse=0;
    while(n>0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    return reverse;
}
