#include <iostream>
#include <string>

using namespace std;

void vigenere_cipher(string inputText, string keyword, bool encode)
{

    string outputString = "Result is: ";
    string keywordLong = "";
    int keywordLength = keyword.length();
    int inputTextLength = inputText.length();
    char outputChar;

    for (int i = 0; i < inputTextLength; i++)
    {
        //Extend keyword to the length of the input text
        keywordLong += keyword[i % keywordLength];

        if (encode)
        {
            outputChar = (((inputText[i] - 97) + (keywordLong[i]) - 97) % 26) + 97;
        }
        else
        {
            outputChar = ((inputText[i] - 97) - (keywordLong[i] - 97)) % 26;

            /* When decoding % operation might return a negative number
            *  In such case, substract from last index,
            *  otherwise if positive add to first index.
            */
            if (outputChar < 0)
            {
                outputChar = outputChar + 123;
            }
            else
            {
                outputChar = outputChar + 97;
            }
        }

        outputString += outputChar;
    }

    cout << "\n"
         << outputString
         << "\n";
}

int main()
{
    string choice = "";
    string keyword = "";
    string text;

    while (true)
    {
        cout << "Would you like to (e)ncode or (d)ecode? ";
        cin >> choice;

        if (choice == "e")
        {
            cout << "Enter the text to encode: \n";
            cin >> text;
            cout << "Enter the keyword: \n";
            cin >> keyword;
            vigenere_cipher(text, keyword, true);
            break;
        }

        if (choice == "d")
        {
            cout << "Enter the text to decode: \n";
            cin >> text;
            cout << "Enter the keyword: \n";
            cin >> keyword;
            vigenere_cipher(text, keyword, false);
            break;
        }
    }

    return 0;
}