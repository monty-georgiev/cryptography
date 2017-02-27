#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, j, k, inputLength;
    char inputString[20], outputString[20], decipheredString[20];
    cout << "Enter the input string : \n";
    cin >> inputString;
    inputLength = strlen(inputString);

    /*Ciphering*/
    for (i = 0, j = 0; i < inputLength; i++)
    {
        if (i % 2 == 0)
            outputString[j++] = inputString[i];
    }
    for (i = 0; i < inputLength; i++)
    {
        if (i % 2 == 1)
            outputString[j++] = inputString[i];
    }
    outputString[j] = '\0';
    cout << "\nCipher text  :";
    cout << outputString;

    /*Deciphering*/
    if (inputLength % 2 == 0)
        k = inputLength / 2;
    else
        k = (inputLength / 2) + 1;
    for (i = 0, j = 0; i < k; i++)
    {
        decipheredString[j] = outputString[i];
        j = j + 2;
    }
    for (i = k, j = 1; i < inputLength; i++)
    {
        decipheredString[j] = outputString[i];
        j = j + 2;
    }
    decipheredString[inputLength] = '\0';
    cout << "\nText after decryption : ";
    cout << decipheredString << endl;
}
