// Dzaky Setya Nugraha (2407421047) TMJ1B 

#include <iostream>

using namespace std;

int main()
{
    int saldo,no_kegiatan;
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
            int wd,bts_saldo, sisa_saldo_wd;
            bts_saldo = saldo - 100000;

            cout << "Masukkan uang yang anda ingin ambil :Rp";
            cin >> wd;            
            sisa_saldo_wd = saldo - wd;

            if (wd <= 5000000 && wd <= bts_saldo && sisa_saldo_wd < 500000) {
                sisa_saldo_wd -= 50000;
                cout << "\nSaldo anda akan dikurangi Rp50.000 untuk biaya admin!";
                cout << "\n\nSilahkan Ambil Duit Anda Sebesar :Rp" << wd;

                cout << "\n\nSaldo Akhir : Rp" << sisa_saldo_wd;
            }
            else if(wd <= 5000000 && wd <= bts_saldo) {
                
                cout << "\nSilahkan Ambil Duit Anda Sebesar :Rp" << wd;                
                cout << "\n\nSaldo Akhir : Rp" << sisa_saldo_wd;
            }
            else {
                cout << "\nBatas Saldo yang Diambil Hanya Boleh Rp5.000.000!";
            }
            break;

        case 2://Deposit
            int depo,saldo_depo;
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

