//Arhaam Hossain SBU ID: 115170294

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int vowel(char c) {
    c = tolower(c);
    return (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u');
}

char* ToPigLatin(char* word){
    char result[39]; 
    int len = strlen(word);

    if (vowel(word[0])){
        strcpy(result, word);
        strcat(result, "way");
    } else {
        int i = 0;
        while (i < len && !vowel(word[i])){
            i++;
        }
        strcpy(result, word + i);
        strncat(result, word, i);
        strcat(result, "ay");
    }
    if (isupper(word[0])){
        result[0] = toupper(result[0]);
    }
    return result;
}

int main(){
    char words[5][39];
    char piglatin[5][39];

    printf("Type 5 words: ");
    for (int i = 0; i < 5; i++){
        scanf("%s", words[i]);
    }

    printf("Pig Latin version of the 5 words: \n");
    for (int i = 0; i < 5; i++){
        strcpy(piglatin[i], ToPigLatin(words[i]));
        printf("%s ", piglatin[i]);
    }
    printf("\n");

    return 0;
}
