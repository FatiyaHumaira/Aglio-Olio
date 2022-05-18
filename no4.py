DaftarAngka = [11,4,5,2,5,6,93,29]

# fungsi untuk mengurutkan angka (buble sort)
def bubblesort(arr):
    n = 8
    for i in range (n-1):
        for j in range (n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]


print("Daftar Angka sebelum di sorting", DaftarAngka)
bubblesort(DaftarAngka)
print("Daftar Angka setelah di sorting", DaftarAngka)