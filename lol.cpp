#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

class String {
public:
char s[100];
String get_string() {
        cin >> s;
        return *this;
}

char *put_string() {
        return (char *) s;
}


int length() {
        return strlen(s);
}

String operator=(const String &op) {
        strcpy(s, op.s);
        return *this;
}

String operator+(const String &op) {
        String res;
        res = *this;
        strcat(res.s, op.s);
        return res;
}

bool operator<=(String op) {
        if (length() <= op.length())
                return true;
        else
                return false;
}
};

int main()
{
        String A, B;
        cout << "Enter the first string: ";
        A.get_string();
        cout << "Enter the second string: ";
        B.get_string();

        String C = A + B;
        cout << "\nConcatenated string: " << C.put_string() <<"\n";

        cout << "\nString A <= String B: " << (A <= B ? "True\n": "False\n");
        cout << "Length of string A: " << A.length() << "\n";
        cout << "Length of string B: " << B.length() << "\n";

        String D;
        D=A;
        cout<<"\nString D is: "<<D.put_string();

        return 0;
}
