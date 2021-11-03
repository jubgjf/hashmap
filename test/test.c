#include <hashmap.h>
#include <stdio.h>

int main() {
    struct hashmap* map = hashmap_init();

    char key[] = "hello world";
    int  value = 1;
    put(map, key, value);
    printf("value = %d\n", get(map, key));

    return 0;
}
