#include <stdio.h>

int main(){

  FILE *fp;
  char data[400];

  // fp = fopen("data.txt","a");
  // fprintf(fp," my third line added in my file.");
  // fclose(fp);

  fp = fopen("data.txt","r");
  fgets(data,400,fp);
  printf("File content : %s",data);
  fclose(fp);

  return 0;
}