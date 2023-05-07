#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct book
{
	int bookId;
	char bName[50];
	char bAuthor[50];
	char bPublication[50];
	char bGeners[30];
	long bpages;
	int bprice;
	char bLanguage[50];
	int bEdition;
}book;
void storeArray(book* ,int);
void displayArray(book* ,int);
void searchArray(book* ,int);
void updateArray(book* ,int);
void deleteArray(book* ,int*);

