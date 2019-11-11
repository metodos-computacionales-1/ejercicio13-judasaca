#include <iostream>

int getMax(int a, int b);
float getMax(float a, float b);
int main(void){
    int x=3, y=5;
    float q=2.1, k=4.9;
    std::cout<<getMax(x,y)<<std::endl;
    std::cout<<getMax(q,k)<<std::endl;
    
    
    
}
int getMax(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
    
}
float getMax(float a, float b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
    
}