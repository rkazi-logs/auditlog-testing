#include <iostream>

int main() {
int main() {
    // Buffer overflow vulnerability - CodeQL will flag this
    char buffer[10];
    const char* user_input = "This is a long string that will overflow the buffer";
    strcpy(buffer, user_input);  // SECURITY: Buffer overflow
    
    std::cout << "Buffer: " << buffer << std::endl;
    return 0;
}
    // Intentional syntax error: Missing semicolon and unclosed quote
        std::cout << "This scan will fail intentionally
    
    // Deleting the return type and breaking structure
    void* = &&
    return 0;
    void* = &&&$
}
