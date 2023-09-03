#include <iostream>
#include <set>

using namespace std;

int main () {

    double jogada [5]= {};
    double gabarito [5]= {};
    double i, jogadaa, count = 0;


    for(int i = 0; i <= 5; i++) {
        cin >> jogada[i];
    }  

    for(int i = 0; i <= 5; i++) {
        cin >> gabarito[i];
    }

    for(int i = 0; i <= 5; i++) {
        jogadaa = jogada[i];
        for(int i = 0; i <= 5; i++) {
            if (jogadaa == gabarito[i]) {
                count += 1;
            }
            else{
                count += 0;
            }

        }
        
    } 

if(count < 3) {
    cout << "Azar" << endl;
}
if(count == 3) {
    cout << "Terno" << endl;
}
if(count == 4) {
    cout << "Quadra" << endl;
}
if(count == 5) {
    cout << "Quina" << endl;
}
if(count == 6) {
    cout << "Sena" << endl;
}

    return 0;
}