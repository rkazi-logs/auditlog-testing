#include <iostream>
#include <string>

int main() {
    // CodeQL will flag this as hardcoded secret / credential
    std::string apiKey = "sk-1234567890abcdefghijklmnopqrstuv";
    std::string dbPassword = "SuperSecret123!@#";
    std::string jwtSecret = "my-super-secret-jwt-key-do-not-expose";
    
    std::cout << "Connecting with credentials..." << std::endl;
    
    return 0;
}

int main() {
    // Buffer overflow vulnerability - CodeQL will flag this
    char buffer[10];
    const char* user_input = "This is a long string that will overflow the buffer";
    strcpy(buffer, user_input);  // SECURITY: Buffer overflow
    
    std::cout << "Buffer: " << buffer << std::endl;
    return 0;
}
