//Ceasar cipher

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>


using namespace std; 


class caesar_shift
{

private:
	char alphabet[26];
	
public:
	caesar_shift(){
		for (int i=0; i<26; i++)
		{
			alphabet[i] = 65 + i;
		}
	}
	
	
	string encoder(string text, int shift)
		{
			string cipher;
			
			int length = text.length();
			
			for (int i=0; i<length; i++)
			{
				char c = char(text[i]);
				c = toupper(c); 
				int index_of_char;
			
					for (int i=0; i<26; i++)
					{
						if (c == alphabet[i])
						{
							index_of_char = i;
							break;	
						}	
					}
					
					c = alphabet[(index_of_char+shift)%26];
				
				cipher += c; 
			}
			return cipher;
		}

	string decoder(string text, int shift)
		{
		string cipher;
			
			int length = text.length();
			
			for (int i=0; i<length; i++)
			{
				char c = char(text[i]);
				c = toupper(c); 
				int index_of_char;
			
					for (int i=0; i<26; i++)
					{
						if (c == alphabet[i])
						{
							index_of_char = i;
							break;	
						}	
					}
					
					c = alphabet[((index_of_char-shift)+26)%26];
				
				cipher += c; 
			}
			return cipher;
		}
	
};


int main()
{

	caesar_shift c;
	cout<<	c.encoder("HI", 20)<<endl;
		cout<<	c.decoder("bc", 20);

	return 0;
	
}
