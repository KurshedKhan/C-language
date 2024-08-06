#include <stdio.h>

int TotalFunction(int count){

    int arrItem[count];
    int total = 0;

    for (int i = 0; i < count; i++)
    {
        printf("Enter your array item : ",i);
        scanf("%d",&arrItem[i]);
    }

    // for(int i = 0 ; i < count; i++){
    //     printf("%d\n",arrItem[i]);
    // }

    for (int i = 0; i < count; i++)
    {
        total += arrItem[i];
    }
    
    return total;
   
}

int AverageFunction(int total,int size){

    int average = total/size;
    return average;
}

void GradeWithAverage(int average){

    if(average >= 90){
        printf("Grade A");
    }
    else if(average >= 70 && average < 90){
        printf("Grade B");
    }
    else if(average >= 50 && average < 70){
        printf("Grade C");
    }
    else{
        printf("Normal Position in your  class.");
    }
}
int main(){

    int size;
    printf("Enter your size : ");
    scanf("%d",&size);

    int total = TotalFunction(size);
    printf("Total of array : %d\n",total);

    int Average = AverageFunction(total,size);
    printf("Average of Array : %d\n",Average);

    GradeWithAverage(Average);
    return 0;
}