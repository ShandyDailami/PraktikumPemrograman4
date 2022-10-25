for x in range(3):
    angka1, angka2, angka3 = input("").split()
    angka1 = int(angka1)
    angka2 = int(angka2)
    angka3 = int(angka3)

    if angka1 < angka2 and angka1 < angka3 and angka2 < angka3:
        print(angka1, angka2, angka3)
    elif angka1 < angka2 and angka1 < angka3 and angka2 > angka3:
        print(angka1, angka3, angka2)
    elif angka2 < angka1 and angka2 < angka3 and angka1 < angka3:
        print(angka2, angka1, angka3)
    elif angka2 < angka1 and angka2 < angka3 and angka1 > angka3:
        print(angka2, angka3, angka1)
    elif angka3 < angka1 and angka3 < angka2 and angka1 < angka2:
        print(angka3, angka1, angka2)
    else:
        print(angka3, angka2, angka1)