#variabel untuk menginput kalimat
kalimat =input()
#variabel uintuk mengetahui panjang string
panjang =len(kalimat)
#perulangan untuk pengecekan string
for i in  range(panjang):
    if kalimat[i]=='a':
        print('aga', end="")
    elif kalimat[i]=='i':
        print('igi', end="")
    elif kalimat[i]=='u':
        print('ugu', end="")
    elif kalimat[i]=='e':
        print('ege', end="")
    elif kalimat[i]=='o':
        print('ogo', end="")
    else :
        print(kalimat[i], end="")
    



