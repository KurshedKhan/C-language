#include <stdio.h>


int main(){

    int rollNo[2][3] = {{101,102,103},{104,105,106}};

    // Outter loop for printing item (Row)
    for (int i = 0; i < 2 ; i++)
    {
        // inner loop for printing item (Column)
       for (int j = 0; j < 3; j++)
       {
            printf("%d ",rollNo[i][j]);
       }
       printf("\n");
    }
    

    return 0;
}