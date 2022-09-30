//Kasir Warteg Uddin
#include <iostream>
using namespace std;
#define BURGER 15000
#define PIZZA 40000
#define KENTANG 10000
#define SODA 5000
#define MINERAL 3000

int main (){
    int m, n, total;
    cout << "Selamat datang di Warteg Uddin\nMenu:\n 1. Burger\n 2. Pizza\n 3. Kentang Goreng\n 4. Soda\n 5. Air Mineral\n";
    cout << "Silahkan pilih nomor menu: ";
    cin  >> m;
    if (m==1) {
        m=BURGER;
    } else if (m==2) {
        m=PIZZA;
    } else if (m==3) {
        m=KENTANG;
    } else if (m==4) {
        m=SODA;
    } else if (m==5) {
        m=MINERAL;
    } else { 
        cout << "Menu tidak tersedia";
    }
    cout << "Jumlah:";
    cin  >> n;
    total = n*m;
    cout << "Total pembayaran: " << total;

    return 0;
}