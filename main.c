#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"
#include "user.h"

void print_intro(void);
void print_outro(void);
void input_str(char*){
    
}

int main(){
    char file_name[20];
    scanf("%s", file_name);
    
    FILE* fp1 = fopen(file_name, "wa+");
    if(fp1 == NULL){
        fprintf(stderr, "Can't open this file!\n");
        return 1;
    }

    char tmp_buff[150];
    int select_n = 0;
    book_info tmp_book;
    student tmp_user;

    print_intro();
    while(scanf("%d", &select_n) == 1){
        if(select_n == 0){
            break;
        }
        switch(select_n){
            case 1 : 
        }

    }

    fclose(fp1);
    print_outro();
    return 0;
}

void print_intro(void){
    printf("---------------\n");
    printf("Choose Menu\n");
    printf("1. Loan\n");
    printf("2. Return\n");
    printf("3. Renew\n");
    printf("4. Resist_User\n");
    printf("5. Resist_Book\n");
    printf("6. Delete_User\n");
    printf("7. Delete_Book\n");
    printf("0. Exit\n");
    printf("---------------\n");
}

void print_outro(void){
    printf("---------------\n");
    printf("Thank you for using!\n");
    printf("---------------\n");
}