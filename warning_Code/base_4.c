#include <stdio.h>

int main(){
    int mike_score = 89;
    int john_score = 98;
    printf("mike的成绩是%d分\n",mike_score);
    printf("john的成绩是%d分\n",john_score);
    mike_score = john_score;
    john_score = 89;
    printf("mike的成绩是%d分\n",mike_score);
    printf("john的成绩是%d分\n",john_score);
    return 0;
}