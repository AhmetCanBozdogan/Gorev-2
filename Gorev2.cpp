#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main() {
    string birler[]={"","bir","iki","uc","dort","bes","altı","yedi","sekiz","dokuz"};
    string onlar[]= {"","on","yirmi","otuz","kırk","elli","altmıs","yetmis","seksen","doksan"};
    string okunus;
    int sayı;
    cout << "1-999 arasinda bir sayi giriniz:";
    cin >> sayı;
    int gecici_num = sayı;
    if (0 < sayı && sayı < 1000 ) {
        for (int i = 1; i <= gecici_num + 2; i++){
            int x = gecici_num % 10;
            gecici_num = gecici_num/10;
            switch (i) {
                case 1:
                    okunus = birler[x] + okunus;
                    break;
                case 2:
                    okunus = onlar[x] + okunus; 
                    break;
                case 3:
                    if (x == 1){
                        x = 0;
                    }
                    okunus = birler[x] + "yuz" + okunus;
                    break;
                default:
                    okunus = "Girilen sayi aralik disindadir.";
                    break;
            }
        }
    }
    cout << okunus;
    return 0;
}


