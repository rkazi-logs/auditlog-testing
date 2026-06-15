#include <iostream>
#include <cstring>

int main() {
    // Buffer overflow vulnerability - CodeQL will flag this
    char buffer[100];
    const char* user_input = "This is a long string that will overflow the buffer";
    strcpy(buffer, user_input);  // SECURITY: Buffer overflow
    
    // SQL Injection vulnerability
    std::string query = "SELECT * FROM users WHERE id=" + user_input;
    
    // Use-after-free potential
    int* ptr = new int(42);
    delete ptr;
    std::cout << *ptr << std::endl;  // SECURITY: Use-after-free
    
    std::cout << "Buffer: " << buffer << std::endl;
    return 0;
}
