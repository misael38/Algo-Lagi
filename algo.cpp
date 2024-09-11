#include <iostream>
#include <cmath>

using namespace std;

double inputValid(string Parameter) {
	double nilai;
	do {
		std::cout << "Masukkan " << Parameter << " (cm): ";
		std::cin >> nilai;
		if (nilai <= 0) {
			std::cout << "\nNilai " << Parameter << " tidak boleh kurang dari atau sama dengan nol\n";
		}
	} while (nilai <= 0);
	return nilai;
}

void HitungLuas() {
	int pilihanl;
		std::cout << "\nSilahkan Pilih Nomor Bangun Datar Yang Ingin Dihitung Luasnya\n";
   	    std::cout << "1. Persegi\n";
	    std::cout << "2. Persegi Panjang\n";
	    std::cout << "3. Segitiga\n";
        std::cout << "4. Lingkaran\n";
        std::cout << "5. Jajar Genjang\n";
        std::cout << "6. Trapesium\n";
        std::cout << "7. Belah Ketupat\n";
        std::cout << "8. Layang - Layang\n";
	    std::cout << "9. Kembali\n";
	    std::cout << "Masukkan Nomor Pilihan (1-9): ";
	    std::cin >> pilihanl;

	    if (pilihanl == 1) {
			double sisi = inputValid("Panjang Sisi Persegi");
	        double hasil = sisi * sisi;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Persegi\n";
	        std::cout << "Dengan rumus L = s * s, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihanl == 2) {
			double p = inputValid("Panjang Persegi Panjang");
			double l = inputValid("Lebar Persegi Panjang");
	        double hasil = p*l;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Persegi Panjang\n";
	        std::cout << "Dengan rumus L = p * l, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihanl == 3) {
			double a = inputValid("Panjang Alas Segitiga");
			double t = inputValid("Tinggi Segitiga");
	        double hasil = a*t/2;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Segitiga\n";
	        std::cout << "Dengan rumus L = 1/2 * a * t, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihanl == 4) {
			double r = inputValid("Jari Jari Lingkaran");
	        double hasil = 3.14*r*r;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Lingkaran\n";
	        std::cout << "Dengan rumus L = pi * r * r, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihanl == 5) {
			double a = inputValid("Panjang Alas Jajar Genjang");
			double t = inputValid("Tinggi Jajar Genjang");
	        double hasil = a*t/2;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Jajar Genjang\n";
	        std::cout << "Dengan rumus L = 1/2 * a * t, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihanl == 6) {
			double a = inputValid("Panjang Sisi a Trapesium");
			double b = inputValid("Panjang Sisi b Trapesium");
			double t = inputValid("Tinggi Trapesium");
	        double hasil = (a+b)*t/2;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Trapesium\n";
	        std::cout << "Dengan rumus L = 1/2 * (a + b) * t, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        } else if (pilihanl == 7) {
			double d1 = inputValid("Panjang Diagonal Pertama Belah Ketupat");
			double d2 = inputValid("Panjang Diagonal Kedua Belah Ketupat");
	        double hasil = d1*d2/2;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Belah Ketupat\n";
	        std::cout << "Dengan rumus L = 1/2 * d1 * d2, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        } else if (pilihanl == 8) {
			double d1 = inputValid("Panjang Diagonal Pertama Layang Layang");
			double d2 = inputValid("Panjang Diagonal Kedua Layang Layang");
	        double hasil = d1*d2/2;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Luas Bangun Datar Layang Layang\n";
	        std::cout << "Dengan rumus L = 1/2 * d1 * d2, didapat:\n";
	        std::cout << "Luas = "; std::cout << hasil; std::cout << " cm^2\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihanl == 9) {
		    std::cout << "kembali ke menu utama...\n";
		    break;
		} else {
			std::cout << "Pilihan tidak valid!\n";
		}
}

