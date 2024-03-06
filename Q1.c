#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc == 1){
        printf("No arguments passed.");
        return 1;
    }
    // assuming argv[1] is maximum
    int maximum = atoi(argv[1]);
    
    for (int i=2; i<argc; i++){
        int currentNum = atoi(argv[i]);
        if (currentNum > maximum)
            maximum = currentNum;
    }

    printf("Maximum - %d.", maximum);

    return 0;
}