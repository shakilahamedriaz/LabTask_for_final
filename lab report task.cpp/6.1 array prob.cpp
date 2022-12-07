//Suppose you have an array , which can contain 5 characters. First insert 3 characters, then delete one character, then insert 2 character, then delete one character, then insert two character , then delete one character, then insert one character, Now print the entire array in reverse order, so that it prints: "mango". Then if you want to insert one more character, then it should print "Don't overflow".

#include <bits/stdc++.h>

using namespace std;


#define STACK_MAX 5

typedef struct {
    int top;
    char data[STACK_MAX];
} Stack;

void push(Stack *s, int item)
{
    if( s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else{
        cout<<"Stack Is Full"<<endl;
    }
}

int pop(Stack *s){
    char item;

    if(s->top == 0){
        // cout<<"Stack Is empty"<<endl;

        return -1;
    }
    else{
        s->top = s->top - 1;
        item = s->data[s->top];
    }

    return item;
}

int main()
{
    Stack my_stack;
    int item;

    my_stack.top = 0;
    char in_ch, in_ch2,in_ch3;
    cout<<"Insert three charecters : ";
    cin>>in_ch;
    cin>>in_ch2;
    cin>>in_ch3;

    push(&my_stack, in_ch );
    push(&my_stack, in_ch2 );
    push(&my_stack, in_ch3 );

    //charecter one delete
    pop(&my_stack);

    cout<<"Insert two charecters : ";
    cin>>in_ch;
    cin>>in_ch2;

    push(&my_stack, in_ch );
    push(&my_stack, in_ch2 );

    //charecter one delete
    pop(&my_stack);

    cout<<"Insert two charecters : ";
    cin>>in_ch;
    cin>>in_ch2;

    push(&my_stack, in_ch );
    push(&my_stack, in_ch2 );

    //charecter one delete
    pop(&my_stack);

    cout<<"Insert one charecters : ";
    cin>>in_ch;

    push(&my_stack, in_ch );
    int chk;
    chk = pop(&my_stack);
    // chk = pop(&my_stack);
    // chk = pop(&my_stack);
    // chk = pop(&my_stack);
    // chk = pop(&my_stack);
    // chk = pop(&my_stack);
    string str;
    int t = 0;
    while(chk >= 0) {
      char cc = chk;
      str += cc;
      chk = pop(&my_stack);
   }
    int len = str.length();
   for (int i = len-1; i >= 0; --i)
   {
        cout<<str[i]<<" ";
   }

    return 0;


}