void HitungKeliling() {
	int pilihank;
		std::cout << "\nSilahkan Pilih Nomor Bangun Datar Yang Ingin Dihitung Kelilingnya\n";
   	    std::cout << "1. Persegi\n";
	    std::cout << "2. Persegi Panjang\n";
	    std::cout << "3. Segitiga\n";
        std::cout << "4. Lingkaran\n";
        std::cout << "5. Jajar Genjang\n";
        std::cout << "6. Trapesium\n";
        std::cout << "7. Belah Ketupat\n";
        std::cout << "8. Layang - Layang\n";
	    std::cout << "9. Kembali\n";
	    std::cout << "Masukkan Nomor Pilihan (1-9): ";
	    std::cin >> pilihank;

	    if (pilihank == 1) {
			double sisi = inputValid("Panjang Sisi Persegi");
		    double hasil = 4 * sisi;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Persegi\n";
	        std::cout << "Dengan rumus K = 4 * s, didapat:\n";
		    std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihank == 2) {
			double p = inputValid("Panjang Persegi Panjang");
			double l = inputValid("Lebar Persegi Panjang");
		    double hasil = 2*(p+l);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Persegi Panjang\n";
	        std::cout << "Dengan rumus K = 2 * (p + l), didapat:\n";
		    std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihank == 3) {
			double a = inputValid("Panjang Sisi a Segitiga");
			double b = inputValid("Panjang Sisi b Segitiga");
			double c = inputValid("Panjang Sisi c Segitiga");
		    double hasil = (a+b+c);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Segitiga\n";
	        std::cout << "Dengan rumus K = a + b + c, didapat:\n";
		    std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihank == 4) {
			double r = inputValid("Panjang Jari Jari Lingkaran");
		    double hasil = 3.14*2*r;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Lingkaran\n";
	        std::cout << "Dengan rumus K = pi * 2 * r, didapat:\n";
		    std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihank == 5) {
			double a = inputValid("Panjang Sisi a Jajar Genjang");
			double b = inputValid("Panjang Sisi b Jajar Genjang");
	        double hasil = 2*(a+b);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Jajar Genjang\n";
	        std::cout << "Dengan rumus K = 2 * (a + b), didapat:\n";
	        std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihank == 6) {
			double a = inputValid("Panjang Sisi a Trapesium");
			double b = inputValid("Panjang Sisi b Trapesium");
			double c = inputValid("Panjang Sisi c Trapesium");
			double d = inputValid("Panjang Sisi d Trapesium");
		    double hasil = (a+b+c+d);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Trapesium\n";
	        std::cout << "Dengan rumus K = a + b + c + d, didapat:\n";
		    std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        } else if (pilihank == 7) {
			double s = inputValid("Panjang Sisi Belah Ketupat");
		    double hasil = 4*s;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Belah Ketupat\n";
	        std::cout << "Dengan rumus K = 4 * s, didapat:\n";
		    std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        } else if (pilihank == 8) {
			double a = inputValid("Panjang Sisi a Layang Layang");
			double b = inputValid("Panjang Sisi b Layang Layang");
		    double hasil = 2*(a+b);
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Keliling Bangun Datar Layang Layang\n";
	        std::cout << "Dengan rumus K = 2 (a + b), didapat:\n";
		    std::cout << "Keliling = "; std::cout << hasil; std::cout << " cm\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	    } else if (pilihank == 9){
			std::cout << "Kembali ke menu utama..\n";
		    return;
		} else {
			std::cout << "Pilihan tidak valid!\n";
		}
}

