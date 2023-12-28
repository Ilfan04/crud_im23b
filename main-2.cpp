#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char nomenuMakanan, nomenuMinuman,Nama[50];
    int harga1, harga2,tot1,jumlah,tot2,byr,kbl,Meja,kembali;

    ofstream outputFile("order_data.bin",ios::app|ios::binary);

    cout << "|=============SELAMAT DATANG============|" << endl;
    cout << "|=========LESEHAN MBAK MEGAWATI=========|" <<endl;
    cout << "|=============DAFTAR MENU===============|" << endl;
    cout << "MAKANAN:          |  HARGA |" << endl;
    cout << "1. Nasi Megono    | Rp.5000 |" << endl;
    cout << "2. Nasi Uduk      | Rp.8000 | " << endl;
    cout << "3. Nasi Kucing    | Rp.2000 |" << endl;
    cout << "4. Tempe Mendoan  | Rp.5000 |" << endl;
    cout << "5. Sate Usus      | Rp.2000 |" << endl;
    cout << "MINUMAN:          |  HARGA |" << endl;
    cout << "1. Es Jeruk       | Rp.4000 |" << endl;
    cout << "2. Es Teh Manis   | Rp.3000 |" << endl;
    cout << "3. Teh Tawar Anget| Rp.2000 |" << endl;
    cout << "4. Jeruk Panas    | Rp.3000 |" << endl;
    cout << "5. Kopi Susu      | Rp.3000 |" << endl;
    cout << " Nama Pemesan :";
    cin>>Nama;
    cout << " No Meja Makan :";
    cin>>Meja;
    cout << "silahkan inputkan nomor menu makanan :";
    cin >> nomenuMakanan;

    outputFile << "\nNama: " << Nama << " \nMeja: " << Meja << endl;

    switch (nomenuMakanan) {
    case '1':
        cout << "anda memesan Nasi Megono" << endl;
        harga1 = 5000;
        cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot1=harga1*jumlah;
        cout <<"T0tal Harga1 yaitu:Rp."<<tot1<<endl;
        break;
    case '2':
        cout << "anda memesan Nasi Uduk" << endl;
        harga1 = 8000;
         cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot1=harga1*jumlah;
        cout <<"T0tal Harga1 yaitu:Rp."<<tot1<<endl;
        break;
    case '3':
        cout << "anda memesan Nasi Kucing" << endl;
        harga1 = 2000;
         cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot1=harga1*jumlah;
        cout <<"T0tal Harga1 yaitu:Rp."<<tot1<<endl;
        break;
    case '4':
        cout << "anda memesan Tempe Mendoan" << endl;
        harga1 = 5000;
         cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot1=harga1*jumlah;
        cout <<"T0tal Harga1 yaitu:Rp."<<tot1<<endl;
        break;
    case '5':
        cout << "anda memesan Sate Usus" << endl;
        harga1 = 2000;
         cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot1=harga1*jumlah;
        cout <<"T0tal Harga1 yaitu:Rp."<<tot1<<endl;
        break;
    default:
        cout << "tidak ada dimenu" << endl;

    }
    cout << "silahkan inputkan nomor menu minuman :";
    cin >> nomenuMinuman;

    switch (nomenuMinuman) {
    case '1':
        cout << "anda memesan Es Jeruk"<< endl;
        harga2 = 4000;
         cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot2=harga2*jumlah;
        cout <<"T0tal Harga2 yaitu:Rp."<<tot2<<endl;
        break;
    case '2':
        cout << "anda memesan Es Teh Manis" << endl;
        harga2 = 3000;
        cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot2=harga2*jumlah;
        cout <<"T0tal Harga2 yaitu:Rp."<<tot2<<endl;
        break;
    case '3':
        cout << "anda memesan Teh Tawar Anget" << endl;
        harga2 = 2000;
        cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot2=harga2*jumlah;
        cout <<"T0tal Harga2 yaitu:Rp."<<tot2<<endl;
        break;
    case '4':
        cout << "anda memesan Jeruk Panas" << endl;
        harga2 = 3000;
        cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot2=harga2*jumlah;
        cout <<"T0tal Harga2 yaitu:Rp."<<tot2<<endl;
        break;
    case '5':
        cout << "anda memesan Kopi Susu" << endl;
        harga2 = 3000;
        cout << "Jumlah Menu Anda: ";
        cin >> jumlah;
        tot2=harga2*jumlah;
        cout <<"T0tal Harga2 yaitu:Rp."<<tot2<<endl;
    }

    int beli, total, diskon,total3;
    cout << "total Semua Menu Anda di Bayar : Rp." << tot1 + tot2 << endl;
         if(beli<=100){
      total=beli;
    cout <<"anda tidak mendapat potongan, \n anda membayar ; Rp "<<beli<<".00";
    }
    else
        diskon= 2000 ;
    total3= beli-diskon;
    cout<<"anda mendapatkan diskon Rp "<<diskon<<" .00, jadi anda membayar Rp "<<total3<<".00";


    cout << "masukan yang anda bayarkan : ";
    cin>>beli;

}
