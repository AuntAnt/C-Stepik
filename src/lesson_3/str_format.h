#include <stdio.h>

void format_date() {
        int year;            // год
        int month;           // месяц
        int day;             // день
        int hours;           // часы
        int minutes;         // минуты
        int seconds;         // секунды
        int utc_offset;      // смещение в часах относительно UTC

        year = 2025;
        month = 7;
        day = 16;
        hours = 13;
        minutes = 20;
        seconds = 45;
        utc_offset = 3;
        
        // Здесь напишите вызов функции printf
        printf("%4.4d-%2.2d-%2.2dT%d:%d:%d%+2.2d\n", year, month, day, hours, minutes, seconds, utc_offset);
        // Правильно составленный вызов функции printf для данных выше
        // выведет следующую строку
        // 2025-07-16T13:20:45+03
}

void s_holmes() {
        printf("S.Holmes:\n");
        printf("%-2.1dgrad %2.d\'%.2f\" %c\n", 51, 31, 25.48, 'N');
        printf("%-2.1dgrad %2.d\'%.2f\" %c\n", 0, 9, 29.92, 'W');

        //51grad 31'25.48" N
        //0 grad  9'29.93" W
}

void meteo() {
        char station_code;   // буквенный код метеостанции
        int station_number;  // числовой код метеостанции
        float temperature;   // температура
        double pressure; // атмфосферное давление

        station_code = 'F';
        station_number = 93;  
        temperature = 5.54;   
        pressure = 755.63;

        printf("|%c%3.3d|%+6.2f|%.1f|\n", station_code, station_number, temperature, pressure);
        // Правильно составленный вызов функции printf
        // для данных, указанных выше, выведет следующую строку
        // |F93|25.54|755.6|
}

void multipy_table() {
        for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= 5; j++) printf("%-5.d", i * j);
        printf("\n");
    }
}
