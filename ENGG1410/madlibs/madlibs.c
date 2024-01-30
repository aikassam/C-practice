#include <stdio.h>
#include <stdlib.h>

int main()
{
    char adj1[20], adj2[20], noun1[20], noun2[20], pluralnoun1[20], game1[20], pluralnoun2[20], verb1[20], verb2[20], pluralnoun3[20], verb3[20], noun3[20], plant1[20], bodypart1[20], place1[20], verb4[20], adj3[20], num1[20], pluralnoun4[20];
    char entadj [] = "Enter an adjective: \n";
    char entnoun [] = "Enter a noun: \n";
    char entpluralnoun [] = "Enter a plural noun: \n";
    char entgame [] = "Enter the name of a game: \n";
    char entverb [] = "Enter a verb ending in \"-ing\"\n";
    char entbodypart [] = "Enter the name of a body part: \n";
    char entplace [] = "Enter the name of a place: \n";
    char entnum [] = "Enter a number in word form: \n";
    printf("%s", entadj);
    scanf("%s", adj1);
    printf("%s", entadj);
    scanf("%s", adj2);
    printf("%s", entnoun);
    scanf("%s", noun1);
    printf("%s",entnoun);
    scanf("%s", noun2);
    printf("%s", entpluralnoun);
    scanf("%s", pluralnoun1);
    printf("%s", entgame);
    scanf("%s", game1);
    printf("%s", entpluralnoun);
    scanf("%s", pluralnoun2);
    printf("%s", entverb);
    scanf("%s", verb1);
    printf("%s", entverb);
    scanf("%s", verb2);
    printf("%s", entpluralnoun);
    scanf("%s", pluralnoun3);
    printf("%s", entverb);
    scanf("%s", verb3);
    printf("%s",entnoun);
    scanf("%s", noun3);
    printf("Enter a plant:\n");
    scanf("%s", plant1);
    printf("%s", entbodypart);
    scanf("%s", bodypart1);
    printf("%s", entplace);
    scanf("%s", place1);
    printf("%s", entverb);
    scanf("%s", verb4);
    printf("%s", entadj);
    scanf("%s", adj3);
    printf("%s", entnum);
    scanf("%s", num1);
    printf("%s", entpluralnoun);
    scanf("%s", pluralnoun4);

    printf("A vacation is when you take a trip to some %s place with your %s family.\n", adj1, adj2);
    printf("Usually you go to some place that is near a/an %s or up on a/an %s.\n", noun1, noun2);
    printf("A good vacation place is one where you can ride %s or play %s or go hunting for %s.\n", pluralnoun1, game1, pluralnoun2);
    printf("I like to spend my time %s, or %s.\n", verb1, verb2);
    printf("When parents go on a vacation, they spent their time eating three %s a day, and fathers play golf, and mothers sit around %s. \n", pluralnoun3, verb3);
    printf("Last summer, my little brother fell in a/an %s and got poison %s all over his %s. \n", noun3, plant1, bodypart1);
    printf("My family is going to (the) %s, and I will practice %s. \n", place1, verb4);
    printf("Parents need vacations more than kids because parents are always very %s and because they have to work %s hours every day all year making enough %s to pay for the vacation. \n", adj3, num1, pluralnoun4);


    return 0;

}   