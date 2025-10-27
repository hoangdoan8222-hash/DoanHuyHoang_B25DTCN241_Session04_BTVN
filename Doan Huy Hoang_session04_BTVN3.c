#include <stdio.h>
#include <math.h>

int main(){
    int number;
    scanf("%d" ,&number);
    if(number %3 == 0  && number %5 ==0){
    	printf("%d chia het cho 3 va 5" ,number);
    }else if(number % 5 == 0){
    	printf("%d chia het cho 5" ,number);
    }else if(number % 3 == 0){
    	printf("%d chia het cho ca 3" , number);
    }
    
    return 0;
}
	
