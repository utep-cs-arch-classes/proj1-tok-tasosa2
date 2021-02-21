#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){
  
  //space_char tests
  printf("%d", space_char('a'));// 0
  printf("\n%d", space_char(' ')); // 1

  //non_space_char tests
  printf("\n%d", non_space_char('a'));// 1
  printf("\n%d", non_space_char(' ')); // 0

  return 0;
}

int space_char(char c){
  // True if c is a whitespace character and not a zero
  if((c == '\t' || c == ' ' || c == '\n') && c != '\0'){
    return 1;
  }
    return 0;
}

int non_space_char(char c){
  // True if c is a non-whitespace character and not a zero
  if((c != '\t' || c != ' ' || c != '\n') && c != '\0'){
    return 1;
  }
    return 0;
}

/*char *word_start(char *str){

}

char *word_end(char *word){
  
}

int count_words(char *str){

}

*/

