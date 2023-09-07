#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // Assuming maximum input length of 100 characters
    int frequency[256] = {0}; // Initialize an array to store character frequencies

    printf("Input the string: ");
    scanf("%[^\n]%*c", input);

    // Calculate character frequencies
    for (int i = 0; i < strlen(input); i++) {
       int charCount = (int)input[i];
       if(charCount >= 0 && charCount < 256){
         frequency[charCount]++;
       }

    }

    int maxFrequency = 0;
    char maxChar;

    // Find the character with the highest frequency
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            maxChar = (char)i;
        }
    }

    printf("The Highest frequency of character '%c' appears number of times: %d\n", maxChar, maxFrequency);

    return 0;
}
















// #include<stdio.h>
// #include<string.h>


// int main(){
//      char input[20],frequency[20];
//      scanf("%s",input);

//      for(int i=0;i<strlen(input);i++){
//              frequency[i] = 0;
//      }


//      for(int i=0;i<strlen(input);i++){
//           for(int j=0;j<strlen(input);j++){
//             if(input[i] == input[j]){
//                 frequency[i] = frequency[i] +1;
//             }
//           }
//      }

//      for(int i=0;i<strlen(input);i++){
//         printf("%d",frequency[i]);
//      }
    




// }