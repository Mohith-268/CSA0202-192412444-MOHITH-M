#include <stdio.h>

int main(){
    int questionsAnswered, remainingTime, alreadySubmitted;

    printf("questionsAnswered:");
    scanf("%d", &questionsAnswered);

    printf("remainingTime:");
    scanf("%d", &remainingTime);
    
    printf("alreadySubmitted:");
    scanf("%d", &alreadySubmitted);
    
    if(questionsAnswered>0 && remainingTime>0 && alreadySubmitted==0){
        printf("Submission Allowed");
    }
    else{
        printf("Already submitted");
    }
    
    return 0;
}