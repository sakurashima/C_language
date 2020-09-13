#include <stdio.h>

int max(int a, int b);

int main(){
    
    int a = 100;
    int b = 200;
    
    int ret; 
    
    ret = max(a, b);
    
    printf("Max value is: %d\n", ret);
    
    return 0;    
}

int max( int a, int b ){
    
    int result;
    if( a>b ){
        result = a;    
    }else if( a<b ){
        result = b;    
    }else{
        result = 0;    
    }
    return result;
}

