#include <stdio.h>

int main(){
    int marks;

    while(1){
        printf("Enter your marks: ");
        scanf("%d", &marks);

        if(marks<=100 && marks>=80){
            printf("Your grade is A+\n");
        }
        else if(marks<80 && marks>=70){
            printf("Your grade is A\n");
        }
        else if(marks<70 && marks>=60){
            printf("Your grade is A-\n");
        }
        else if(marks<60 && marks>=50){
            printf("Your grade is B\n");
        }
        else if(marks<50 && marks>=40){
            printf("Your grade is C\n");
        }
        else if(marks<40 && marks>=33){
            printf("Your grade is D\n");
        }
        else if(marks<33 && marks>0){
            printf("Your grade is F\n");
        }
        else{
            printf("Your Entered wrong marks\n");
        }
    }
}
