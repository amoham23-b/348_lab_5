#include <stdio.h>

void combo(int score){
    int two_p; int three_p; int six_p; int seven_p; int eight_p;
    for(eight_p=0;eight_p<= score/8;++eight_p){
        for(seven_p=0; seven_p<= score/7;++seven_p){
            for(six_p=0; six_p<= score/6; ++six_p){
                for(three_p = 0; three_p <=score/3 ;++three_p){
                    for(two_p=0;two_p<= score/2;++two_p){
                        if((eight_p*8+seven_p*7+six_p*6+three_p*3+two_p*2)==score){
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",eight_p,seven_p,six_p,three_p,two_p);
                        }
                    }
                }
            }
        }

    }
}

int main(){
    int score;
    printf("Enter 0 or 1 to STOP\n"); 
    while(1){
        
        printf("Enter the NFL score: ");
        scanf("%d", &score);
        if(score < 2){
            printf("0 and 1 are not possible scores!\n");
            break;
        }else{
            printf("\npossible combinations of scoring plays:\n");
            combo(score);
            printf("\n");

        }
        
    }
    

}
