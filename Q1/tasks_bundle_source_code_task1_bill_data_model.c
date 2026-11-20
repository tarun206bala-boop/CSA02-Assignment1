#include <stdio.h>

int main(void) {
    // Consumer details and meter readings
    int house_no = 1204;
    char category = 'D';
    unsigned int prev_reading = 1200;
    unsigned int curr_reading = 1530;

    unsigned int units_used = curr_reading - prev_reading;

    // Store currency in paise to avoid floating-point rounding issues
    long long energy_paise = 0;
    long long fixed_paise = 5000;
    long long total_paise = energy_paise + fixed_paise;

    printf("Household: %d Category: %c\n", house_no, category);
    printf("Previous: %u Current: %u\n", prev_reading, curr_reading);
    printf("Units: %u\n", units_used);
    printf("Energy charge: Rs %lld.%02lld\n", energy_paise / 100, energy_paise % 100);
    printf("Fixed charge: Rs %lld.%02lld\n", fixed_paise / 100, fixed_paise % 100);
    printf("Total: Rs %lld.%02lld\n", total_paise / 100, total_paise % 100);

    return 0;
}
