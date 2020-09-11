#include <stdio.h>

int check1(int input)
{
  return (input & 0x000000ff);
}

int check2(int input)
{
  return (input & 0x00ff0000);
}

int check3(int input)
{
  return !(input & 0x0000ff00);
}


int main()
{
  int a = 0;
  printf("Enter the password: 0x");
  scanf("%x", &a);

  if ((check1(a) && check2(a) && check3(a)))
    puts("Correct!");
  else
    puts("Incorrect");
}
