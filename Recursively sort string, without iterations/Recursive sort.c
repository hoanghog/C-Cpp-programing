/*
@Martin Hoang

Hope it will help, i was not able to find
c code without iterations.
*/

#include <stdio.h>
#include <string.h>


void sort(char *str, int i, int j){

    int len = strlen(str);
    char temp;

    if (j == len)
        return sort(str, ++i, 1);

    if (i == len)
        return;

    if (str[j - 1] > str[j]){

        temp = str[j - 1];
        str[j - 1] = str[j];
        str[j] = temp;
    }
    sort(str, i, ++j);

}

int main(){
	//string you want to sort
    char str[] = "ExampleString";
    sort(&str, 0 ,1);
    printf("%s", str);
    return 0;
}