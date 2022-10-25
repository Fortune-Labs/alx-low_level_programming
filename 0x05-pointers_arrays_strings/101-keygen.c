#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int index_var = 0, sum = 0, diff_half1, diff_half2;

srand(time(0));

while (sum < 2772)
{
password[index_var] = 33 + rand() % 94;
sum += password[index_var++];
}

password[index_var] = '\0';

if (sum != 2772)
{
diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
diff_half1++;

for (index_var = 0; password[index_var]; index_var++)
{
if (password[index_var] >= (33 + diff_half1))
{
password[index_var] -= diff_half1;
				break;
}
}
for (index_var = 0; password[index_var]; index_var++)
{
if (password[index_var] >= (33 + diff_half2))
{
password[index_var] -= diff_half2;
break;
}
}
}

printf("%s", password);

return (0);
}
