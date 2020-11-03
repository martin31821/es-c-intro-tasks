#include <stdio.h>
#include <stdint.h>
#include "common.h"

typedef struct {
    float x;
    float y;
} point_t;

typedef struct {
    point_t a;
    point_t b;
    point_t c;
} triangle_t;

int check_point(const triangle_t *triangle, point_t point_to_check) {
    // TODO: Check whether the point_to_check resides within triangle
    return 0;
} 

void print_triangle(const triangle_t *triangle, uint32_t w, uint32_t h) {
    // TODO: Add nested loop for X and Y and check for each point
    // Whether it resides within the triangle and print an according character.
}

int main(int argc, const char **argv) {
    // TODO: Add argument parsing

    triangle_t triangle = {
        .a = { .x = 0.1, .y = 0.1 },
        .b = { .x = 0.9, .y = 0.1 },
        .c = { .x = 0.5, .y = 0.9 },
    };

    uint32_t w = 80;
    uint32_t h = 25;

    print_triangle(&triangle, w, h);
}