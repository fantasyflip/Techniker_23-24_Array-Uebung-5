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

int main()
{
    task1();

    return 0;
}
