/* 
-----   In preprocessing some task is proceed -----
    * Removal of comments;
    * Change macros value with respective variables;
    * It is text substitution tools;
    * All preprocessor command start with #;

-----  Some Commands of Preprocessor   -----
    * #define
    * #include
    * #undef
    * #ifdef
    * #ifndef
    * #if
    * #else
    * #elif
    
    ** #INCLUDE directives
        - This directive used to include or linking two or more files;
        - Mostly we includes .h files;
        - During implements we use <> brackets for use library from standard directory;
        - During implements we use "" for use library from Current directory;

    ** #DEFINE directives
        - It used to define preprocessor variable;
        - Which globally or during preprocessing replace with values;
        - Also used to debugging codes;
        - Also used to create macros to faster access;
    
    ** #UNDEF directive
        - Undefine the macros and preprocessor variables;
    
    ** #PRAGMA
        - To issue some special commands to the compiler;

    ** Predefine Macros in C
        - __DATE__
        - __TIME__
        - __FILE__
        - __LINE__
        - __STDC__
*/

#include <stdio.h>  // Fetch files from System directory;
// #include "41_Wild_Pointers.C"  // Fetch file from current directory;
#define PI 3.14
#define SQUARE(x) (x)*(x)  // Create macros;
#define CIRCLE(x) (PI)*(x)*(x)

int main (){
    float var = PI;
    int side = 4, rad = 7;

    printf("\nValue of PI : %f", var);
    printf("\nArea of Square with side %d : %d", side, SQUARE(side));
    printf("\nArea of CIrcle with radius %d : %f", rad, CIRCLE(rad));

    // Use predefined macros;
    printf("\nFile name is %s", __FILE__);
    printf("\nToday's Date is %s", __DATE__);
    printf("\nLine Number is %d", __LINE__);
    printf("\nTime is %s", __TIME__);
    printf("\nANCI %d", __STDC__);

    return 0;
}