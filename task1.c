#include <stdio.h>
#include "common.h"

typedef struct {
    // TODO: Felder der Struktur hier einfügen
} room_t;

void print_room(room_t room) {
    // TODO: Strukturierte Ausgabe
}

int add_used_to_room(room_t *room, int amount) {
    // TODO: Anzahl der Menschen in den Raum einbuchen
    // Rückgabe 0, falls genügend Kapazität da war
    // Andernfalls Rückgabe != 0 (= Fehler)
}

int main(void) {

    room_t room;
    room.name = "342 (Grosser Raum)";
    room.building = "09";
    room.number = 342;
    room.capacity = 100;
    room.used = 0;

    print_room(room);

    // TODO: Testen Sie ihre Implementierung
    if (add_used_to_room(&room, 10)) {
        printf(RED "Error: Room is full\n" CLEAR);
        return 1;
    }

    print_room(room);


    printf(GREEN "Test passed! :) \n" CLEAR);
    return 0;
}