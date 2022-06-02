// Da se napishe programa koja kje go prikazhe brojot na pojavuvanja na cifrata 3 vo tekstualna datoteka so ime treta.txt

#include <stdio.h>

int main() {
    FILE *file;
    int countOccurrences = 0;
    int intValue_char;
    
    file = fopen("mesto za path", "r");
    if(file == NULL) {
        printf("An error occurred while trying to read treta.txt");
        return 1;
    }
    while((intValue_char= fgetc(file)) != EOF)
        if(intValue_char=='3')
            countOccurrences++;

    fclose(file);
    printf("The number three appears %d times in treta.txt", countOccurrences);

    return 0;
}
