#include<stdio.h>
int main()
{
  char ch;
  printf("Enter the alphabet");
  scanf("%c",&ch);
  switch(ch)
  {
  case'a':
  case'A':
     printf("the letter is A/a");
     break;
  case 'b':
  case'B' :
    printf("The letter is B/b");
    break;
  case'c':
  case'C':
    printf("The letter is C/c");
    break;
  default:
    printf("Another character");
    break;
  }
}
