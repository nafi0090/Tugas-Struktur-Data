#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv)
{
    int matA[2][2]= {4, 2, 8, 10};
    int matB[2][2]= {-5,  8, 4, -12};
    int matC[2][2];
    int CC,i,j,k;

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
    cout<<endl;
    for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
        CC = 0;
        for(k = 0; k < 2; k++){
          CC = CC + matA[i][k] * matB[k][j];
        }
        matC[i][j] = CC;
        CC = 0;
      }
    }
    cout<<"Element matriks C [hasil] :"<<endl;
        for (i=0;i<2;i++){
            for (j=0;j<2;j++){
            cout<<matC[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
