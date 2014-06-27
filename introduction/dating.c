#include <stdio.h>
#include <time.h>
#include <values.h>

int main(int argc, char** argv) {
    time_t max_time;

    max_time = (time_t)MAXLONG;
    // Print local time.
    printf("%s\n", "Local time:");
    printf("%s", ctime(&max_time));
    printf("%s\n", "UTC:");
    printf("%s", asctime(gmtime(&max_time)));

    return 0;
}
