#include <iostream>
#include <cstring>

int vulnerable_func() {
    // SQL injection vulnerability - CodeQL will flag this
    char query[256];
    const char* user_input = "'; DROP TABLE users; --";
    sprintf(query, "SELECT * FROM users WHERE id = %s", user_input);
    
    std::cout << "Query: " << query << std::endl;
    return 0;
}
