package Beginner;

import java.util.Scanner;
 
public class Java0010_CountSetOfCharacters {

    public static void main(String[] args) {

        int counter = 0, i = 0;
        char character;
        String ch, result = "";

        Scanner s = new Scanner(System.in);
        ch = s.nextLine();
        while ((character = ch.charAt(i++)) != '\0')
        {

            //if(character == '-')
            //    break;

            if (character > 64 && character < 91 || character > 96 && character < 123)
            {

                if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u'
                        && character != 'A' && character != 'E' && character != 'I' && character != 'O' && character != 'U')
                {

                    if (character < 91)
                        result += character;

                    if (character > 96)
                        result += character;
                }
                counter++;
            }
//            System.out.printf("%d ",counter);
//            System.out.println(result.toUpperCase());
        }

            System.out.printf("%d ",counter);
            System.out.println(result.toUpperCase());
    }
}
