'''
Simple subtitution cypher
'''


def cypher_magic(message, action):
    normal_alphabet = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 '
    cypher_alphabet = 'zkepmqutafxdbrvcyhjwliosngZKEPMQUTAFXDBRVCYHJWLIOSNG1234567890 '
    output_string = ''

    if(action):

        for char_input in message:
            if char_input in cypher_alphabet:
                output_string += normal_alphabet[
                    cypher_alphabet.index(char_input)]
    else:
        print('Encoding not yet available')

    print(output_string)


def encode_message(message):
    cypher_magic(message, False)


def decode_message(message):
    cypher_magic(message, True)


decode_string = 'Rvizx Pfvxviae ovr bzwet 600 vr Jlrpzn ar Czhaj'
encode_string = 'Novak Djokovic won match 600 on Sunday in Paris'

decode_message(decode_string)
encode_message(encode_string)