using namespace std;
#include<iostream>
#include<conio.h>

class INTER
{
public:
bool isInterleaved(char *A, char *B, char *C)
{
    // Base Case: If all strings are empty
    if (!(*A || *B || *C))
        return true;

    // If C is empty and any of the two strings is not empty
    if (*C == '\0')
        return false;

    // If any of the above mentioned two possibilities is true,
    // then return true, otherwise false
    return ( (*C == *A) && isInterleaved(A+1, B, C+1))
           || ((*C == *B) && isInterleaved(A, B+1, C+1));
}
};

int main()
{
 char A[]="aabcc";
 char B[]="dbbca";
 char C[]="aadbbcbcac";
 INTER z;
 cout<<z.isInterleaved(A,B,C);
 getch();
 return 0;   
}
