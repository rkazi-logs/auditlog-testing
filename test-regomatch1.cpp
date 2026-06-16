#include <iostream>
#include <string>
#include <sqlite3.h>

// SQL Injection vulnerability - CodeQL will flag this
void executeQuery(const std::string& userInput) {
    sqlite3* db;
    char* errMsg = nullptr;
    
    sqlite3_open("test.db", &db);
    
    // Vulnerable: directly concatenating user input into SQL query
    std::string query = "SELECT * FROM users WHERE username = '" + userInput + "'";
    
    int rc = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errMsg);
    
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errMsg << std::endl;
        sqlite3_free(errMsg);
    }
    
    sqlite3_close(db);
}

int main() {
    // This could be exploited with: admin' OR '1'='1
    executeQuery("user_input");
    return 0;
}
