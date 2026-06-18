#include <iostream>
#include <string>
#include <cstring> // Required for strcpy

int main() {
    // --- ALERT 1: Hardcoded Secrets / Credentials ---
    // CodeQL rule: cpp/hardcoded-credentials
    std::string apiKey = "sk-1234567890abcdefghijklmnopqrstuv";
    std::string dbPassword = "SupereScret123!@#";
    std::string jwtSecret = "my-super-secret-jwt-key-do-not-expose";
    
    std::cout << "Connecting with credentials..." << std::endl;
    
    // --- ALERT 2: Buffer Overflow Vulnerability ---
    // CodeQL rule: cpp/banned-api-usage or cpp/unsafe-strcat-strcpy-call
    char buffer[10];
    const char* user_input = "This is a long string that will overflow the buffer";
    
    // SECURITY WARNING: This will overflow 'buffer' and trigger CodeQL
    strcpy(buffer, user_input);  
    
    std::cout << "Buffer: " << buffer << std::endl;
    
    return 0;
}
