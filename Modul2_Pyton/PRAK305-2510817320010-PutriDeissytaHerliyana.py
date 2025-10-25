inputdetik = int(input())

hari = inputdetik // 86400
jam = (inputdetik % 3600) // 3600
menit = (inputdetik % 3600) // 60
detik = inputdetik % 60

if hari == 0:
 print(f"{jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")