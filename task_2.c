#include <stdio.h>
#include <string.h>

int indexOf(char text[], char word[]) {
    int textLen = strlen(text);
    int wordLen = strlen(word);

    if (wordLen > textLen) {
        return -1;  // Слово длиннее текста — поиск невозможен
    }

    for (int i = 0; i <= textLen - wordLen; i++) {
        int j;
        for (j = 0; j < wordLen; j++) {
            if (text[i + j] != word[j]) {
                break;  // Несовпадение символов — прерываем внутренний цикл
            }
        }
        if (j == wordLen) {
            return i;  // Все символы совпали — возвращаем индекс
        }
    }

    return -1;  // Слово не найдено
}

int main() {
    char sentence[] = "The cat sat on the mat";
    char word[] = "cat";

    int pos = indexOf(sentence, word);

    if (pos != -1) {
        printf("Слово '%s' найдено на позиции: %d\n", word, pos);
    } else {
        printf("Слово '%s' не найдено.\n", word);
    }

    return 0;
}