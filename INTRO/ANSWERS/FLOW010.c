#include <stdio.h>

int main(void) {
    char c,s[][20]={" ","BattleShip","Cruiser","Destroyer"," ","Frigate"};
	int t;
	scanf("%d",&t);
	while(t--){
	    scanf(" %c",&c);
	    if('a'<=c&&c<='z')
	        printf("%s\n",s[c-'a']);
	    if('A'<=c&&c<='Z')
	        printf("%s\n",s[c-'A']);
	}
	return 0;
}

