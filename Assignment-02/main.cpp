#include <iostream>

using namespace std;

void write_results(const char* s1, const char* s2);
int main() {
    char str1[] = "A very long sentence";
    char str2[] = "Another not so short sentence";
    write_results(str1,str2);
}
void write_results(const char* s1, const char* s2) {
    //Line 1
    for (char ch= 'a';ch <'z' ; ch++) {
        const char *s1Tmp = s1;
        bool s1State = 0;
        while (*s1Tmp && !s1State) {
            if (ch == *s1Tmp || ch == *s1Tmp - ('A'-'a') ) {
                s1State = 1;
            }
            s1Tmp++;

        }
        const char *s2Tmp = s2;
        bool s2State = 0;
        while (*s2Tmp && !s2State) {
            if (ch == *s2Tmp || ch == *s2Tmp - ('A'-'a') ) {
                s2State = 1;
            }
            s2Tmp++;

        }
        if (s1State == 1 && s2State ){
            cout << ch << " ";
        }
    }
    cout << endl;
    //Line 2
    for (char ch= 'a';ch <'z' ; ch++) {
        const char *s1Tmp = s1;
        bool s1State = 0;
        while (*s1Tmp != 0 && !s1State) {
            if (ch == *s1Tmp || ch == *s1Tmp - ('A'-'a') ) {
                s1State = 1;
            }
            s1Tmp++;

        }
        const char *s2Tmp = s2;
        bool s2State = 0;
        while (*s2Tmp != 0 && !s2State) {
            if (ch == *s2Tmp || ch == *s2Tmp - ('A'-'a') ) {
                s2State = 1;
            }
            s2Tmp++;

        }
        if (s1State == 1 && s2State != 1){
            cout << ch << " ";
        }
    }
}