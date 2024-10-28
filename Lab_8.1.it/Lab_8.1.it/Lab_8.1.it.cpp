#include <iostream>
#include <cstring>

using namespace std;
/*
g+hi-j+k-l+
abc+-def
*/

bool findStr(char* str) {
    size_t len = strlen(str);
    for (size_t i = 1; i < len - 1; i++) {
        if (str[i - 1] == '+' && str[i + 1] == '-') {
            return true;
        }
    }
    return false;
}


char* Change(char* str) {
    size_t len = strlen(str);
    if (len < 3) return str;

    char* tmp = new char[len * 4 + 1];
    char* t = tmp;
    tmp[0] = '\0';

    for (size_t i = 0; i < len; i++) {
        if (i > 0 && i < len - 1 && str[i - 1] == '+' && str[i + 1] == '-') {
            strcat_s(t, len * 4 + 1 - (t - tmp), "****");
            t += 4;
            i += 2; 
        }
        else {
            *t++ = str[i];
            *t = '\0';
        }
    }

    return tmp;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    char* dest = Change(str);

    if (findStr(str)) {
        cout << "'+<char>-' pattern found and will be changed" << endl;
    }
    else {
        cout << "'+<char>-' pattern not found" << endl;
    }

    cout << "Original string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] dest;
    return 0;
}
