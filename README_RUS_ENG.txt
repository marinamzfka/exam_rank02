================================================================================
EXAM RANK02 - ПОЛНЫЙ СПРАВОЧНИК ВСЕХ ЗАДАНИЙ (ENG + RUS)
================================================================================

================================================================================
LEVEL 1 - ОСНОВЫ (не требует использования)
================================================================================

================================================================================
LEVEL 2
================================================================================

### UNION
** ENG: Display unique characters from both strings (order matters)
** RUS: Вывести уникальные символы из обоих строк без повторений в порядке появления
** Пример: union "zpa" "paqef" → zpaef

### WDMATCH  
** ENG: Check if 1st string is subsequence of 2nd (order preserved, not contiguous)
** RUS: Проверить, является ли первая строка подпоследовательностью второй
** Пример: wdmatch "faya" "fgvvfd..." → 1 (есть)

### PRINT_BITS
** ENG: Print byte in binary (8 bits)
** RUS: Печатать байт в двоичной системе (8 бит)
** Пример: print_bits(2) → 00000010

### REVERSE_BITS
** ENG: Reverse bits of a byte
** RUS: Перевернуть биты байта
** Пример: 01000001 → 10000010

### SWAP_BITS
** ENG: Swap two specific bits in a byte
** RUS: Обменять местами два определённых бита

### MAX
** ENG: Return maximum of two integers
** RUS: Вернуть максимум из двух чисел

### IS_POWER_OF_2
** ENG: Check if number is power of 2 (1, 2, 4, 8, 16...)
** RUS: Проверить, является ли число степенью 2

### INTER
** ENG: Display common characters of two strings
** RUS: Вывести общие символы двух строк (уникальные, в порядке первой строки)

### LAST_WORD
** ENG: Display last word of string
** RUS: Вывести последнее слово строки

### SNAKE_TO_CAMEL
** ENG: Convert snake_case to camelCase
** RUS: Преобразовать snake_case в camelCase

### CAMEL_TO_SNAKE  
** ENG: Convert camelCase to snake_case
** RUS: Преобразовать camelCase в snake_case

### FT_STRCMP
** ENG: Compare two strings (like strcmp)
** RUS: Сравнить две строки

### FT_STRCSPN
** ENG: Find first character from string that matches any in charset
** RUS: Найти позицию первого совпадения с символами из набора

### FT_STRPBRK
** ENG: Find first occurrence of any character from charset in string
** RUS: Найти первый символ из набора в строке

### FT_STRSPN
** ENG: Find first character NOT in charset (span of characters in set)
** RUS: Найти длину начальной последовательности символов из набора

### FT_STRREV
** ENG: Reverse a string
** RUS: Развернуть строку задом наперёд

### FT_STRDUP
** ENG: Duplicate string (allocate memory and copy)
** RUS: Дублировать строку (выделить память и скопировать)

### FT_ATOI
** ENG: Convert string to integer
** RUS: Преобразовать строку в целое число

### DO_OP
** ENG: Calculate result of operation (+, -, *, /, %)
** RUS: Вычислить результат операции (+, -, *, /, %)

### ALPHA_MIRROR
** ENG: Mirror letters (a↔z, b↔y...), keep others
** RUS: Зеркалировать буквы (a↔z, b↔y...), остальное не менять

================================================================================
LEVEL 3
================================================================================

### ADD_PRIME_SUM ✓
** ENG: Sum all prime numbers <= n
** RUS: Сумма всех простых чисел ≤ n
** Пример: 5 → 2+3+5 = 10

### EPUR_STR ✓
** ENG: Print string with exactly one space between words, no leading/trailing spaces
** RUS: Вывести строку с ровно одним пробелом между словами без пробелов в начале/конце
** Пример: "  ab  cd  " → "ab cd"

### EXPAND_STR ✓
** ENG: Print string with exactly 3 spaces between words (not 1)
** RUS: Вывести строку с ровно 3 пробелами между словами
** Пример: "ab cd" → "ab   cd"

### FT_ATOI_BASE ✓
** ENG: Convert string from base N (≤16) to decimal
** RUS: Преобразовать строку из системы счисления N (≤16) в десятичную
** Пример: ft_atoi_base("1011", 2) = 11, ft_atoi_base("FF", 16) = 255

### FT_LIST_SIZE ✓
** ENG: Return count of elements in linked list
** RUS: Вернуть количество элементов в связном списке

### FT_RANGE ✓
** ENG: Allocate array with consecutive values from start to end
** RUS: Выделить массив с числами от start до end включительно
** Пример: ft_range(1, 3) → [1, 2, 3]

### FT_RRANGE ✓
** ENG: Allocate array from end to start (reverse order)
** RUS: Выделить массив от end к start (обратный порядок)
** Пример: ft_rrange(1, 3) → [3, 2, 1]

### HIDENP ✓
** ENG: Check if first string is hidden in second (subsequence)
** RUS: Проверить, является ли первая строка подпоследовательностью второй
** Пример: "fgex" в "tyf34gdgf;'ektuf" → 1

