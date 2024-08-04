## Assignment 24
Create a simple enum with lable `day` and enumerators as names of days in a week form Sunday to Saturday. get input from the user and compare it with the enumerator using switch statement, get which day of the week as number input from user and print the day Eg. if the user inputs 3 then it is Tuesday as week starts from Sunday.

Source: https://learn.microsoft.com/en-us/cpp/c-language/c-enumeration-declarations?view=msvc-170

## Pseudo Code
```c
enum day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

enum day today;

switch(dayofweek) {
    case MONDAY:
        ("Today is Monday!");
    ...
}
```

## Example Output
```$ ./day24
Which day of the week is today? 2
It's monday
```

