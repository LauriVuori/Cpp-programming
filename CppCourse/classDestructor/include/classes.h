/*
Class user, attributes:
first name, surname, phone number, username,password,
------------
constructors, destructors.
!destructor should display the username and password when it is called.
-get_info() method, which returns as text all user information except for the password.
-search() method, which receives the username as an argument and returns all the user information if the given username is the same as the user's username.
*/

#include "constants.h"
// Attributes:
// Firstname, surname, username, password, phonenumber
class users{
private:
    char firstname[MAXLEN];
    char surname[MAXLEN];
    char username[MAXLEN];
    char password[MAXLEN];
    char phonenumber[MAXLEN];
public:
    users();
    users(char*, char*, char*);
    users(char* , char*, char*, char*, char*);
    void init_info(char*, char*, char*);
    void get_info();
    void search(char*);
    // ~user();
    friend class admin;

};
/*
class admin, friend class to user
attributes:
username and password
set_usrname() method, which receives as argument a User object and a username and sets the username of the given object.
set_password() method, which receives as argument a User object and a password and sets the password of the given object.
*/

class admin{
    // char admin_password[MAXLEN];
    char* admin_password;
    char admin_username[MAXLEN];
public:
    admin();
    admin(char*, char*);
    void set_admin_usrname_password(char*, char*);
    void set_usrname(users* , char*);
    void set_user_password(users*, char*);
    void get_user_name(users*);
    void print_admin();
    bool authenticate();
    ~admin();
};


