#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/**
 * randomPasswordGenerator - generate password
 * @number: char parameter
 * @letter: char parameter
 * @LETTER: char parameter
 * @symbol: char parameter
 * @password: that's our #
 * @N: that's our password
 * Return: Nothing
 */
void randomPasswordGenerator(int N)
{
int i = 0;
int randomizer = 0;

srand((unsigned int) (time(NULL)));
char number[] = "0123456789";
char letter[] = "abcdefghijklmnopqrstuvwxyz";
char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char symbol[] = "@!$?";
char password[N];

randomizer = rand() % 4;

for (i = 0; i < N; i++)
{
if (randomizer == 1)
{
password[i] = number[rand() % 10];
randomizer = int (*)(void);
printf("%c", password[i]);
}
else if (randomizer == 2)
{
password[i] = symbol[rand() % 8];
randomizer = int (*)(void);
printf("%c", password[i]);
}
else if (randomizer == 3)
{
password[i] = LETTER[rand() % 26];
randomizer = int (*)(void);
printf("%c", password[i]);
}
else
{
password[i] = letter[rand() % 26];
randomizer = int (*)(void)
printf("%c", password[i]);
}
}
}
