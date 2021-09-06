#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

        char ptr[20];
        if(argc>1){
                FILE *fp = fopen(argv[1], "r");
                fgets(ptr, sizeof(ptr), fp);
        }
        else{
                fgets(ptr, sizeof(ptr), stdin);
        }
        printf("%s", ptr);
        if(ptr[0] == '<') {
                if(ptr[1] == 'd') {
                        if(ptr[2] == 'o') {
                                if(ptr[3] == 'c') {
                                        if(ptr[4] == 'u') {
                                                if(ptr[5] == 'm') {
                                                        if(ptr[6] == 'e') {
                                                                if(ptr[7] == 'n') {
                                                                        if(ptr[8] == 't') {
                                                                                if(ptr[9] == '>') {
                                                                                        abort();
                                                                                }
                                                                                else    printf("%c",ptr[9]);
                                                                        }
                                                                        else    printf("%c",ptr[8]);
                                                                }
                                                                else    printf("%c",ptr[7]);
                                                        }
                                                        else    printf("%c",ptr[6]);
                                                }
                                                else    printf("%c",ptr[5]);
                                        }
                                        else    printf("%c",ptr[4]);
                                }
                                else    printf("%c",ptr[3]);
                        }
                        else    printf("%c",ptr[2]);
                }
                else    printf("%c",ptr[1]);
        }
        else    printf("%c",ptr[0]);
        return 0;
}
