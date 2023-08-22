#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE* html_file;

    char my_file_data[200] = "<!DOCTYPE html><html><head><title>Page Title</title></head><body><h1>My First Heading</h1><p>My first paragraph.</p></body></html>";

    html_file = fopen("My_html_book.html","w");

    if(html_file == NULL){
        printf("file do not exiting.");
        exit(0);
    }

    else{

        printf("My file is open in my software.\n");

        if(strlen(my_file_data)>0){

            fputs(my_file_data,html_file);

        }
        
        fclose(html_file);
    }

    printf("Write the content in our html file\n");

    printf("file is closed successfully.\n");

    return 0;
}