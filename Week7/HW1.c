#include <stdio.h>

typedef struct Date {
    int year, month, day;
} Date;

typedef struct Competitor {
    char name[31];
    Date birth;
    int rank;
} Competitor;

void Date_print(Date d);

void Competitor_print(Competitor c);

int main() {
    Competitor competitors[5] = {
        { "Am, Erica", {1984, 5, 6}, 1 },
        { "Abnorm, Al", {1982, 9, 30}, 3 },
        { "Pri, Mary", {1988, 8, 25}, 2 },
        { "Duck, Ling", {1979, 6, 10}, 5 },
        { "Mac, Donald", {1992, 4, 5}, 4 },
    };
    printf("name of competitor 0: %s\n", competitors[0].name);        /* name of competitor 0 - printf %s */
    printf("rank of competitor 2: %d\n", competitors[1].rank);        /* rank of competitor 2 */
    printf("birth date of competitor 4: %d.%d.%d.\n", competitors[3].birth.year, competitors[3].birth.month, competitors[3].birth.day); /* birth date of competitor 4, use the given function */
    printf("the first letter of the name of competitor 1: %c\n", competitors[0].name[0]);     /* the first letter of the name of competitor 1 (a string is an array of characters) */
    printf("is competitor 1 among the best three? %d\n", competitors[0].rank <= 3);   /* is competitor 1 among the best three? yes/no, may use ?: operator */
    printf("is competitor 4 faster than competitor 3? %d\n", competitors[3].rank < competitors[2].rank);/* is competitor 4 faster than competitor 3? */
    printf("was competitor 1 born in the same year as competitor 2? %d\n", competitors[0].birth.year == competitors[1].birth.year); /* was competitor 1 born in the same year as competitor 2? */

    Competitor_print(competitors[0]);           /* at last print all data of all competitors. */
    for(int i = 0; i<5; i++){
        Competitor_print(competitors[i]);
    }

    /* complete the Competitor_print() function,
     * then print all data of competitor 1 */

    return 0;
}

void Date_print(Date d) {
    printf("%d.%d.%d", d.year, d.month, d.day);/* print year, month and day */
}

void Competitor_print(Competitor c) {
    printf("%s, [%d.%d.%d.], %d\n", c.name, c.birth.year, c.birth.month, c.birth.day, c.rank);
    /* print all data of the competitor */
}
