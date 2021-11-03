#include <hashmap.h>
#include <stdio.h>
#include <string.h>

int main() {
    struct hashmap* map = hashmap_init();

    char key[] = "hello world";
    int  value = 1;
    put(map, key, value);
    printf("value = %d\n", get(map, key));

    strcpy(key, "again");
    value = 2;
    put(map, key, value);
    printf("value = %d\n", get(map, key));

    printf("value = %d\n", get(map, "hello world"));

    return 0;
}
