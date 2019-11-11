#include <iostream>
int fibonacci(int n);
int main(void){
    int t;
    std::cout<<"ingrese cuantos numeros fibonnacci desea"<<std::endl;
    std::cin>>t;
    for(int i=1;i<t+1;i++){
        std::cout<<fibonacci(i)<<std::endl;
    }
    
    
    
    
    
    return 0;
    
}
int fibonacci(int n){
    int u;
    if(n>2){
        u=fibonacci(n-1)+fibonacci(n-2);
        return u;
    }
    else if(n==2){
        return 1;   
    }
    else{
        return 0;
    }
        
      
}