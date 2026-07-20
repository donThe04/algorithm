def caesar(text, shift):
    if not isinstance(shift, int):
        return 'Shift must be an integer value.'

    if shift < 1:
        return 'Shift must be a positive integer.'

    if shift > 25:
        return 'Shift must be an integer between 1 and 25.'

    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    shifted_alphabet = alphabet[shift:] + alphabet[:shift]

    translation_table = str.maketrans(
        alphabet + alphabet.upper(),
        shifted_alphabet + shifted_alphabet.upper()
    )

    return text.translate(translation_table)