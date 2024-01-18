#include<stdio.h>
void main()
{
    FILE *f1,*f2,*f3;
    char str[30],ch1,ch2,ch3,ch4;
    f1 = fopen("test.txt","w");
    printf("enter file content: ");
    scanf(" %[^\n]",str);
    fprintf(f1,"%s",str);
    fclose(f1);
                                                //for getting each chara from file and printing it 
    f1 = fopen("test.txt","r");
    while(feof(f1)==0)
    {
        ch1 = fgetc(f1);
        printf("%c",ch1);
    }
    printf("\n");
    fclose(f1);
    /*f1 = fopen("test.txt","r");
    f2 = fopen("copy.txt","w");                  //new file to paste contents
    while(feof(f1)==0)
    {
        ch2 = fgetc(f1);
        fprintf(f2,"%c",ch2);                   //pasting from f1 to f2
    }
    fclose(f1);
    fclose(f2);
                                                //displaying contents of f2
    f2 = fopen("copy.txt","r");
    while(feof(f2)==0)
    {
        ch3 = fgetc(f2);
        printf("%c",ch3);
    }
    printf("\n");
    fclose(f2);*/
    f1 = fopen("test.txt","r");
    f2 = fopen("copy.txt","r");
    f3 = fopen("merge.txt","w"); 
    while(feof(f1)==0)                           //merging 2 files  
    {
        ch2 = fgetc(f1);
        fprintf(f3,"%c",ch2);
    }
    while(feof(f2)==0)   
    {
        ch3 = fgetc(f2);
        fprintf(f3,"%c",ch3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f3 = fopen("merge.txt","r");                //printing the merged file
    while(feof(f3)==0)
    {
        ch4 = fgetc(f3);
        printf("%c",ch4);
    }
    printf("\n");
    fclose(f3);


}