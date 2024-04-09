//Arhaam Hossain SBU ID: 115170294

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char* remove(char s1[], char s2[]){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int k = 0;
    for(int i = 0; i < len1; i++){
        int a = 0;
        for(int j = 0; j < len2; j++){
            if(s1[i] == s2[j]) {
                a = 1;
                break;
            }
        }
        if(!a){
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0'; 
    return s1;
}

int main(){
    char string[32];
    printf("Enter s1: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; 

    char characters[32];
    printf("Enter s2: ");
    fgets(characters, sizeof(characters), stdin);
    characters[strcspn(characters, "\n")] = '\0'; 

    char* result = remove(string, characters);

    printf("%s\n", result);

    return 0;
}
