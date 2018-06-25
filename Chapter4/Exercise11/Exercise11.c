

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/* Modify getop so that it doesn't need to use ungetch.
  Hint: use an internal static variable*/

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100

int sp = 0;
double val[MAXVAL];
char buf[BUFSIZE];
int bufp;

int getop(char []);
int getch(void);
void ungetch(int c);
void push(double);
double pop(void);

/* reverse polish calculator */

int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF)
    {
        switch(type)
        {
            case NUMBER:
                    push(atof(s));
                    break;
            case '+':
                    push(pop()+pop());
                    break;
            case '*':
                    push(pop()*pop());
                    break;
            case '-':
                    op2=pop();
                    push(pop()-op2);
                    break;
            case '/':
                    op2=pop();
                    if(op2 != 0.0)
                        push(pop()/op2);
                    break;
            case '\n':
                    printf("\t%.8g\n",pop());
                    break;
            default:
                    printf("error: unknown command %s\n",s);
                    break;
        }
    }
    return 0;
}


void push(double f)
{
  if(sp<MAXVAL)
    val[sp++] = f;
  else
    printf("error: stack full, can't push %g\n",f);
  
}

double pop(void)
{
    if(sp > 0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

void ungetch(int c)
{
  if(bufp>=BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}


int getop(char s[])
{
   static int lastc = 0;
   int c,i=0;
 
    if(lastc == 0)
    {
        c = getch();
    }
    else
    {
        c = lastc;
        lastc = 0;
    }

    while((s[0]=c) == ' ' || c == '\t')
    {
        c = getch();
    }
  
    s[1]='\0';
    
    if(!isdigit(c) && c!= '.')
    {
        return c;
    }
    
    if(isdigit(c))
    {
        while(isdigit(s[++i] =c=getch()));
      
    }       
    if(c=='.')
    {
      while(isdigit(s[++i] =c=getch()));
    }
  
    s[i]='\0';
    
    if(c!=EOF)
    {
      lastc=c;
    }

    return NUMBER;
}


/*

**********************************************************************************************
*******************************Previous getop*************************************************
**********************************************************************************************
   // getop: get next operator or numeric operand
    
    int getop(char s[])
    {
      int i, c;
      
      while((s[0] = c = getch()) == ' ' || c=='\t')
        ;
      s[1] ='\0';
     
      if(!isdigit(c)) //collect integer part
        while(isdigit(s[++i]=c=getch()))
          ;
      if(c==',')  //collect fraction part
        while(isdigit(s[++i]=c=getch()))
          ;
      s[i]='\0';
      if(c != EOF)
        ungetch(c);
        return number;
    }
*/