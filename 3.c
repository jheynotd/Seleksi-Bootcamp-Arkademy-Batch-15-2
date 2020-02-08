    #include <stdio.h>
    void count_vowels();
   
    int main() {
        char kata[1024];
        printf("Masukkan Kata: ");
        fgets(kata, sizeof(kata), stdin);
        count_vowels(kata);
    }
    
    void count_vowels(char kata[150]) {
        int vowels;
        vowels=0;
        for (int i = 0; kata[i] != '\0'; ++i) {
            if (kata[i] == 'a' || kata[i] == 'e' || kata[i] == 'i' ||
                kata[i] == 'o' || kata[i] == 'u' || kata[i] == 'A' ||
                kata[i] == 'E' || kata[i] == 'I' || kata[i] == 'O' ||
                kata[i] == 'U') {
                ++vowels;
            } else {
                vowels;
            }
        }
        printf("Vowels: %d", vowels);
        return 0;
    }