### LCM ✓
** ENG: Lowest Common Multiple using HCF: LCM = (a*b) / HCF(a,b)
** RUS: Наименьшее общее кратное через НОД: LCM = (a*b) / НОД(a,b)

### PARAMSUM ✓
** ENG: Display count of command line arguments
** RUS: Вывести количество аргументов из командной строки

### PGCD ✓
** ENG: Display highest common divisor (НОД) of two numbers
** RUS: Вывести наибольший общий делитель двух чисел

### PRINT_HEX ✓
** ENG: Convert decimal number to hexadecimal (lowercase)
** RUS: Преобразовать десятичное число в шестнадцатеричное (буквы маленькие)
** Пример: 255 → ff

### STR_CAPITALIZER ✓
** ENG: Capitalize FIRST letter of each word, rest lowercase
** RUS: Капитализировать ПЕРВУЮ букву каждого слова, остальные маленькие
** Пример: "a FiRSt" → "A First"

### RSTR_CAPITALIZER ✓
** ENG: Capitalize LAST letter of each word, rest lowercase
** RUS: Капитализировать ПОСЛЕДНЮЮ букву каждого слова, остальные маленькие
** Пример: "a FiRSt" → "A firsT"

### TAB_MULT ✓
** ENG: Print multiplication table (1*n to 9*n)
** RUS: Вывести таблицу умножения (от 1*n до 9*n)
** Пример: 9 → 1 x 9 = 9, 2 x 9 = 18, ...

================================================================================
LEVEL 4
================================================================================

### SORT_INT_TAB ✓
** ENG: Sort integer array in ascending order (in-place, bubble sort)
** RUS: Отсортировать массив целых чисел по возрастанию (bubble sort)

### FPRIME ✓
** ENG: Display prime factors in ascending order separated by '*'
** RUS: Вывести простые множители в порядке возрастания, разделённые '*'
** Пример: 42 → 2*3*7

### FT_ITOA ✓
** ENG: Convert int to null-terminated string (allocate memory)
** RUS: Преобразовать целое число в строку (выделить память)

### FLOOD_FILL
** ENG: Fill 2D array region (paint bucket) from point, replacing connected same chars
** RUS: Закрасить регион 2D массива (как заливка), заменяя связанные символы на 'F'

### FT_LIST_FOREACH
** ENG: Apply function pointer to each element's data in linked list
** RUS: Применить функцию к data каждого элемента связного списка

### FT_LIST_REMOVE_IF
** ENG: Remove elements where cmp(data_ref, element->data) == 0, free data
** RUS: Удалить элементы, где cmp(data_ref, elem->data) == 0, освободить data

### FT_SPLIT
** ENG: Split string into words (malloc array of strings, NULL-terminated)
** RUS: Разбить строку на слова (выделить массив строк, заканчивающийся NULL)
** Пример: "a b c" → ["a", "b", "c", NULL]

### REV_WSTR
** ENG: Print words in reverse order (last word first)
** RUS: Печатать слова в обратном порядке (последнее слово первым)
** Пример: "You hate people" → "people hate You"

### ROSTRING
** ENG: Rotate string left by one word (first word moves to end)
** RUS: Повернуть строку влево на одно слово (первое в конец)
** Пример: "Que la lumiere" → "la lumiere Que"

### SORT_LIST
** ENG: Sort linked list using comparison function (bubble sort)
** RUS: Отсортировать связный список с использованием функции сравнения

================================================================================
ШПАРГАЛКА 42 ШКОЛЫ (САМЫЕ ВАЖНЫЕ ШАБЛОНЫ)
================================================================================

1. ЧТЕНИЕ СТРОК И КОНВЕРТАЦИЯ:
   - ft_atoi: пропустить пробелы, проверить знак, читать цифры
   - ft_atoi_base: цикл по символам, char_to_val для поиска индекса в базе

2. ВЫВОД ЧИСЕЛ (putnbr):
   - if (n >= 10) putnbr(n/10);
   - write(1, &((n%10)+'0'), 1);

3. РАБОТА СО СЛОВАМИ (epur_str, expand_str, str_capitalizer):
   - Пропустить начальные разделители
   - Печатать слово целиком
   - Между словами печатать ровно N пробелов
   - Пропустить конечные разделители

4. БИТОВЫЕ ОПЕРАЦИИ:
   - Вывод бита: (octet >> pos) & 1
   - Установка бита: octet |= (1 << pos)
   - Обнуление бита: octet &= ~(1 << pos)

5. СВЯЗНЫЕ СПИСКИ:
   - Проход: t_list *curr = list; while (curr) { ... curr = curr->next; }
   - Добавление в начало: new->next = list; list = new;

6. MALLOC:
   - Всегда проверять if (!ptr) return (NULL);
   - Выделять sizeof(type) * count

7. ПРОСТЫЕ ЧИСЛА:
   - is_prime: if (n <= 1) return 0; for (i=2; i*i<=n; i++) if (n%i==0) return 0; return 1;

8. НОД (для LCM):
   - while (b) { tmp = a % b; a = b; b = tmp; } return a;

================================================================================
