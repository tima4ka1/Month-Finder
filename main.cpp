#include<iostream>

using namespace std;

int main() {
    int ok;
    do{
        int user_number, transformed_number, transformed_season;
        array<string, 12> months_names = {
            "January", "February", "March", "April",
            "May", "June", "July", "August", "September",
            "October", "November", "December"
        };
        array<string, 4> seasons = {
            "Winter", "Spring", "Summer", "Autumn"
        };
        array<int, 12> months_days = {
            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
        };
        cout << "Welcome to Month Finder app!\nPlease enter a month number to find out which month is it: ";

        do {
            cin >> user_number;
            if (user_number <= 0) {
                cout << "You should enter a positive number!\nTry again: ";
            }
        } while(user_number <= 0);

        transformed_number = (user_number - 1) % 12;
        if (transformed_number <= 1 || transformed_number == 11) {
            transformed_season = 0;
        } else if (transformed_number >= 2 && transformed_number <= 4) {
            transformed_season = 1;
        } else if (transformed_number >= 5 && transformed_number <= 7) {
            transformed_season = 2;
        } else {
            transformed_season = 3;
        };

        cout << "You have entered: " << user_number << " month and it is: " << months_names[transformed_number] << endl;
        cout << "And it has: " << months_days[transformed_number] << " days. The season is: " << seasons[transformed_season] << endl;

        cout << "Do you want to try again (1) or stop (0)? ";
        cin >> ok;
    } while (ok == 1);
    return 0;
}