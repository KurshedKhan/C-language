#include <stdio.h>
#include <stdlib.h>

struct threenum {

    int n1, n2,n3;
}; 


int main(){

    struct threenum num;
    
    FILE *fileptr ;

    fileptr = fopen("introbinary.bin","wb");

    if( fileptr == NULL){

        printf("File is not in the system.");
    }

    int NS = 0;

    for(int i = 0; i < 5 ; ++i){
        num.n1 = i;
        num.n2 = i*5;
        num.n3 = i*5 + 1;

        // fwrite ==> 1.structure 2.size of structure 3. number of member 4. filepointer
        NS = fwrite(&num , sizeof(struct threenum) ,1,fileptr);
    }

    if(!NS){
        printf("file is not successfully created");
    }
    else{
        printf("file is run");
    }
   fclose(fileptr);

    return 0;
}