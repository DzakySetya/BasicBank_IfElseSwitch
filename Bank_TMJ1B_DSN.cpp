// Dzaky Setya Nugraha (2407421047) TMJ1B 


#include <iostream>

using namespace std;

int main()
{
    int saldo, no_kegiatan, wd, bts_saldo, sisa_saldo_wd, depo, saldo_depo, biaya_admin = 50000;
    cout << "Selamat Datang di PNJ BANK\n" << endl;//judul

    cout << "Masukkan Saldo : Rp";
    cin >> saldo;

    cout << "\nPilih Kegiatan yang Dipilih\n"
        << "1. Penarikan Uang (Withdrawal)\n2. Penyetoran Uang (Deposit)\n3. Pemeriksaan Saldo (Check Balance)\n"
        << "Masukkan Nomor Kegiatan : ";
    cin >> no_kegiatan;
    cout << "\n";

    switch (no_kegiatan) {
    case 1://withdraw
        bts_saldo = saldo - 100000;

        cout << "Masukkan uang yang anda ingin ambil :Rp";
        cin >> wd;
        sisa_saldo_wd = saldo - wd;

        if (wd > 5000000) {
            cout << "\nBatas Saldo yang Diambil Hanya Boleh Rp5.000.000!";
        }
        else if (wd <= bts_saldo && sisa_saldo_wd < 500000) {
            sisa_saldo_wd -= biaya_admin;
            cout << "\nSaldo anda akan dikurangi Rp50.000 untuk biaya admin!";
            cout << "\n\nSilahkan Ambil Duit Anda Sebesar :Rp" << wd;

            cout << "\n\nSaldo Akhir : Rp" << sisa_saldo_wd;
        }
        else if (wd <= bts_saldo) {

            cout << "\nSilahkan Ambil Duit Anda Sebesar :Rp" << wd;
            cout << "\n\nSaldo Akhir : Rp" << sisa_saldo_wd;
        }
        else {
            cout << "\nSaldo tidak boleh tersisa Rp100.000";
        }
        break;

    case 2://Deposit
        cout << "Masukkan duit yang ingin anda Deposit : ";
        cin >> depo;

        saldo_depo = saldo + depo;

        cout << "\nSaldo Anda Sekarang : Rp" << saldo_depo;
        break;

    case 3://Check Balance
        cout << "Saldo Anda Saat Ini : Rp" << saldo;
        break;

    default:
        cout << "ERROR!";
        break;
    }

}
