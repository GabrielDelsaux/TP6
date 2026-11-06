#include <iostream>
using namespace std;

struct essai
{
    int n;
    float x;
};

void raz(essai& e) {
    e.n = 0;
    e.x = 0;
}

void raz(essai* e) {
    e->n = 0;
    e->x = 0;
}

int main()
{
    essai* essai1;
    essai1 = new essai;

    // essai par reference
    essai1->n = 1;
    essai1->x = 2;
    cout << "reference avant n : " << essai1->n << " x : " << essai1->x << endl;
    raz(*essai1);
    cout << "reference apres n : " << essai1->n << " x : " << essai1->x << endl;

    // essai par adresse
    essai1->n = 3;
    essai1->x = 8;
    cout << "adresse avant n : " << essai1->n << " x : " << essai1->x << endl;
    raz(essai1);
    cout << "adresse apres n : " << essai1->n << " x : " << essai1->x << endl;

    delete essai1;
    return 0;
}