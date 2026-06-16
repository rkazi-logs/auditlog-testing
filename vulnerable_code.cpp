#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Vulnerable: Buffer overflow
    char buffer[10];
    char input[100];
    
    printf("Enter input: ");
    scanf("%s", input);  // Vulnerable: No bounds checking
    
    strcpy(buffer, input);  // Vulnerable: strcpy without bounds checking - can cause buffer overflow
    
    printf("You entered: %s\n", buffer);
    
    // Vulnerable: Use of hardcoded password
    const char* password = "admin123";
    
    // Vulnerable: SQL injection risk
    char query[256];
    sprintf(query, "SELECT * FROM users WHERE username='%s'", input);
    
    return 0;
}
