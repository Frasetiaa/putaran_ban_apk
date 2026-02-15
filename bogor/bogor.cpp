#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double diameter_ban_cm;
    double jarak_keseluruhan_km;
    double keliling_ban_cm;
    double jarak_keseluruhan_cm;
    double total_putaran;

    const double PI = 3.141592653589793;
    
    // input data
    cout << "Diameter ban (cm): ";
    cin >> diameter_ban_cm;

    cout << "Masukkan jarak keseluruhan (km): ";
    cin >> jarak_keseluruhan_km;

    // Hitung keliling ban
    keliling_ban_cm = PI * diameter_ban_cm;

    // Konversi km ke cm
    jarak_keseluruhan_cm = jarak_keseluruhan_km * 100000;

    // Hitung total putaran
    total_putaran = jarak_keseluruhan_cm / keliling_ban_cm;

    // Output hasil
    cout << fixed << setprecision(2);
    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Keliling ban (cm): " << keliling_ban_cm << endl;
    cout << "Jarak keseluruhan (cm): " << jarak_keseluruhan_cm << endl;
    cout << "Total putaran ban: " << total_putaran << " kali" << endl;

    return 0;
}




