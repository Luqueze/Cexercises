#include <stdio.h>
#include <string.h>

int main() {

    int num, len, i;
    char num_str[20];
    int is_palindrome = 1;

    printf("Insert a number: ");
    scanf("%d", &num);

    sprintf(num_str, "%d", num);
    len = strlen(num_str);

    for (i = 0; i < len/2; i++){
        if (num_str[i] != num_str[len-i-1]) {
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome){
        printf("%d is a palindrome.\n", num);

    }else{
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
