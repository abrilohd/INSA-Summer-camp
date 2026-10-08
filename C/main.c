#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vulnerable_copy(const char *input) {
    char buffer[16];
    printf("[Unsafe] Copying input into a small buffer...\n");
    strcpy(buffer, input);  // Vulnerable: no length check
    printf("Buffer contents: %s\n", buffer);
}

void safe_copy(const char *input) {
    char buffer[16];
    printf("[Safe] Copying input with a size check...\n");

    if (snprintf(buffer, sizeof(buffer), "%s", input) >= (int)sizeof(buffer)) {
        printf("Input was too long and was truncated.\n");
    } else {
        printf("Buffer contents: %s\n", buffer);
    }
}

int main(void) {
    int stack_value = 42;
    int *heap_value = (int *)malloc(sizeof(int));

    if (heap_value == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *heap_value = 100;

    printf("C for Cybersecurity: Memory, Vulnerabilities, and Safety\n");
    printf("----------------------------------------------------\n");
    printf("Stack example: stack_value = %d at %p\n", stack_value, (void *)&stack_value);
    printf("Heap example:  heap_value = %d at %p\n", *heap_value, (void *)heap_value);

    printf("\nExample input: ThisIsAReallyLongName\n");
    vulnerable_copy("ThisIsAReallyLongName");
    safe_copy("ThisIsAReallyLongName");

    printf("\nWhy this matters:\n");
    printf("- Unchecked copies can overwrite nearby memory.\n");
    printf("- This can crash programs or lead to exploitation.\n");
    printf("- The safer path is to check sizes and use bounded functions.\n");

    free(heap_value);
    return 0;
}