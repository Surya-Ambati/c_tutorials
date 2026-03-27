#include<stdio.h>

int main()
{
      //syntax of fopen(file, mode) , it provides file structure pointer as a output.
      
      FILE *fp = fopen("testfile.txt","w");
      
      if(fp == NULL){
            printf("File not available!!\n");
      }
      else{
            printf("File loaded successfully\n");
      }

      fclose(fp);
      return 0;
}







































/*
           WHOLE INPUT FILE PROCESS

      Disk Storage
      +-----------+
      | data.txt  |
      +-----+-----+
            |
            | fopen("file.txt","r")
            v
      +-----------+
      | FILE *fp  |  ← file handle/ file pointer
      +-----+-----+
            |
            | fread / fgets / fscanf
            v
      +-----------+
      |   RAM     |
      | buffer[]  |
      +-----+-----+
            |
            | program logic
            v
      +-----------+
      |  Output   |
      | printf()  |
      +-----------+



//file structure:

      typedef struct{
            int fd;             // file descriptor
            unsigned char *buf; //buffer
            size_t size;        // size of the file
            size_t pos;         // current position in the file
      }FILE;


// mode of files:
      r - read - file must exist else return NULL.
      w - write - if file doesnt exist new file will be created. if already exists old content get overwrite.
      a - append - if file exists new data adds at end, old data dont get deleted. And new file get creates. 
      r+ - read and write - file must exist else return NULL.
      w+ - read and write  - if file exist content get deleted, else new file created
      a+ - read and write  - if file exist data doesnt get delete, if not exist new file created
      
      //ex: txt, csv, doc, pdf etc.
      //text related function - fprintf(), fscanf(), fgets(), fputs()

      rb - read binary
      wb - write binary
      ab - append binary
      rb+ - read and write binary
      wb+ - read and write binary
      ab+ - read and write binary

      //ex: for binary - image, video, exectuable etc.
      //binary related functions - fread(), fwrite()
*/