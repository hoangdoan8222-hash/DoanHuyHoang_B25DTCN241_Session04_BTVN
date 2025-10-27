#include <stdio.h>
#include <math.h>

int main(){
    int number;
    scanf("%d" ,&number);
    if(number% 8 == 0){
    	printf("%d la so chan" ,number);
    }else{
    	printf("%d la so le" ,number);
	}
   return 0;
}
