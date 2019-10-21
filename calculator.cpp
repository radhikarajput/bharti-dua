#include<iostream>
using namespace std;
int main() 
{
    char ch;
    int num1,num2;

while(1)
{
    cin>>ch;
    
    switch(ch)
    {
        case '+': 
                     cin>>num1>>num2;
                     //if(num1<0||num2<0)
                     //cin>>num1>>num2;
                    cout<<num1+num2<<'\n';
                    break;
                    
        case '-': 
                     cin>>num1>>num2;
                     //if(num1<0||num2<0)
                     //cin>>num1>>num2;
                    cout<<num1-num2<<'\n';
                    
                    break;
                   
        case '*': 
                     cin>>num1>>num2;
                     //if(num1<0||num2<0)
                     //cin>>num1>>num2;
                    cout<<num1*num2<<'\n';
                    
                     break;
                
        case '/': 
                     cin>>num1>>num2;
                     //if(num1<0||num2<0)
                     //{cin>>num1>>num2;
                     //while(num2==0)
                     //{continue;}


                     //}
                     

                     
                    cout<<num1/num2<<'\n';
                    
                    break;
                   
        case '%': 
                     cin>>num1>>num2;
                    // if(num1<0||num2<0)
                     //{cin>>num1>>num2;
                     //while(num2==0)
                     //{continue;}


                     //}
                     
                    cout<<(num1%num2)<<"\n";
                    break;
                
        case 'x' : return 0;
        case 'X' : return 0;
        
        default : cout<<"Invalid operation. Try again."<<"\n";
        
    }
    //cin>>ch;
}
	return 0;
}
