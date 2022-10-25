a = int(input())

if a <= 9 and a >=1:
    print("Satuan")
elif a <= 19 and a >= 10:
    print("Belasan")
elif a <= 99 and a >=20:
    print("Puluhan")
elif a == 0:
    print("Nol")
elif a > 99:
    print("Anda Menginput Melebihi Limit Bilangan")