void HitungVolume() {
	int pilihanv;
	std::cout << "Silahkan Pilih Nomor Bangun Ruang Yang Ingin Dihitung Volumenya\n";
   	std::cout << "1. Kubus\n";
	std::cout << "2. Balok\n";
	std::cout << "3. Prisma Segitiga\n";
    std::cout << "4. Limas Segitiga\n";
    std::cout << "5. Limas Segiempat\n";
    std::cout << "6. Tabung\n";
    std::cout << "7. Kerucut\n";
    std::cout << "8. Bola\n";
	std::cout << "9. Kembali\n";
	std::cout << "Masukkan Nomor Pilihan (1-9): ";
	std::cin >> pilihanv;

	if (pilihanv == 1) {
		double s = inputValid("Panjang Sisi Kubus");
		double hasil = s*s*s;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << "\nHasil Menghitung Volume Bangun Ruang Kubus\n";
	    std::cout << "Dengan rumus V = s * s * s, didapat:\n";
		std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	} else if (pilihanv == 2) {
		double p = inputValid("Panjang Sisi Balok");
		double l = inputValid("Lebar Balok");
		double t = inputValid("Tinggi Balok");
		double hasil = p*l*t;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << "\nHasil Menghitung Volume Bangun Ruang Balok\n";
	    std::cout << "Dengan rumus V = p * l * t, didapat:\n";
		std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	} else if (pilihanv == 3) {
		double a = inputValid("Panjang Alas Prisma Segitiga");
		double ta = inputValid("Tinggi Alas Prisma Segitiga");
		double t = inputValid("Tinggi Prisma Segitiga");
		double hasil = a*ta*t/2;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << "\nHasil Menghitung Volume Bangun Ruang Prisma Segitiga\n";
	    std::cout << "Dengan rumus V = 1/2 * a * ta * t, didapat:\n";
		std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	} else if (pilihanv == 4) {
		double a = inputValid("Panjang Alas Limas Segitiga");
		double ta = inputValid("Tinggi Alas Limas Segitiga");
		double t = inputValid("Tinggi Limas Segitiga");
		double hasil = a*(ta/2)*t/3;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << "\nHasil Menghitung Volume Bangun Ruang Limas Segitiga\n";
	    std::cout << "Dengan rumus V = 1/3 * 1/2 * a * ta * t, didapat:\n";
		std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	} else if (pilihanv == 5) {
		int pilihanalas;
        std::cout << "Silahkan Pilih Alas Limas Segi Empat Yang Ingin Dihitung Volumenya!\n";
   	    std::cout << "1. Alas Persegi\n";
	    std::cout << "2. Alas Persegi Panjang\n";
        std::cout << "Pilihan Alas (1/2): ";
	    std::cin >> pilihanalas;
		
		if (pilihanalas == 1) {
		    double s = inputValid("Panjang Sisi Alas Persegi Limas Segiempat");
		    double t = inputValid("Tinggi Limas Segiempat");
		    double hasil = s*s*t/3;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Volume Bangun Ruang Limas Segiempat alas Persegi\n";
	        std::cout << "Dengan rumus V = 1/3 * s * s * t, didapat:\n";
		    std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		} else if (pilihanalas == 2) {
		    double p = inputValid("Panjang Alas Persegi Panjang Limas Segiempat");
		    double l = inputValid("Lebar Alas Persegi Panjang Limas Segiempat");
		    double t = inputValid("Tinggi Limas Segiempat");
		    double hasil = p*l*t/3;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            std::cout << "\nHasil Menghitung Volume Bangun Ruang Limas Segiempat alas Persegi Panjang\n";
	        std::cout << "Dengan rumus V = 1/3 * p * l * t, didapat:\n";
		    std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		} else {
		std::cout << "Pilihan  tidak valid!\n";
		}
	} else if (pilihanv == 6) {
		double r = inputValid("Panjang Jari Jari Tabung");
		double t = inputValid("Tinggi Tabung");
		double hasil = 3.14*r*r*t;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << "\nHasil Menghitung Volume Bangun Ruang Tabung\n";
	    std::cout << "Dengan rumus V = pi * r * r * t, didapat:\n";
		std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    } else if (pilihanv == 7) {
		double r = inputValid("Panjang Jari Jari Kerucut");
		double t = inputValid("Tinggi Kerucut");
		double hasil = 3.14*r*r*t/3;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << "\nHasil Menghitung Volume Bangun Ruang Kerucut\n";
	    std::cout << "Dengan rumus V = 1/3 * pi * r * r * t, didapat:\n";
		std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    } else if (pilihanv == 8) {
		double r = inputValid("Panjang Jari Jari Bola");
		double hasil = 3.14*4*r*r*r/3;
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << "\nHasil Menghitung Volume Bangun Ruang Bola\n";
	    std::cout << "Dengan rumus V = 4/3 * pi * r * r * r, didapat:\n";
		std::cout << "Volume = "; std::cout << hasil; std::cout << " cm^3\n";
			std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	} else if (pilihanv == 9) {
		std::cout << "kembali ke menu utama...\n";
		return;
	} else {
		std::cout << "Pilihan tidak valid!\n";
	}
}

int main() {
	int pilihan;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~ C++ ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		std::cout << "Kelompok 1 Algoritma dan Pemrograman (Math)\n";
        std::cout << "           Anggota Kelompok :\n";
        std::cout << "          1. Eufrasia Mokili\n";
        std::cout << "          2. Marvil Lawa\n";
        std::cout << "          3. Militya Sambali\n";
        std::cout << "          4. Misael Telleng\n";
        std::cout << "          5. Rachel Manopo\n";
        std::cout << "\n";
        std::cout << "     Ingin Menghitung Apa Hari Ini?\n";
   	    std::cout << "          1. Luas Bangun Datar\n";
	    std::cout << "        2. Keliling Bangun Datar\n";
	    std::cout << "         3. Volume Bangun Ruang\n";
	    std::cout << "\nMasukkan Nomor Pilihan (1-3): ";
	    std::cin >> pilihan;

		if (pilihan == 1) {
			HitungLuas();
		} else if (pilihan == 2) {
			HitungKeliling();
		} else if (pilihan == 3) {
			HitungVolume();
		} else {
			std::cout << "Pilihan tidak valid\n";
		}


	std::cout << "Terima kasih telah menggunakan program ini ^_^";
} 
