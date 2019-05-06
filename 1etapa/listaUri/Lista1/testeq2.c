// C program for array implementation of stack
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100

struct Stack{
    int top;
    char arr[MAX];
} st;


// Stack is full when top is equal to the last index
int isFull(struct Stack *stack)
{
    if(st.top == MAX_SIZE-1){
        return 0;
    }else{
        return -1;
    }
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack *stack)
{
    if(st.top == -1)
    {
        return 0;
    }else{
        return -1;
    }
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to remove an item from stack. It decreases top by 1
int pop()
{
    if(isEmpty()){
        return 0;
    }else{
        st.top--;
    }
}
// Driver program to test above functions

int ArePair(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return 0;
    return -1;
}

char gettop(){
    return st.arr[st.top];
}
int main()
{

    char in_expr[MAX];
    int length = 0, i, j;

    init();

    printf("Enter an expression to check:");
    gets(in_expr);

    length = strlen(in_expr);

    for (i = 0; i < length; i++)
    {
        if (in_expr[i] == '(')
        {
            push(in_expr[i]);
        }
        else if (in_expr[i] == ')')
        {
            char a = gettop();
            printf("%c", a);
            if (isEmpty() || !ArePair(gettop(), in_expr[i]))
            {
                printf("Incorrect\n");
                return 0;
            }
            else
            {
                pop();
            }
        }
    }
    if (isEmpty())
    {
        printf("Correct\n");
    }
    else
    {
        printf("Incorrect\n");
    }

    return 0;
}
