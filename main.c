#include <stdio.h>

void task1(){

    printf("Aufgabe 1: Satz umkehren\n\n");

    //Variablen definieren
    char sentence[]="Heute ist ein sonniger Tag! Die Luft ist frisch und warm.";
    int sentenceLength = sizeof(sentence)/sizeof(char);

    //Satz ausgeben
    for(int i = 0; i < sentenceLength-1; i++){
        printf("%c",sentence[i]);
    }

    printf("\n");

    //Variablen zum umdrehen definieren
    //Länge - 2 damit an erster Stelle nicht das Array Ende als Wert steht - \0
    int start = 0, end = sentenceLength - 2;

    //Bis zur Mitte des Satzes wiederholen
    while (start < end){

        //Temporär speichern des Zeichens, das ans Ende soll
        char tempChar = sentence[start];
        //Zeichen vom Ende an den Anfang setzen
        sentence[start] = sentence[end];
        //Temporär gespeichertes Zeichen ans Ende setzen
        sentence[end] = tempChar;

        //Zähler in die entsprechende Richtung ändern
        start++;
        end--;
    }

    //Satz ausgeben
    for(int i = 0; i < sentenceLength-1; i++){
        printf("%c",sentence[i]);
    }

    printf("\n\n");
}

void task2(){

    printf("Aufgabe 2: Array Laenge vergleichen\n\n");

    //Variablen definieren
    char array1[] = "Das ist ein kurzer Array.", array2[] = "Das ist der Array, der laenger ist.";
    int length1 = sizeof(array1)/sizeof(typeof(array1[0])), length2 = sizeof(array2)/sizeof(typeof(array2[0]));

    //Längen vergleichen und entsprechenden Array ausgeben
    if(length1 > length2){
        for(int i = 0; i < length1; i++){
            printf("%c",array1[i]);
        }
    } else {
        for(int i = 0; i < length2; i++){
            printf("%c",array2[i]);
        }
    }

    printf("\n\n");
}

void task3(){

    printf("Aufgabe 3: Array-Swap\n\n");

    //Variablen definieren
    char array1[] = "Programmieren ist schoen!", array2[] = "Der Computer funktioniert nicht!";
    int length1 = sizeof(array1)/sizeof(typeof(array1[0])), length2 = sizeof(array2)/sizeof(typeof(array2[0]));
    int limit = length1 > length2 ? length2 : length1;

    //Arrays ausgeben
    for(int i = 0; i < length1; i++){
        printf("%c",array1[i]);
    }
    printf("\n");
    for(int i = 0; i < length2; i++){
        printf("%c",array2[i]);
    }
    printf("\n\n");


    //Inhalt der Arrays tauschen. Der kleinere Array bestimmt das Limit. Alles was hinter dem Limit im längeren Array steht bleibt erhalten.
    for(int i = 0; i < limit; i++){
        char tempChar;
        tempChar = array1[i];
        array1[i] = array2[i];
        array2[i] = tempChar;
    }

    //Arrays ausgeben
    for(int i = 0; i < length1; i++){
        printf("%c",array1[i]);
    }
    printf("\n");
    for(int i = 0; i < length2; i++){
        printf("%c",array2[i]);
    }
    printf("\n\n");
}

int main()
{
    task1();
    task2();
    task3();

    return 0;
}
