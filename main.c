#include "Book .h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int n,choice;
	printf("------------------------------------------------------WELCOME-------------------------------------------------------\n");
    printf("\n Enter number of books:");
    scanf("%d",&n);
    book* b = (book*)malloc(sizeof(book)*n);
        do {
        printf("-----------------------------------------------------------------------------------------------------------------\n");
        printf("Choose Operation:\n");
        printf("1. Store Book Information \n");
        printf("2. Display Book Information \n");
        printf("3. Search Book \n");
        printf("4. Update Book Information \n");
        printf("5. Delete Book Information\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                storeArray(b,n);
                break;
            case 2:
            	printf("\n*******************************************************************************************************************\n");
                displayArray(b,n);
                break;
            case 3:
                searchArray(b,n);
                break;
            case 4:
                updateArray(b,n);
                printf("\n*********************************************************************************************************************\n");
                displayArray(b,n);
                break;
            case 5:
            	deleteArray(b,&n);
            	printf("\n*********************************************************************************************************************\n");
                displayArray(b,n);
                break;
            case 6:
            	printf("\nThank You!!!!!");
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 6);
}
