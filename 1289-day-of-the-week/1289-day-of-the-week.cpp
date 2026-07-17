class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        string dayName[7] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                             "Thursday", "Friday", "Saturday"};

        int sum = 4;
        for (int i = 1971; i < year; i++) {
            if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
                sum += 366;
            } else {
                sum += 365;
            }
        }
        for (int i = 1; i < month; i++) {
            if (i == 2 &&
                (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))) {
                sum += 1;
            }
            sum += months[i];
        }
        sum += day;

        return dayName[sum % 7];
    }
};
// LEAP ->1972=>//365+1
// 1 JAN 1971-> FRIDAY

// January: 31 days
// February: 28 days and 29 in every leap year
// March: 31 days
// April: 30 days
// May: 31 days
// June: 30 days
// July: 31 days
// August: 31 days
// September: 30 days
// October: 31 days
// November: 30 days
// December: 31 days
