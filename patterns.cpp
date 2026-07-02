//Ques 1- square pattern

#include <iostream>
using namespace std;

int main() {
  /*for(int i=1; i<=4; i++) {
    for(int j=1; j<=4; j++) {
      cout << j << " ";
    }
    cout << endl;
  }*/

//Ques2 : alphabet

  /*int n = 4;
  for(int i=0; i<n; i++) {
    char ch= 'A';
    for(int j=0; j<n; j++) {
      cout << ch << " ";
      ch = ch + 1;
      
    }
    cout << endl;
  }*/

  //Ques4

  /*int n=3;
  int num = 1;
  for(int i=0; i<n; i++) {
    for(int j=1; j<=n; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }*/

  //QUes 5

  /*char ch = 'A';
  int n=5;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout << ch << " ";
      ch = ch+1;
    }
    cout << endl;
  }*/

  //Ques6= triangle pattern

  /*int num=1;
  int n=4;

  for(int i=0;i<n;i++) {
    for(int j=0; j<num; j++) {
      cout << "* ";
    }
    cout << endl;
    num++;
  }*/

  //Ques7= triangle pattern with numbers/alphabets
  /*int n=4;
  char ch= 'A';
  for(int i=0; i<n; i++) {
    for(int j=1; j<=i+1; j++) {
      cout << ch << " ";
    }
    cout << endl;
    ch++;
  }*/

  //Ques9= reverse triangle
  /*int n=4;
  for(int i=1; i<=n; i++) {
    int j = i;
    for(j; j>0; j--) {
      cout << j << " ";
    }
    cout << endl;
  }*/

  //Ques11= Floyd's triangle pattern with numbers
  /*int n=4;
  int num=1;
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i;j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }

  char ch='A';
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i;j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }*/


  //Ques=13 Inverted triangle

  /*int n=4;
  for(int i=1; i<=n; i++) {
    for(int j=1; j<i; j++) {
      cout << " ";
    }
    for(int j=n;j>=i; j--) {
      cout << i;
    }
    cout << endl;
  }*/

  //Ques14= Pyramid

  int n=4;
  for(int i=0; i<n; i++) {
    for(int j=0; j<(n-i-1); j++) {
      cout << " ";
    }
    for(int j=1; j<=(i+1); j++) {
      cout << j;
    }
    for (int j=0; j<i; j++) {
      cout << i-j;
    }
    cout << endl;
  }

  return 0;
}