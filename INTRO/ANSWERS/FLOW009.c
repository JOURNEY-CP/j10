#include <stdio.h>

int main(void) {
    int t;
    int quantity;
    double price;
    scanf("%d",&t);
    while(t--){
        scanf(" %d %lf",&quantity,&price);
        price*=quantity;
        if(quantity>=1000){
            price*=0.9;
        }
        printf("%lf\n",price);
    }
	return 0;
}

