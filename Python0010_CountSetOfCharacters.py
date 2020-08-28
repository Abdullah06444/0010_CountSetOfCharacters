counter = 0
i = 0
ch = str(input())
result = ""

for i in range(len(ch)):

    if ch[i] != ' ':
        character = ch[i]
        if character >= 'A' and character <= 'Z' or character >= 'a' and character <= 'z':
            if character != 'a' and character != 'e' and character != 'i' and character != 'o' and character != 'u' \
            and character != 'A' and character != 'E' and character != 'I' and character != 'O' and character != 'U':
                if character <= 'Z' or character >= 'a':
                    result += character
            counter += 1
#            print("counter= {0}".format(counter),result)

print("{0}".format(counter),result.upper())
