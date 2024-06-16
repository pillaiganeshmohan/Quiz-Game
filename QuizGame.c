#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void show_record();
void reset_score();
void help();
void edit_score(float, char[]);

int main() {
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    char playername[20];
    mainhome:
    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t     DEVELOPED BY GANESH MOHAN");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice = toupper(_getch());
    if (choice == 'V') {
        show_record();
        goto mainhome;
    } else if (choice == 'H') {
        help();
        _getch();
        goto mainhome;
    } else if (choice == 'R') {
        reset_score();
        _getch();
        goto mainhome;
    } else if (choice == 'Q') {
        exit(1);
    } else if (choice == 'S') {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name: ");
        fgets(playername, sizeof(playername), stdin);
        playername[strcspn(playername, "\n")] = 0; // Remove newline character if any

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLENGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give at least 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win up to ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(_getch()) == 'Y') {
            goto home;
        } else {
            goto mainhome;
        }

        home:
        system("cls");
        count = 0;
        for (i = 1; i <= 3; i++) {
            system("cls");
            r1 = i;

            switch (r1) {
                case 1:
                    printf("\n\nWhat's the biggest animal in the world?");
                    printf("\n\nA. Elephant\t\tB. Giraffe\n\nC. Blue Whale\t\tD. Shark");
                    if (toupper(_getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        count++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. Blue Whale");
                        _getch();
                        break;
                    }

                case 2:
                    printf("\n\n\nHow many times has Andy Murray won Wimbledon playing singles?");
                    printf("\n\nA. Once\t\tB. Twice\n\nC. Thrice\t\tD. Never");
                    if (toupper(_getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        count++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Twice");
                        _getch();
                        break;
                    }

                case 3:
                    printf("\n\n\nWhich animal laughs like a human being?");
                    printf("\n\nA. Polar Bear\t\tB. Hyena\n\nC. Donkey\t\tD. Chimpanzee");
                    if (toupper(_getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        count++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Hyena");
                        _getch();
                        break;
                    }
            }
        }

        if (count >= 2) {
            goto test;
        } else {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            _getch();
            goto mainhome;
        }

        test:
        system("cls");
        printf("\n\n\t*** CONGRATULATIONS %s you are eligible to play the Game ***", playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");
        if (toupper(_getch()) == 'P') {
            goto game;
        }

        game:
        system("cls");
        countr = 0;
        for (i = 1; i <= 10; i++) {
            system("cls");
            r = i;

            switch (r) {
                case 1:
                    printf("\n\nWhat is the National Game of India?");
                    printf("\n\nA. Football\t\tB. Basketball\n\nC. Hockey\t\tD. Baseball");
                    if (toupper(_getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. Hockey");
                        _getch();
                        goto score;
                    }

                case 2:
                    printf("\n\n\nHow many valves does the heart have?");
                    printf("\n\nA. One\t\tB. Two\n\nC. Three\t\tD. Four");
                    if (toupper(_getch()) == 'D') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is D. Four");
                        _getch();
                        goto score;
                    }

                case 3:
                    printf("\n\n\nWhat does He stand for on the periodic table?");
                    printf("\n\nA. Hydrogen\t\tB. Oxygen\n\nC. Helium\t\tD. Nitrogen");
                    if (toupper(_getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. Helium");
                        _getch();
                        goto score;
                    }

                case 4:
                    printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
                    printf("\n\nA. Faraday\t\tB. Tesla\n\nC. Maxwell\t\tD. Coulomb");
                    if (toupper(_getch()) == 'A') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is A. Faraday");
                        _getch();
                        goto score;
                    }

                case 5:
                    printf("\n\n\nWhat fruit takes the scientific name Mangifera indica?");
                    printf("\n\nA. Mosambi\t\tB. Mango\n\nC. Apple\t\tD. Chikkoo");
                    if (toupper(_getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Mango");
                        _getch();
                        goto score;
                    }

                case 6:
                    printf("\n\n\nWhat is the full form of SMS?");
                    printf("\n\nA. Social Media Service\t\tB. Short Messaging Service\n\nC. Social Messaging Service\t\tD. Short Media Service");
                    if (toupper(_getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Short Messaging Service");
                        _getch();
                        goto score;
                    }

                case 7:
                    printf("\n\n\nWhich city is known as The City of Seven Hills?");
                    printf("\n\nA. Rome\t\tB. Vadodara\n\nC. Berlin\t\tD. Athens");
                    if (toupper(_getch()) == 'A') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is A. Rome");
                        _getch();
                        goto score;
                    }

                case 8:
                    printf("\n\n\nWho was the first Indian to win the World Amateur Billiards title?");
                    printf("\n\nA. Geet Sethi\t\tB. Wilson Jones\n\nC. Michael Ferreira\t\tD. Manoj Kothari");
                    if (toupper(_getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Wilson Jones");
                        _getch();
                        goto score;
                    }

                case 9:
                    printf("\n\n\nIn what year did Maradona score a goal with his hand?");
                    printf("\n\nA. 1984\t\tB. 1988\n\nC. 1986\t\tD. 1990");
                    if (toupper(_getch()) == 'C') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is C. 1986");
                        _getch();
                        goto score;
                    }

                case 10:
                    printf("\n\n\nWhat is the capital of Finland?");
                    printf("\n\nA. Turku\t\tB. Helsinki\n\nC. Espoo\t\tD. Vantaa");
                    if (toupper(_getch()) == 'B') {
                        printf("\n\nCorrect!!!");
                        countr++;
                        _getch();
                        break;
                    } else {
                        printf("\n\nWrong!!! The correct answer is B. Helsinki");
                        _getch();
                        goto score;
                    }
            }
        }

        score:
        system("cls");
        score = (float)countr * 100000;
        if (score > 0.00 && score < 1000000) {
            printf("\n\n\t\t**************** CONGRATULATIONS *****************");
            printf("\n\t\t\t\t You won $%.2f", score);
            goto go;
        } else if (score == 1000000.00) {
            printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
            printf("\n\t\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
            printf("\n\t\t\t\t\t You won $%.2f", score);
            printf("\n\t\t\t\t\t Thank You!!");
        } else {
            printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
            printf("\n\t\t Thanks for your participation");
            printf("\n\t\t TRY AGAIN");
            goto go;
        }

        go:
        puts("\n\n Press Y if you want to play next game");
        puts(" Press any key if you want to go main menu");
        if (toupper(_getch()) == 'Y') {
            goto mainhome;
        } else {
            edit_score(score, playername);
            goto mainhome;
        }
    }
    return 0;
}

void show_record() {
    system("cls");
    char name[20];
    float scr;
    FILE *f;
    f = fopen("score.txt", "r");
    if (f == NULL) {
        printf("\n\n*****No record found*****");
        return;
    }
    fscanf(f, "%s%f", name, &scr);
    printf("\n\n\t*************************************************************");
    printf("\n\n\t %s has secured the Highest Score %0.2f", name, scr);
    printf("\n\n\t*************************************************************");
    fclose(f);
    _getch();
}

void reset_score() {
    system("cls");
    FILE *f;
    f = fopen("score.txt", "w");
    if (f == NULL) {
        printf("\n\n*****Error opening file*****");
        return;
    }
    fprintf(f, "%s %f", " ", 0.0);
    fclose(f);
}

void help() {
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game ...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLENGE ROUND");
    printf("\n >> In the warmup round, you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You are eligible to play the game if you give at least 2 right answers,");
    printf("\n    otherwise, you cannot proceed to the Challenge Round.");
    printf("\n >> Your game starts with the CHALLENGE ROUND. In this round, you will be asked a total");
    printf("\n    of 10 questions. Each right answer will be awarded $100,000. By this way, you can win");
    printf("\n    up to ONE MILLION cash prize!");
    printf("\n >> You will be given 4 options and you have to press A, B, C, or D for the right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given.");
    printf("\n >> No negative marking for wrong answers.");
    printf("\n\n\t*********************BEST OF LUCK*********************************");
    printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by GANESH MOHAN********");
}

void edit_score(float score, char plnm[20]) {
    system("cls");
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "r");
    if (f == NULL) {
        f = fopen("score.txt", "w");
        if (f == NULL) {
            printf("\n\n*****Error opening file*****");
            return;
        }
        fprintf(f, "%s %.2f", plnm, score);
        fclose(f);
    } else {
        fscanf(f, "%s%f", nm, &sc);
        if (score >= sc) {
            fclose(f);
            f = fopen("score.txt", "w");
            if (f == NULL) {
                printf("\n\n*****Error opening file*****");
                return;
            }
            fprintf(f, "%s %.2f", plnm, score);
            fclose(f);
        }
        fclose(f);
    }
}
