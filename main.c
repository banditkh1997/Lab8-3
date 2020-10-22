#include <stdio.h>
#include <string.h>
int main(void)
{
  char password[20], tpassword[20];
  int i =1;
  do{
    if(i==1) {
      printf("Enter new password (max 10) :");
      gets(password);
      while(strlen(password)>10 && i==1){
      printf("Enter new password (max 10) :");
      gets(password);

  }
}
    printf("%d Enter password :",i);
    gets(tpassword);
    if (strcmp(password,tpassword)==0) {
      printf("Password correct !!!");
      printf("\nPlease setup new password\n");
      i = 1;
}
    else if(strcmp(password,tpassword)!=0) {
      printf("Password not correct !!!\n");
      if(i==3) printf("Close Program.");
      i++;
 } 
}
while(i<=3);
return 0;
}