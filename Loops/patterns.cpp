#include<iostream>
using namespace std;

int nCr(int n, int k) {
    if (k > n - k)
        k = n - k;

    int res = 1;

    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void pattern1(int n){
    // 1 2 3
    // 4 5 6
    // 7 8 9
    int num = 1;
    for (int i = 0; i <n; i++){
        for (int j = 0; j < n; j++){   
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void pattern2(int n){
    // *
    // * *
    // * * *
    // * * * *
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    } 
}
void pattern3(int n){
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    for (int i = 0; i < n; i++){
        int num = 1;
        for (int j = 0; j < i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    // A
    // B B
    // C C C
    // D D D D
    char ch = 'A';
    for (int i = 0; i <= n; i++){
        for (int j = 0; j < i+1; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;   
    }
}
void pattern5(int n){
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    for (int i = 0; i < n; i++){
        for (int j = i+1; j > 0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int num = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void pattern8(int n){
    // A
    // B C
    // D E F
    // G H I J
    char ch = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void pattern9(int n){
    // A
    // B A
    // C B A
    // D C B A

    for (int i = 0; i < n; i++){
        for (char ch = 'A' + i; ch >= 'A'; ch--){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern10(int n){              /* Star */
    // 1111
    // 222
    // 33
    // 4
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout<<" "; 
        }
        for (int j = 0; j < n-i; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
void pattern11(int n){
    // A A A A
    //   B B B
    //     C C
    //       D
    char ch = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout<<" ";
        }
        for (int j = 0; j < n-i; j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}

void pattern12(int n){
    //    1
    //   121
    //  12321
    // 1234321
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        for (int j = 1; j <= i+1; j++){
            cout<<j;
        }
        for (int j = i; j >= 1; j--){
            cout<<j;
        }
        cout<<endl;
    } 
}

void pattern13(int n){
    //       *
    //      * *
    //     *   *
    //    *     *
    //     *   *
    //      * *
    //       *

    for(int i=0; i<=2*n-2;i++){
        for(int j=0; j<=2*n-2; j++){
            if((i<=n-1 && (j==n-1-i || j==n-1+i)) || i>=n && (j==i-n+1 || j==2*n-2-(i-n+1))){
                cout<<"*";
            }
            else{
                cout<<" ";
            } 
        }
        cout<<endl;  
    }
}

void pattern14(int n){
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    for (int i=0;i<2*n; i++){
        for(int j=0; j<2*n; j++){
            if((i<n && (j>i && j<2*n-1-i)) || (i>n && (j>=2*n-i) &&  j<=i-1)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern15(int n){
    // 2
    // 33
    // 444
    // 5555
    // 5555
    // 444
    // 33
    // 2
    for (int i = 2; i < n + 1; i++){
        for (int j = 0; j < i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    for (int i = n ; i >= 2; i--){
        for (int j = i; j > 0; j--){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    //    ******
    //    *    *
    //    *    *
    //    ******

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n+1; j++){
            if(i==1 || i==n || j==0 || j==n+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
}

void pattern17(int n){
    //      *
    //     ***
    //    *****
    //   *******
    //    *****
    //     ***
    //      * 
  
    for(int i=0; i<=2*n-2;i++){
      for(int j=0; j<=2*n-2; j++){
        if((i<n-1 && (j<n-1-i || j>n-1+i)) || i>n-1 && (j<i-n+1 || j>3*(n-1)-i)){
          cout<<" ";
        }
        else{
          cout<<"*";
        } 
      }
      cout<<endl;  
    }

}

void pattern18(int n){
  //    ******
  //     ******
  //      ******
  //       ******
  for (int i = 0; i < n; i++){
    for (int j = 0; j<2*n+1; j++){
      if(j>=i && j <= n+i+1)
        cout<<"*";
      else
        cout<<" ";
    }
    cout<<endl;
  }
}

void pattern19(int n){
    //    4*4*4*4
    //    3*3*3
    //    2*2
    //    1
    //    1
    //    2*2
    //    3*3*3
    //    4*4*4*4

    for (int i = 0; i < n; i++){
        int num = n-i;
        for (int j = 0; j < num; j++){
            cout<<num;
            if(j!=num-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++){
        int num = i+1;
        for (int j = 0; j < num; j++){
            cout<<num;
            if(j!=num-1){
                cout<<"*";
            }
        }
        cout<<endl;
    } 
}
void pattern20(int n){
    // *********
    //  ******* 
    //   *****  
    //    ***   
    //     *    
    //    ***   
    //   *****  
    //  ******* 
    // *********
    for (int i = 0; i <= 2*n-2; i++){
        for (int j = 0; j <= 2*n-2; j++){
            if((i<n && ((j<i || j>2*n-2-i))) || (i>n-1 && (j<n-2-(i-n) || j>n+(i-n)))){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern21(int n){
    //       *
    //      * *
    //     *   *
    //    *     *
    //   *       *
    //  *         *
    // *************

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n-1; j++){
            if(j==n-1-i || i==n-1 ||j==n-1+i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

void pattern22(int n){
    // *************
    //  *         *
    //   *       *
    //    *     *
    //     *   *
    //      * *
    //       *

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i-1; j++){
            cout<<" ";
        }
        for (int j = 1; j <= 2*(n-i)+1; j++){
            if(j==1 || j==2*(n-i)+1 || i==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern23(int n){
    // *
    // **
    // * *
    // *  *
    // *****
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            if(j==i || j==1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern24(int n){
//     *****
//      *  * 
//       * *  
//        **   
//         *
    for (int i = 0; i < n; i++){
        // spaces
        for (int j = 0; j < i; j++){
            cout<<" ";
        }
        for (int j = 0; j <= n-i-1; j++){
            if(i==0 || j==0 || j==n-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern25(int n){
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *

    for (int i=0;i<=2*n; i++){
        for(int j=0; j<=2*n+1; j++){
            if(i<n && (j>i && j<2*n+1-i) || i>n && (j>=2*n-i+1 && j<=i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void pattern26(int n){
    //      1    
    //     212   
    //    32123  
    //   4321234 
    //  543212345
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n; j++){
            if(j>=2*n/2-i && j<=2*n/2+i){
                if(j<=2*n/2){
                    cout<<(n+1)-j;
                }
                else if(j>=2*n/2){
                    cout<<j-(n-1);
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern28(int n){
    for (int i = 0; i <= n; i++){
        int r = 0;
        for (int j = 0; j <= n+i; j++){
            if((j<=n && j>=n-i || j>=n && j<=n+i) && (n%2==0 && (i%2==0 && j%2==0 || i%2!=0 && j%2!=0) || n%2!=0 && (i%2==0 && j%2!=0 || i%2!=0 && j%2==0))){
                cout<<nCr(i,r);
                r+=1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern29(int n){
    for (int i = 0; i <= 2*n-2; i++){
        for (int j = 0; j <= 2*(n-i-1) && i<=n-1 || (i>n-1 && j<=2*(i-n+1)); j++){
            if((i<=n-1 && (j>=n-i-1 && j<=2*(n-i-1))) || (i>n-1 && (j>=i-n+1 && j<=2*(i-n+1)))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    // pattern1(3);
    // pattern2(4);
    // pattern3(5);
    // pattern4(9);
    // pattern5(4);
    // pattern6(4);
    // pattern7(4);
    // pattern8(4);
    // pattern9(4);
    // pattern10(4);
    // pattern11(4);
    // pattern12(4);
    // pattern13(5);
    // pattern14(5);
    // pattern15(5);
    // pattern16(4);
    //  pattern17(5);
    // pattern18(5);
    // pattern19(4);
    // pattern20(5);
    // pattern21(5);
    // pattern22(5);
    // pattern23(5);
    // pattern24(5);
    // pattern25(5);
    // pattern26(5);
    // pattern27(5);
    // pattern28(5);
    // pattern29(5);
    return 0;
}
