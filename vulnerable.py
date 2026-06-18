import subprocess
import sys

# Vulnerable code that will trigger code scanning alerts
user_input = input("Enter command: ")
subprocess.call(user_input, shell=True)  # CWE-78: OS Command Injection

# Hardcoded credentials
api_key = "sk-1234567890abcdefghijklmnop"
database_password = "super_secret_password_123"

# SQL Injection vulnerability
def query_database(user_id):
    query = "SELECT * FROM users WHERE id = " + user_id
    execute_query(query)
