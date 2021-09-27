
def right_number(frase):
    correct = ""
    for letters in frase:
        if letters in "ABC":
            correct = correct + "2"
        elif letters in "DEF":
            correct = correct + "3"
        elif letters in "GHI":
            correct = correct + "4"
        elif letters in "JKL":
            correct = correct + "5"
        elif letters in "MNO":
            correct = correct + "6"
        elif letters in "PQRS":
            correct = correct + "7"
        elif letters in "TUV":
            correct = correct + "8"
        elif letters in "WXYZ":
            correct = correct + "9"
        else:
            correct = correct + letters
    return correct

print(right_number(input()))
