#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){
  
  // space_char tests
  printf("%d\n", space_char('a'));// 0
  printf("%d\n", space_char(' ')); // 1

  // non_space_char tests
  printf("%d\n", non_space_char('a'));// 1
  printf("%d\n", non_space_char(' ')); // 0

  //  *word_start tests
  char word[] = "  HELLO";
 
  char *ptr = word_start(word);
  printf("1: %p\n", ptr);
  printf("2: %p\n", &word[2]);
  /*
  char *ptr = word_end(word);
  printf("1: %p\n", ptr);
  printf("2: %p\n", &word[5]);
  */
  return 0;
}

int space_char(char c){
  int check;
  // True if c is a whitespace character
  if(c == '\t' || c == ' ' || c == '\n'){
    check = 1;
  }
  else{
    check = 0;
  }
  return check;
}

int non_space_char(char c){
  // True if c is a non-whitespace character
  int check;
  if(c == '\t' || c == ' ' || c == '\n'){
    check = 0;
  }
  else{
    check = 1;
  }
  return check;
}

char *word_start(char *str){

  // Iterates through each character of the string until we reach a zero-terminator or
  // the first non-space character is found. If a non-space character is found, its adress is
  // returned.
  for(; *str != '\0'; str++){
    if(non_space_char(*str) == 1){
      printf("First non_space_char: %p\n", str);
      return str;
    }
  }
    
  // If the whole string was traversed and no non_space characters were found, returns
  // zero terminator
  return '\0';
}

/*
char *word_end(char *word){
  
  // 
  for(; *str != '\0'; str++){
    if(space_char(*str) == 1){
      printf("First space_char: %p\n", str);
      return str;
    }
  }
    
  //If the whole string was traversed and no space characters were found, return zero terminator
  return '\0';
}


int count_words(char *str){

}

*/
