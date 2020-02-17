#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv)
{
    int matA[2][2]= {4, 2, 8, 10};
    int matB[2][2]= {-5,  8, 4, -12};
    int  j, k;
    cout<<"Matriks A"<<endl;
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriks B"<<endl;
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matB[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"hasil perkalian matriks A dengan 5"<<endl;
     for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<pow(matA[i][j],5)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
