#include <stdio.h>

int main() {
    FILE *source, *destination;
    source = fopen("mesto za path", "r");
    destination = fopen("mesto za path", "w");
    
    if(source == NULL || destination == NULL) {
        printf("Error while opening files.");
        return 1;
    }

    int intValue_char;
    int offset = 1;
    do {
        fseek(source,-offset,SEEK_END);
        intValue_char = fgetc(source);

        if(intValue_char == EOF)
            break;

        offset++;
        fputc(intValue_char,destination);
        fflush(destination);
    } while(1);

    fclose(source);
    fclose(destination);
    return 0;
}
