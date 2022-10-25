detik = int(input())
jam = detik // 3600
sisa = detik % 3600
menit = sisa // 60
detik = sisa % 60

if jam > 24:
    print("1hari", "", jam,":" "", menit,":" "", detik) 

else:
    print("", jam,":" "", menit,":" "", detik)

