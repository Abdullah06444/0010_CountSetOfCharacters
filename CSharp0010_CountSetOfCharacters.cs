using System;
using System.Text;

namespace CSharp0010_CountSetOfCharacters
{
    class CSharp0010_CountSetOfCharacters
    {
        static void Main(string[] args)
        {
			int counter = 0, i = 0;
			char character;
			StringBuilder result = new StringBuilder();
			string ch = Console.ReadLine();

			while ((character = char.Parse(ch.Substring(i++, 1))) != '-')
			{
				if (character != ' ')
					if (character > 64 && character < 91 || character > 96 && character < 123)
					{
						if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u'
							&& character != 'A' && character != 'E' && character != 'I' && character != 'O' && character != 'U')
						{

							if (character > 64 && character < 91)
								result.Append(character);

							if (character > 96 && character < 123)
								result.Append(character);
						}
						counter++;
					}

				//Console.WriteLine(counter + " " + result);
			}
			// stringBuilder, toString parametresi ile string yapip 
			// harfleri toUpper ile buyuk harf olarak yazabildik.
			Console.WriteLine(counter + " " + result.ToString().ToUpper());
		}
    }
}
