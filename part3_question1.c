//Arhaam Hossain SBU ID: 115170294

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int shift(char str[]){
    int length = strlen(str);
    if (length == 0)
        return 0; 

    char temp = str[0]; 

    for(int i = 0; i < length - 1; i++){
        str[i] = str[i + 1];
    }
    str[length - 1] = temp; 
    return 1; 
}

int main(){
    char string[32];
    printf("Enter: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; 

    printf("%s\n", string);

    printf("New:\n");
    int length = strlen(string);
    for (int i = 0; i < length; i++){
        if (!shift(string)){
            printf("Error\n");
            break;
        }
        printf("%s\n", string);
    }

    return 0;
}