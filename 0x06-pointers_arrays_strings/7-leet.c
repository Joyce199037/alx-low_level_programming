root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# cat>5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
^C
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# chmod u+x 5-main.c
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# cat>5-string_toupper.c
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
        int index = 0;

        while (str[index])
        {
                if (str[index] >= 'a' && str[index] <= 'z')
                        str[index] -= 32;

                index++;
        }

        return (str);
}
^C
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# chmod u+x 5-string_toupper.c
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# git add .
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# git commit -m " Always look up"
[master c896a3d]  Always look up
 3 files changed, 41 insertions(+)
 create mode 100755 0x06-pointers_arrays_strings/4-rev_array
 create mode 100755 0x06-pointers_arrays_strings/5-main.c
 create mode 100755 0x06-pointers_arrays_strings/5-string_toupper.c
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 3.66 KiB | 3.66 MiB/s, done.
Total 6 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Joyce199037/alx-low_level_programming.git
   4c874d2..c896a3d  master -> master
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper && ./5-string_toupperLOOK UP!
LOOK UP!
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# cat>6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
^C
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# chmod u+x 6-main.c
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# cat>6-cap_string.c
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
        int index = 0;

        while (str[index])
        {
                while (!(str[index] >= 'a' && str[index] <= 'z'))
                        index++;

                if (str[index - 1] == ' ' ||
                    str[index - 1] == '\t' ||
                    str[index - 1] == '\n' ||
                    str[index - 1] == ',' ||
                    str[index - 1] == ';' ||
                    str[index - 1] == '.' ||
                    str[index - 1] == '!' ||
                    str[index - 1] == '?' ||
                    str[index - 1] == '"' ||
                    str[index - 1] == '(' ||
                    str[index - 1] == ')' ||
                    str[index - 1] == '{' ||
                    str[index - 1] == '}' ||
                    index == 0)
                        str[index] -= 32;

                index++;
        }

        return (str);
}
^C
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# chmod u+x 6-cap_string.c
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# git add .
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# git commit -m "Expect the best. Prepare for the worst. Capitalize on what comes"
[master 2c0ed47] Expect the best. Prepare for the worst. Capitalize on what comes
 3 files changed, 56 insertions(+)
 create mode 100755 0x06-pointers_arrays_strings/5-string_toupper
 create mode 100755 0x06-pointers_arrays_strings/6-cap_string.c
 create mode 100755 0x06-pointers_arrays_strings/6-main.c
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# git push
Enumerating objects: 8, done.
Counting objects: 100% (8/8), done.
Delta compression using up to 2 threads
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 3.64 KiB | 3.64 MiB/s, done.
Total 6 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Joyce199037/alx-low_level_programming.git
   c896a3d..2c0ed47  master -> master
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# ./6-cap
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World     Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World     Hello World.Hello World
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# cat>7-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
^C
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# chmod u+x 7-main.c
root@45f8f434eccb:~/alx-low_level_programming/0x06-pointers_arrays_strings# cat>7-leet.c
#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
			    str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}

		indx1++;
	}

	return (str);
}
