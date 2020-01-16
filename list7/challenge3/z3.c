#include <stdio.h>

int main() {

    FILE *fp1, *fp2;
    char ch;
    int pos;
 
    if ((fp1 = fopen("from.txt","r")) == NULL)    
    {    
        printf("\nFile cannot be opened");
        return;
    }
    else     
    {
        printf("\nFile opened for copy...\n ");    
    }
    fp2 = fopen("to.txt", "w");  
    fseek(fp1, 0, SEEK_END);
    pos = ftell(fp1);
    fseek(fp1, 0, SEEK_SET);
    while (pos--)
    {
        ch = fgetc(fp1);
        fputc(ch, fp2);
    }    
    fcloseall();

    return 0;
}