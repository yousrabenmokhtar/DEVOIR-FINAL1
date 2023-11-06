#include <iostream>
#include<stack>
using namespace std;
class stack{
    int taille;
    int *n;
    int indice;
public:
    stack(int T=20):T (taille){
        indice = 0;
        int* n = new int[taille];}
    void empiler  () const;
}; void empiler(int element) {
    if (indice == taille - 1) {
        std::cout << "La pile est pleine !" << std::endl;
        return;
    }

}


}
    int main() {
        Stack p;

        cout<<  p.emipler<<endl;

        return 0;
    }
}