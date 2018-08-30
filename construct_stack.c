#include<stdio.h>
#include<stdlib.h>
# define size 20
struct stack
{
 int *arr;
 int top;
};
struct stack* initial()
{
    struct stack *mem=(struct stack*)malloc(sizeof(struct stack));
    mem->top=-1;
    mem->arr=(int*)malloc(sizeof(int)*size);
    return mem;
}
int isempty(struct stack *mem)
{
    if(mem->top==-1)
        return 1;
    return 0;
}
int isfull(struct stack *mem)
{
    if(mem->top==size-1)
        return 1;
    else
        return 0;
}
void push(struct stack *mem,int element)
{
    if(isfull(mem))
    return ;
    else
    {
        mem->top=mem->top+1;
        mem->arr[mem->top]=element;
    }
   printf("%d pushed to stack\n",element);
}
int pop(struct stack *mem)
{
    if(isempty(mem))
        return 0;
    else
    {
        return mem->arr[mem->top];
    }
}
int main()
{
    int x;
    struct stack *abc=initial();
    push(abc,10);
    push(abc,20);
    push(abc,30);
    push(abc,40);
    x=pop(abc);
    abc->top--;
    printf("%d popped from stack\n",x);
    printf("%d is new top ",abc->arr[abc->top]);

}

