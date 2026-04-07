#include <iostream>
using namespace std;

int main(){
    //deklarasi array dengan inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //deklarasi tanpa inisialisasi
    int datamu[5];
    int x;
    //cara membaca array dataku
    cout << "Data ke - 3 : " << dataku[2]<<endl;

    //operasi matematika
    x = dataku[2]*3;
    //cara menulis atau mengisi array
    dataku[2] = 600;
    cout << "Data ke - 3 yang baru : " << dataku[2]<<endl;

    //meengisi array datamu satu persatu
    cout << "Data index ke - 0 :" ;
    cin >> datamu[0];
    cout << "Data index ke - 1 :" ;
    cin >> datamu[1];
    cout << "Data index ke - 2 :" ;
    cin >> datamu[2];
    cout << "Data index ke - 3 :" ;
    cin >> datamu[3];
    cout << "Data index ke - 4 :" ;
    cin >> datamu[4];

    