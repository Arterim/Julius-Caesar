#include<iostream>
using namespace std ;
int main()
{
int a,b,c ;
char ope ;
cout<<"Enter a no.: " ;
cin>>a ;
cout<<"Enter your second no: " ;
cin>>b ;
cout<<"Enter your choice: a)Add b)Substract c)Multiply d)Divide" ;
cin>>ope ;
swich(ope)
{
case'a': 
{
c=a+b ;
cout<"The result is "<<c ;
break ;
}
case'b':
{
c=a-b :
cout<<"The result is "<<c ;
break ;
}
case'c' :
{
c=a*b ;
cout<<"The result is "<<c ;
}
case'd' :
{
c=a/b ;
cout<<"The result is "<<c ;
break ;
}
}
return 0 ;
}
