#include <stdio.h>
 
void calculations() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", a + b - c);
}

void seconds_since_start_of_day() {
    int h; // часы
    int m; // минуты
    int s; // секунды

    scanf(" %d :", &h);
    scanf(" %d :", &m);
    scanf( "%d\n", &s);

    int seconds = h*60*60 + m*60 + s;

    printf("%d\n", seconds);
}

void ship_coord() {
    char char_coord;
    int digit_coord;

    scanf("%c %d", &char_coord, &digit_coord);
    printf("%c%d\n", char_coord, digit_coord);
}

void chess_notation() {
    char piece_code;
    char v_position;
    int h_position;

    scanf("%c%*c%*d - %c%d", &piece_code, &v_position, &h_position);
    printf("|%c%c%d|\n", piece_code, v_position, h_position);
}

void phone_number_format() {
    char prefix;
    int contry_code, operator_code, f_part, s_part, t_part;
    
    scanf("%c%1d%3d%3d%2d%2d", &prefix, &contry_code, &operator_code, &f_part, &s_part, &t_part);
    printf("%c%d (%3.3d) %3.3d-%2.2d-%2.2d\n", prefix, contry_code, operator_code, f_part, s_part, t_part);
}
