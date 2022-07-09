#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    int cont_letra = 0;
    int cont_palavra = 1;
    int cont_frase = 0;
    string s = get_string("Texto: ");
    printf("%s\n", s);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            cont_letra++;
        }
        if (s[i] == ' ')
        {
            cont_palavra++;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            cont_frase++;
        }
    }
printf("%i letras\n", cont_letra);
printf("%i palavras\n", cont_palavra);
printf("%i frases\n", cont_frase);
// Coleman liau index
float grade = 0.0588 * (100 * (float) cont_letra / (float) cont_palavra) - 0.296 * (100 * (float) cont_frase / (float) cont_palavra) - 15.8;
if (grade < 1 )
{
    printf("Before Grade 1\n");
}
else if (grade >= 16)
{
    printf("Grade 16+\n");
}
else
{
    printf("Grade %.f\n", grade);
}
}