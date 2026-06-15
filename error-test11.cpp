#include <iostream>
#include <cstring>

int main() {
    // Buffer overflow vulnerability - CodeQL will flag this
    char buffer[100];
    const char* user_input = "This is a long string that will overflow the buffer";
    strcpy(buffer, user_input);  // SECURITY: Buffer overflow
    
    std::cout << "Buffer: " << buffer << std::endl;
    return 0;
}
