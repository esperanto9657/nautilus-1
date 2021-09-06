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
        if(ptr[0] == 'v') {
                if(ptr[1] == 'a') {
                        if(ptr[2] == 'r') {
                                if(ptr[3] == ' ') {
                                        if(ptr[4] == 'a') {
                                                if(ptr[5] == ' ') {
                                                        if(ptr[6] == '=') {
                                                                if(ptr[7] == ' ') {
                                                                        if(ptr[8] == '[') {
                                                                                if(ptr[9] == ']') {
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
