#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void countAnagrams(char *word, int start, int end, int *count) {
    if (start == end) {
        // Досягли останньої букви слова, виводимо анаграму
        printf("%s\n", word);
        (*count)++;
    } else {
        for (int i = start; i <= end; i++) {
            // Перевірка, чи була буква обмінена раніше
            int isSwapped = 0;
            for (int j = start; j < i; j++) {
                if (word[j] == word[i]) {
                    isSwapped = 1;
                    break;
                }
            }
            
            if (isSwapped) {
                continue;
            }
            
            // Обмінюємо поточну букву з наступними буквами
            swap((word + start), (word + i));

            // Рекурсивний виклик для решти букв
            countAnagrams(word, start + 1, end, count);

            // Повертаємо букви у початковий порядок для наступних ітерацій
            swap((word + start), (word + i));
        }
    }
}

int main() {
    char word[15];
    printf("Enter the word: ");
    scanf("%s", word);

    int count = 0;
    int length = strlen(word);
    countAnagrams(word, 0, length - 1, &count);

    printf("Number of anagrams: %d\n", count);
scanf(" ");
    return 0;
}
