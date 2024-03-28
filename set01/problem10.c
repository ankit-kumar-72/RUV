#include <stdio.h>
void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
}
int stringcompare(char *string1, char *string2) {
    int i;
    for(i = 0; string1[i] != '\0' && string2[i] != '\0'; i++) {
        if(string1[i] < string2[i]) {
            return -1;
        } else if(string1[i] > string2[i]) {
            return 1;
        }
    }
    if(string1[i] == '\0' && string2[i] == '\0') {
        return 0;
    } else if(string1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

void output(char *string1, char *string2, int result) {
    if(result == 0) {
        printf("Both strings are equal.\n");
    } else if(result < 0) {
        printf("%s is greater than %s\n", string2, string1);
    } else {
        printf("%s is greater than %s\n", string1, string2);
    }
}
int main() {
    char str1[100], str2[100];
    int result;
    input_two_strings(str1, str2);
    result = stringcompare(str1, str2);
    output(str1, str2, result);
    return 0;
}
