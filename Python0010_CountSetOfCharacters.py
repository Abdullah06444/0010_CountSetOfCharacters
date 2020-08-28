counter = 0
i = 0
ch = str(input())
result = ""
print("string => ", ch, " length => ", len(ch))

for i in range(len(ch)):

    if ch[i] != ' ':
        character = ch[i]
        if character != 'a' and character != 'e' and character != 'i' and character != 'o' and character != 'u' \
        and character != 'A' and character != 'E' and character != 'I' and character != 'O' and character != 'U':
            print("4uuuuuuu {0} ".format(counter))
            print("result ", result, " char ", character)
            if character < 91:
                result.append(character)
            #if character < 91 or character > 96:
            #   result.append(character)


    print("i => ", i)
    counter += 1


print("{0} ".format(counter))
print(result.upper())
