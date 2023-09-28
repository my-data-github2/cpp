#include <iostream>
using namespace std;

class matrix
{
private:
   int row;
   int col;
   int** n;
   int** m;
   int** p;
   int** t;

public:
   matrix()
   {
      int row = 0;
      int col = 0;
   }
   matrix(int row, int col)
   {
      this->row = row;
      this->col = col;
      n = new int* [row];
      m = new int* [row];
      p = new int* [row];
      t = new int* [row];
      for (int i = 0;i < row;i++) {
         this->n[i] = new int[col];
         this->m[i] = new int[col];
         this->p[i] = new int[col];
         this->t[i] = new int[col];
      }
   }
   ~matrix() {
      for (int i = 0; i < row;i++) {
         delete[]this->n[i];
         delete[] n;
         delete[]this->m[i];
         delete[] m;
         delete[]this->p[i];
         delete[] p;
         delete[]this->t[i];
         delete[] t;
         n = NULL;
         m = NULL;
         p = NULL;
         t = NULL;

      }


   }
   void accept_n() {
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            cin >> n[i][j];
         }
      }
   }
   void accept_m() {
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            cin >> m[i][j];
         }
      }
      cout << endl;
   }

   void print() {
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            cout << n[i][j];
            cout << " ";
         }
         cout << endl;
      }
      cout << endl;
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            cout << m[i][j];
            cout << " ";
         }
         cout << endl;
      }
      cout << endl;
   }
   void add() {
      cout << "Additon: " << endl;
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            cout << n[i][j] + m[i][j];
            cout << " ";
         }
         cout << endl;
      }
      cout << endl;
   }
   void sub() {
      cout << "Substraction: " << endl;
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            cout << n[i][j] - m[i][j];
            cout << " ";
         }
         cout << endl;
      }
      cout << endl;
   }
   void mul() {
      cout << "Multiplication: " << endl;
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            p[i][j] = 0;
            for (int k = 0;k < col;k++) {
               p[i][j] += n[i][k] * m[k][j];
            }
            cout << p[i][j] << " ";
         }
         cout << endl;
      }
      cout << endl;
   }
   void transpose() {
      cout << "Transpose: " << endl;
      for (int i = 0;i < row;i++) {
         for (int j = 0;j < col;j++) {
            t[i][j] = n[j][i];
            cout << t[i][j] << " ";
         }

         cout << endl;
      }
   }
};
int main() {
   matrix a1(2, 2);
   a1.print();
   a1.accept_n();
   a1.accept_m();
   a1.print();
   a1.add();
   a1.sub();
   a1.mul();
   a1.transpose();
   return 0;
}
