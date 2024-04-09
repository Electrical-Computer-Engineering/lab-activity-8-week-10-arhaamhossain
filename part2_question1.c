//Arhaam Hossain SBU ID: 115170294

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int my_strcmp(char s1[], char s2[]) {
    int i = 0;
    while (s2[i] != '\0' && s1[i] != '\0') {
        if (s1[i] != s2[i])
            return 1;
        i++;
    }
    if (s2[i] == '\0' && s1[i] == '\0')
        return 0;
    return 1;
}

int my_strncmp(char s1[], char s2[], int n) {
    int i = 0;
    while (s2[i] != '\0' && s1[i] != '\0' && i < n) {
        if (s1[i] != s2[i])
            return 1;
        i++;
    }
    if (i == n || (s2[i] == '\0' && s1[i] == '\0'))
        return 0;
    return 1;
}

char *my_strcpy(char s1[], char s2[]) {
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

char *my_strcat(char s1[], char s2[]) {
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        i++;
    }
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return s1;
}

char *my_reverse(char s1[], char s2[]) {
    int i = 0, j = strlen(s2) - 1;
    while (j >= 0) {
        s1[i] = s2[j];
        i++;
        j--;
    }
    s1[i] = '\0';
    return s1;
}

int main() {
    //my_strcmp1
    char s1[32] = "hey";
    char s2[32] = "hey";
    printf("%d\n", my_strcmp(s2, s1));

    //my_strncmp1
    char s3[32] = "hello";
    char s4[32] = "hey";
    printf("%d\n", my_strncmp(s3, s4, 5));

    //my_strcpy1
    char s5[32] = "hello";
    char s6[32] = "hi";
    my_strcpy(s5, s6);
    printf("%s\n", s5);

    //my_strcat1
    char s7[32] = "hello";
    char s8[32] = "world";
    my_strcat(s7, s8);
    printf("%s\n", s7);

    //my_reverse1
    char s9[32] = "";
    char s10[32] = "hello";
    my_reverse(s9, s10);
    printf("%s\n", s9);

    //my_strcmp2
    char s1[32] = "hey";
    char s2[32] = "hello";
    printf("%d\n", my_strcmp(s2, s1));

    //my_strncmp2
    char s3[32] = "hey";
    char s4[32] = "hey";
    printf("%d\n", my_strncmp(s3, s4, 5));

    //my_strcpy2
    char s5[32] = "hi";
    char s6[32] = "hello";
    my_strcpy(s5, s6);
    printf("%s\n", s5);

    //my_strcat2
    char s7[32] = "world";
    char s8[32] = "hello";
    my_strcat(s7, s8);
    printf("%s\n", s7);

    //my_reverse2
    char s9[32] = "";
    char s10[32] = "hey";
    my_reverse(s9, s10);
    printf("%s\n", s9);

    return 0;
}
