/*
A program
may contain character constants. A character constant is an integer value represented as a
character in single quotes. The value of a character constant is the integer value of the char-
acter in the machine’s character set. For example, 'z' represents the integer value of z (122
in the ASCII character set; see Appendix B), and '\n' represents the integer value of new-
line (10 in the ASCII character set).
*/

#include <iostream>

using namespace std;

int main()
{
    // *String Literals as Initializers. String literals cannot be modified.
    
    // The first declaration creates a five-element
    // built-in array color containing the characters 'b' , 'l' , 'u' , 'e' and '\0' .
    char color[]{"blue"}; 

    // creates pointer variable colorPtr that points to the letter b in the string "blue"
    //(which ends in '\0' ) somewhere in memory
    const char* colorPtr{"blue"};    

    // *Character Constants as Initializers
    char color_2[]{'b', 'l', 'u', 'e', '\0'};

    return 0;
}
/*
Pointer-Based Strings
A pointer-based string is a built-in array of characters ending with a null character ( '\0' ),
which marks where the string terminates in memory. A string is accessed via a pointer to
its first character. The result of sizeof for a string literal is the length of the string includ-
ing the terminating null character.

*/