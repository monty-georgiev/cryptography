#include <iostream>
#include <string>


using namespace std;

void caesar_cipher(string inputText, bool encode)
{

    string outputString = "";
    char outputChar;

    for (int i = 0; i < inputText.length(); i++)
    {
        if (encode)
        {
            outputChar = ((((tolower(inputText[i]) + 3) - 97) % 26) + 97);
        }
        else
        {
            outputChar = ((((tolower(inputText[i]) - 3) - 97) % 26) + 97);
        }

        outputString += outputChar;
    }

    cout << outputString + "\n";
}

int main()
{
    string choice = "";
    string text;

    while (true)
    {
        cout << "Would you like to (e)ncode or (d)ecode? ";
        cin >> choice;

        if (choice == "e")
        {
            cout << "Enter the text to encode: \n";
            cin >> text;
            caesar_cipher(text, true);
            break;
        }

        if (choice == "d")
        {
            cout << "Enter the text to decode: \n";
            cin >> text;
            caesar_cipher(text, false);
            break;
        }
    }

    return 0;
}
