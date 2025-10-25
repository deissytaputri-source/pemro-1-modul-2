nilai = int(input())

if nilai == 0:
    print("Nol")
elif nilai < 10:
    print("Satuan")
elif nilai <20:
    print("Belasan")
elif nilai <100:
    print("Ratusan")
else: 
    print("Anda Menginput Melebihi Limit Bilangan")