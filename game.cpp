#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){

    srand((unsigned) time(0));
    int numSorte = rand() % 100;
    int num = 0;
    int tries = 0;
    int maxtries;
    string nome;
    cout << "whats your name ma friend\n";
    cin >> nome;
    cout << "how many tries you want ma friend\n";
    cin >> maxtries;
    while(num != numSorte){
        while (tries != maxtries){
    cout << "whats the lucky numba" << endl;
    cin >> num;
    if(numSorte > num){
        tries++;
        cout << "lucky numba is HIGHER than " << num << endl;}
    else if (numSorte < num) {
        tries++;
        cout << "lucky numba is LOWER than " << num << endl;}
    else {
        cout << "U GOT IT in " << tries << " TRIES " << nome << "!!!!!!!!!!!\n";
        break;} 

        }
        if (num != numSorte && tries == maxtries) {
            cout << "\noops your ran outta tries it was actually " << numSorte << "\n";
            break;
        }
    return 0;
    }
}
