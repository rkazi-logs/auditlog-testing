#include <iostream>
#include <cstdio>

int main() {
    // Some functions return critical status codes that should be verified.
    // Ignoring the return value of std::remove may flag a CWE-252 finding.
    char buffer[10];
    const char* user_input = "This is a long string that will overflow the buffer";
    strcpy(buffer, user_input);  // SECURITY: Buffer overflow

    std::cout << "Operation attempted completed." << std::endl;
    return 0;
}
