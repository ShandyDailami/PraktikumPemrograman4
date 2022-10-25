
    print("{:.0f}:{:.0f}:{:.0f}".format(jam, menit, detik));
else:
    hari = sec / 86400;
    jam = (sec - (hari * 86400)) / 3600;