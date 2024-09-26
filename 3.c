#include<stdio.h>
#include<stdlib.h>
int size,choice,f,top=-1,num,k,i,stack[6],rev[6];
void push();
void Pop();
void Display();
int Pali();
void main()
{
printf("Enter the size of stack");
scanf("%d",&size);
printf("\nMenu \n 1.Push 2.Pop 3.Display 4.check for Palindrome 5.Exit");
while(1)
{
       printf("Enter the choice");
       scanf("%d",&choice);
       switch(choice)
       {
             case 1:push();
                   break;
             case 2:Pop();
                   break;
             case 3:Display();
                   break;
             case 4:f=Pali();
             if(f==1)
             	   printf("It's Palindrome\n");
             else
                  printf("It's not a palindrome\n");
             break;
             case 5:exit(0);
             default:printf("Wrong choice..\n");
       }
}
}
void push()
{
        if(top==(size-1))
        {
                printf("Stack is overflow");
        }
        else
        { 
                printf("Enter the number to the push\n");
                scanf("%d",&num);
                top=top+1;
                stack[top]=num;
}      
}
void Pop()
{
        if(top==-1)
        {
                printf("Stack is underflow\n");
        }
        else
        {
                num=stack[top];
                printf("Popped element is %d\n",num);
                top--;
        }
}
void Display()
{
       if(top==-1)
       {
              printf("Stack is empty\n");
       }
       else
       {
             printf("Stack contents..\n");
             for(i=top;i>=0;i--)
             {
                    printf("%d\n",stack[i]);
             }
       }        
}
int Pali()
{
        int flag=1;
        for(i=top;i>=0;i--)
        {
              rev[k++]=stack[i];
        }
        for(i=top;i>=0;i--)
        {
              if(stack[i]!=rev[--k])
              {
                      flag=0;
              }
        }      
              return flag;
}                           
                        
        

                
