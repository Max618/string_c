#include<stdio.h>
#include<stdlib.h>

int strlen(char *s){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

void strcpy(char *destino, char *origem){
    int i = 0;
    while(origem[i] != '\0'){
        destino[i] = origem[i];
        //printf("i: %d - destino[i]: %c - origem[i]: %c\n",i,destino[i],origem[i]);
        i++;
    }
}

int strcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] != '\0'){
        if(s1[i] != s2[i]){
            if(s1[i] < s2[i])
                return -1;
            else
                return 1;
        }
        i++;
    }
    return 0;
}

void strrev(char *s){
    int i, j = 0, tam = strlen(s);
    char temp;
    //printf("%d",tam);
    for(i = tam - 1; i > tam/2; i--){
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        j++;
    }
}

void strupr(char *s){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= 97 && s[i] <= 122)
            s[i] = ((int)s[i])-32;
        i++;
    }
}

void strlwr(char *s){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] >= 65 && s[i] <= 90)
            s[i] = ((int)s[i])+32;
        i++;
    }
}

void strcat(char *destino, char *origem){
    int i = strlen(destino);
    int j = 0;
    while(origem[j] != '\0'){
        destino[i] = origem[j];
        j++;
        i++;
    }
}

void strset(char *s, char c){
    int i = 0;
    while(s[i] != '\0'){
        s[i] = c;
        i++;
    }
}

int main() {
    char str[80], str2[10];
    strcpy (str,"Todas ");
    strcat (str,"strings ");
    strcat (str,"estao ");
    strcat (str,"concatenadas.");
    puts (str);
    //gets(str2);
    strupr(str);
    puts(str);
    strlwr(str);
    puts(str);
    strset(str,'K');
    puts(str);
}