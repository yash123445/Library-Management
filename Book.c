#include "Book .h"
void storeArray(book* b1 ,int n)
{
	static int idCounter= 1;
	int i;
	for(i = 0;i<n;i++)
	{
		printf("\nEnter the book %d details\n", i+1);
        b1[i].bookId = idCounter++; // auto-generate book ID and increment the counter
        printf("Book ID: %d\n", b1[i].bookId);
		fflush(stdin);
		printf("Enter the name of the book    :");
		gets(b1[i].bName);
		fflush(stdin);
		printf("Enter the Author Name         :");
		gets(b1[i].bAuthor);
		fflush(stdin);
		printf("Enter the name of Publication :");
		gets(b1[i].bPublication);
		fflush(stdin);
		printf("Enter the gener                : ");
		gets(b1[i].bGeners);
		fflush(stdin);
		printf("Enter the no of pages          :");
		scanf("%d",&b1[i].bpages);
		fflush(stdin);
		printf("Enter the price of the book    :");
		scanf("%d",&b1[i].bprice);
		fflush(stdin);
		printf("Enter the Lagnuage of the book :");
		scanf("%s",&b1[i].bLanguage);
		fflush(stdin);
		printf("Enter the Edition of the book  :");
		scanf("%d",&b1[i].bEdition);
		fflush(stdin);
	}
}
void displayArray(book* b1,int n)
{
    int i;
    printf("*---------*-------------*---------------*--------------------*---------*-------------*---------*----------*---------*");
    printf("| Book Id |  Book Name  |  Author Name  |  Publication Name  |  Gener  | No Of Pages |  Price  | Language | Edition |");
    printf("*---------*-------------*---------------*--------------------*---------*-------------*---------*----------*---------*");
    for(i=0;i<n;i++){
    	printf("|  %-7d|%-13s|%-15s|%-20s|%-9s|%-13d|%-10d|%-10s|%-7d|\n",b1[i].bookId,b1[i].bName,b1[i].bAuthor,b1[i].bPublication,b1[i].bGeners,b1[i].bpages,b1[i].bprice,b1[i].bLanguage,b1[i].bEdition);
	}
	printf("---------------------------------------------------------------------------------------------------------------------\n");
}
void searchArray(book* b1, int n)
{
	printf("**************************************************************************\n");
	int i , bookId,flag=0;
	printf("\nFor search a book\n");
	printf("Enter the book id:");
	scanf("%d",&bookId);
	for(i=0;i<n;i++)
	{
		if(bookId==b1[i].bookId){
			printf("The information of the given Book of this Id:\n");
			flag = 1;
			
			printf("The Book Id is                        :%d\n",b1[i].bookId);
			printf("The name of the Book is               :%s\n",b1[i].bName);
			printf("Author of the book is                 :%s\n",b1[i].bAuthor);
	        printf("Name of publication is                :%s\n",b1[i].bPublication);
	        printf("Gener of the book is                  :%s\n",b1[i].bGeners);
	        printf("No of pages in the book               :%d\n",b1[i].bpages);
	        printf("Price of the book is                  :%d\n",b1[i].bprice);
	        printf("Language of the book is               :%s\n",b1[i].bLanguage);
	        printf("Edition of the book is                :%d\n",b1[i].bEdition);
			break;		
	    }
    }
    if(flag==1)
    {
    	printf("search succesfull\n");
	}
    else{
	printf("The Book of given Id is not found\n");
	}
}
void updateArray(book* b1,int n)
{
	int i,bookId,Entity_No,flag=0;
	printf("\n****************************************************************************\n");
	printf("Enter the Book Id which you have to update:\n");
	scanf("%d",&bookId);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		if(bookId==b1[i].bookId)
		{
			flag=1;
			printf("Enter the no to update the entity of the book\n");
			printf("1. BookId\n");
			printf("2. name of the book\n");
			printf("3. name of the Author\n");
			printf("4. publication of the Book\n");
			printf("5. geners of the book\n");
			printf("6. no of pages of the book\n");
			printf("7. Price of the book\n");
			printf("8. language of the book\n");
			printf("9. Edition of the book\n");
			printf("Enter the choice:");
			scanf("%d",&Entity_No);
			
			if(Entity_No == 1)
			{
				printf("Enter the updated Book Id: ");
				scanf("%d",&b1[i].bookId);
			}
			if(Entity_No == 2)
			{
				fflush(stdin);
				printf("Enter the updated name of the book:");
				gets(b1[i].bName);
			}
			if(Entity_No == 3)
			{
				fflush(stdin);
				printf("Enter the updated name of the Author: ");
				gets(b1[i].bAuthor);
			}
			if(Entity_No == 4)
			{
				fflush(stdin);
				printf("Enter the new publisher of the book:");
				gets(b1[i].bPublication);
			}
			if(Entity_No == 5)
			{
				fflush(stdin);
				printf("Enter the new Gener of the book:");
				gets(b1[i].bGeners);
			}
			if(Entity_No == 6)
			{
				fflush(stdin);
				printf("Enter the updated no of pages in the book: ");
				scanf("%d",&b1[i].bpages);
		    }
			if(Entity_No == 7)
			{
				fflush(stdin);
				printf("Enter the updated price of the book:");
				scanf("%d",&b1[i].bprice);
			}
			if(Entity_No == 8)
			{
				fflush(stdin);
				printf("Enter the updated language of the book:");
				scanf("%s",&b1[i].bLanguage);
			}
			if(Entity_No == 9)
			{
				fflush(stdin);
				printf("Enter the updated Edition of thr book:");
				scanf("%s",b1[i].bEdition);
			}
			break;
		}
		else
	    {
		printf("Book Id is not valid Enter valid Book Id\n");
	    }
	}
	
}
void deleteArray(book* b1,int *n)
{
	int i,j,BookId,flag=0;
	printf("\nEnter the book id of book which you want to delete:");
	scanf("%d",&BookId);
	for(i=0;i< *n;i++)
	{
		if(BookId==b1[i].bookId)
		{
			flag=1;
			for(j=i;j<(*n-1);j++)
			{
				b1[j]=b1[j+1];
			}
		}
	}
	if(flag==1)
	{
		*n = *n-1;
		printf("Record deleted succesfully\n");
	}
	else
	{
		printf("\nRecord not found Enter valid Book Id\n");
	}
}

