/*You have two strings of lowercase English letters. You can perform two types of operations on the first string:

Append a lowercase English letter to the end of the string.
Delete the last character of the string. Performing this operation on an empty string results in an empty string.
Given an integer, , and two strings,  and , determine whether or not you can convert  to  by performing exactly  of the above operations on .
 If it's possible, print Yes. Otherwise, print No.*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int len_s = strlen(s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int len_t = strlen(t);
    int k;
    scanf("%d",&k);

    int pref_length = 0;

    while (s[pref_length] == t[pref_length] && pref_length < len_s && pref_length < len_t) {
        pref_length++;
    }

    int diff = k - len_s - len_t + 2*pref_length;
    if (diff < 0) {
        printf("No\n");
    } else if (k >= len_s + len_t) {
        printf("Yes\n");
    } else if (diff % 2 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
