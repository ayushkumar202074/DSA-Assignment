#include<iostream>  
#include<stack>  
using namespace std;  

bool IsOpr(char);  
bool IsOprnd(char);  
bool equalOrhigher(char, char);  
string convert(string);  

bool IsOpr(char c)  
{  
if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )  
return true;     
return false;  
}  
  
 
bool IsOprnd(char c)  
{  
if( c >= 'A' && c <= 'Z') 
return true;  
if (c >= 'a' && c <= 'z')
return true;  
if(c >= '0' && c <= '9')   
return true;  
return false;  
}  

int prec(char op)  
{  
if(op == '+' || op == '-')                   
return 1;  
if (op == '*' || op == '/')  
return 2;  
if(op == '^')                                  
return 3;       
return 0; 
} 
bool equalOrhigher (char op1, char op2)  
{  
int p1 = prec(op1);  
int p2 = prec(op2);  
if (p1 == p2)  
{  
if (op1 == '^' )  
return false;  
return true;  
}  
return  (p1>p2 ? true : false);  
}  
  


string convert(string infix)  
{  
stack <char> S;  
string postfix ="";    
char ch;  
  
S.push( '(' );  
infix += ')';  
  
for(int i = 0; i<infix.length(); i++)  
{  
ch = infix[i];  
  
if(ch == ' ')  
continue;  
else if(ch == '(')  
S.push(ch);  
else if(IsOprnd(ch))  
postfix += ch;  
else if(IsOpr(ch))  
{  
while(!S.empty() && equalOrhigher(S.top(), ch))  
{  
postfix += S.top();  
S.pop();  
}  
S.push(ch);  
}  
else if(ch == ')')  
{  
while(!S.empty() && S.top() != '(')  
{  
postfix += S.top();  
S.pop();  
}  
S.pop();  
}  
}  
return postfix;  
}  

int main()  
{  
string infix_expression, postfix_expression;  
int ch;  
do  
{  
cout << " Enter an infix expression: ";  
cin >> infix_expression;  
 postfix_expression = convert(infix_expression);  
 cout << "\n Your Infix expression is: " << infix_expression;  
cout << "\n Your Postfix expression is: " << postfix_expression;  
cin >> ch;  

} while(ch == 1);  
return 0;  
}