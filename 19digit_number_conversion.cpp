#include <iostream>
#include<fstream>
using namespace std;
int main() {


long int num;	
long int  no, r, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13,
      n14, n15, n16, n17, n18, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11,
      r12, r13, r14, r15, r16, r17, r18;
cout<<"Enter a whole number:";
cin>>num;
  no = num;
  r1 = no % 10;
  n1 = no / 10;
  r2 = n1 % 10;
  n2 = n1 / 10;
  r3 = n2 % 10;
  n3 = n2 / 10;
  r4 = n3 % 10;
  n4 = n3 / 10;
  r5 = n4 % 10;
  n5 = n4 / 10;
  r6 = n5 % 10;
  n6 = n5 / 10;
  r7 = n6 % 10;
  n7 = n6 / 10;
  r8 = n7 % 10;
  n8 = n7 / 10;
  r9 = n8 % 10;
  n9 = n8 / 10;
  r10 = n9 % 10;
  n10 = n9 / 10;
  r11 = n10 % 10;
  n11 = n10 / 10;
  r12 = n11 % 10;
  n12 = n11 / 10;
  r13 = n12 % 10;
  n13 = n12 / 10;
  r14 = n13 % 10;
  n14 = n13 / 10;
  r15 = n14 % 10;
  n15 = n14 / 10;
  r16 = n15 % 10;
  n16 = n15 / 10;
  r17 = n16 % 10;
  n17 = n16 / 10;
  r18 = n17 % 10;
  n18 = n17 / 10;
  const char *a[10] = {"Ten",      "Eleven",  "Twelve",  "Thirteen",
                       "Fourteen", "Fifteen", "Sixteen", "Seventeen",
                       "Eighteen", "Nineteen"};
  const char *b[10] = {" ",     " ",     "Twenty",  "Thirty", "Forty",
                       "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
  const char *c[10] = {" ",    "One", "Two",   "Three", "Four",
                       "Five", "Six", "Seven", "Eight", "Nine"};
  if (no == 0) {

    cout << "Zero";
  }
  int l = 0;
  switch (n18) {
  case 0:
    if (n18 == 0 && r18 != 0) {
      for (l = 0; l < 10; l++) {
        if (r18 == l) {
          cout << c[l];
        }
      }
    } else {
      for (l = 0; l < 10; l++) {
        if (r18 == l) {
          cout << c[l];
        }
      }
    }

    break;
  case 1: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << a[l];
      }
    }
  } break;
  case 2: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[2] << " " << c[l];
      }
    }
  } break;
  case 3: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[3] << " " << c[l];
      }
    }
  }

  break;
  case 4: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[4] << " " << c[l];
      }
    }
  }

  break;
  case 5: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[5] << " " << c[l];
      }
    }
  }

  break;
  case 6: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[6] << " " << c[l];
      }
    }
  }

  break;
  case 7: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[7] << " " << c[l];
      }
    }
  }

  break;
  case 8: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[8] << " " << c[l];
      }
    }
  }

  break;
  case 9: {
    for (l = 0; l < 10; l++) {
      if (r18 == l) {
        cout << b[9] << " " << c[l];
      }
    }
  }

  break;
  }
  if (n18 == 0 && r18 == 0) {
    cout << "";
  } else {
    if (r17 == 0 && r16 == 0 && r15 == 0 && r14 == 0 && r13 == 0 && r12 == 0 &&
        r11 == 0 && r10 == 0 && r9 == 0 && r8 == 0 && r7 == 0 && r6 == 0 &&
        r5 == 0 && r4 == 0 && r3 == 0 && r2 == 0 && r1 == 0) {
      cout << " Shakh ";
    } else {
      cout << " Shakh and ";
    }
  }
  int m = 0;
  switch (r17) {
  case 0: {
    for (m = 0; m < 10; m++) {

      if (r16 == m) {
        cout << c[m];
      }
    }
  } break;
  case 1: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << a[m];
      }
    }
  } break;

  case 2: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[2] << " " << c[m];
      }
    }
  }

  break;
  case 3: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[3] << " " << c[m];
      }
    }
  }

  break;
  case 4: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[4] << " " << c[m];
      }
    }
  }

  break;
  case 5: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[5] << " " << c[m];
      }
    }
  }

  break;
  case 6: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[6] << " " << c[m];
      }
    }
  }

  break;
  case 7: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[7] << " " << c[m];
      }
    }
  }

  break;
  case 8: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[8] << " " << c[m];
      }
    }
  }

  break;
  case 9: {
    for (m = 0; m < 10; m++) {
      if (r16 == m) {
        cout << b[9] << " " << c[m];
      }
    }
  }

  break;
  }
  if (r17 == 0 && r16 == 0) {
    cout << "";
  } else {
    if (r15 == 0 && r14 == 0 && r13 == 0 && r12 == 0 && r11 == 0 && r10 == 0 &&
        r9 == 0 && r8 == 0 && r7 == 0 && r6 == 0 && r5 == 0 && r4 == 0 &&
        r3 == 0 && r2 == 0 && r1 == 0) {
      cout << " Padma ";
    } else {
      cout << " Padma and ";
    }
  }
  int n = 0;
  switch (r15) {
  case 0: {
    for (n = 0; n < 10; n++) {

      if (r14 == n) {
        cout << c[n];
      }
    }
  } break;
  case 1: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << a[n];
      }
    }
  } break;

  case 2: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[2] << " " << c[n];
      }
    }
  }

  break;
  case 3: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[3] << " " << c[n];
      }
    }
  }

  break;
  case 4: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[4] << " " << c[n];
      }
    }
  }

  break;
  case 5: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[5] << " " << c[n];
      }
    }
  }

  break;
  case 6: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[6] << " " << c[n];
      }
    }
  }

  break;
  case 7: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[7] << " " << c[n];
      }
    }
  }

  break;
  case 8: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[8] << " " << c[n];
      }
    }
  }

  break;
  case 9: {
    for (n = 0; n < 10; n++) {
      if (r14 == n) {
        cout << b[9] << " " << c[n];
      }
    }
  }

  break;
  }
  if (r15 == 0 && r14 == 0) {
    cout << "";
  } else {
    if (r13 == 0 && r12 == 0 && r11 == 0 && r10 == 0 && r9 == 0 && r8 == 0 &&
        r7 == 0 && r6 == 0 && r5 == 0 && r4 == 0 && r3 == 0 && r2 == 0 &&
        r1 == 0) {
      cout << " Nil ";
    } else {
      cout << " Nil and ";
    }
  }
  int o = 0;
  switch (r13) {
  case 0: {
    for (o = 0; o < 10; o++) {

      if (r12 == o) {
        cout << c[o];
      }
    }
  } break;
  case 1: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << a[o];
      }
    }
  } break;

  case 2: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[2] << " " << c[o];
      }
    }
  }

  break;
  case 3: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[3] << " " << c[o];
      }
    }
  }

  break;
  case 4: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[4] << " " << c[o];
      }
    }
  }

  break;
  case 5: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[5] << " " << c[o];
      }
    }
  }

  break;
  case 6: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[6] << " " << c[o];
      }
    }
  }

  break;
  case 7: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[7] << " " << c[o];
      }
    }
  }

  break;
  case 8: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[8] << " " << c[o];
      }
    }
  }

  break;
  case 9: {
    for (o = 0; o < 10; o++) {
      if (r12 == o) {
        cout << b[9] << " " << c[o];
      }
    }
  }

  break;
  }
  if (r13 == 0 && r12 == 0) {
    cout << "";
  } else {
    if (r11 == 0 && r10 == 0 && r9 == 0 && r8 == 0 && r7 == 0 && r6 == 0 &&
        r5 == 0 && r4 == 0 && r3 == 0 && r2 == 0 && r1 == 0) {
      cout << " Kharab ";
    } else {
      cout << " Kharab and ";
    }
  }
  int p = 0;
  switch (r11) {
  case 0: {
    for (p = 0; p < 10; p++) {

      if (r10 == p) {
        cout << c[p];
      }
    }
  } break;
  case 1: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << a[p];
      }
    }
  } break;

  case 2: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[2] << " " << c[p];
      }
    }
  }

  break;
  case 3: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[3] << " " << c[p];
      }
    }
  }

  break;
  case 4: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[4] << " " << c[p];
      }
    }
  }

  break;
  case 5: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[5] << " " << c[p];
      }
    }
  }

  break;
  case 6: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[6] << " " << c[p];
      }
    }
  }

  break;
  case 7: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[7] << " " << c[p];
      }
    }
  }

  break;
  case 8: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[8] << " " << c[p];
      }
    }
  }

  break;
  case 9: {
    for (p = 0; p < 10; p++) {
      if (r10 == p) {
        cout << b[9] << " " << c[p];
      }
    }
  }

  break;
  }
  if (r11 == 0 && r10 == 0) {
    cout << "";
  } else {
    if (r9 == 0 && r8 == 0 && r7 == 0 && r6 == 0 && r5 == 0 && r4 == 0 &&
        r3 == 0 && r2 == 0 && r1 == 0) {
      cout << " Arab ";
    } else {
      cout << " Arab and ";
    }
  }
  int q = 0;
  switch (r9) {
  case 0: {
    for (q = 0; q < 10; q++) {

      if (r8 == q) {
        cout << c[q];
      }
    }
  } break;
  case 1: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << a[q];
      }
    }
  } break;

  case 2: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[2] << " " << c[q];
      }
    }
  }

  break;
  case 3: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[3] << " " << c[q];
      }
    }
  }

  break;
  case 4: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[4] << " " << c[q];
      }
    }
  }

  break;
  case 5: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[5] << " " << c[q];
      }
    }
  }

  break;
  case 6: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[6] << " " << c[q];
      }
    }
  }

  break;
  case 7: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[7] << " " << c[q];
      }
    }
  }

  break;
  case 8: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[8] << " " << c[q];
      }
    }
  }

  break;
  case 9: {
    for (q = 0; q < 10; q++) {
      if (r8 == q) {
        cout << b[9] << " " << c[q];
      }
    }
  }

  break;
  }
  if (r9 == 0 && r8 == 0) {
    cout << "";
  } else {
    if (r7 == 0 && r6 == 0 && r5 == 0 && r4 == 0 && r3 == 0 && r2 == 0 &&
        r1 == 0) {
      cout << " Crore ";
    } else {
      cout << " Crore and ";
    }
  }

  int i = 0;
  switch (r7) {
  case 0:
    if (r7 == 0 && r6 != 0) {
      for (i = 0; i < 10; i++) {
        if (r6 == i) {
          cout << c[i];
        }
      }
    } else {
      for (i = 0; i < 10; i++) {
        if (r6 == i) {
          cout << c[i];
        }
      }
    }

    break;
  case 1: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << a[i];
      }
    }
  } break;
  case 2: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[2] << " " << c[i];
      }
    }
  } break;
  case 3: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[3] << " " << c[i];
      }
    }
  }

  break;
  case 4: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[4] << " " << c[i];
      }
    }
  }

  break;
  case 5: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[5] << " " << c[i];
      }
    }
  }

  break;
  case 6: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[6] << " " << c[i];
      }
    }
  }

  break;
  case 7: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[7] << " " << c[i];
      }
    }
  }

  break;
  case 8: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[8] << " " << c[i];
      }
    }
  }

  break;
  case 9: {
    for (i = 0; i < 10; i++) {
      if (r6 == i) {
        cout << b[9] << " " << c[i];
      }
    }
  }

  break;
  }
  if (r7 == 0 && r6 == 0) {
    cout << "";
  } else {
    if (r5 == 0 && r4 == 0 && r3 == 0 && r2 == 0 && r1 == 0) {
      cout << " Lakh ";
    } else {
      cout << " Lakh and ";
    }
  }
  int j = 0;
  switch (r5) {
  case 0: {
    for (j = 0; j < 10; j++) {

      if (r4 == j) {
        cout << c[j];
      }
    }
  } break;
  case 1: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << a[j];
      }
    }
  } break;

  case 2: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[2] << " " << c[j];
      }
    }
  }

  break;
  case 3: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[3] << " " << c[j];
      }
    }
  }

  break;
  case 4: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[4] << " " << c[j];
      }
    }
  }

  break;
  case 5: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[5] << " " << c[j];
      }
    }
  }

  break;
  case 6: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[6] << " " << c[j];
      }
    }
  }

  break;
  case 7: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[7] << " " << c[j];
      }
    }
  }

  break;
  case 8: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[8] << " " << c[j];
      }
    }
  }

  break;
  case 9: {
    for (j = 0; j < 10; j++) {
      if (r4 == j) {
        cout << b[9] << " " << c[j];
      }
    }
  }

  break;
  }
  if (r5 == 0 && r4 == 0) {
    cout << "";
  } else {
    if (r3 == 0 && r2 == 0 && r1 == 0) {
      cout << " Thousand ";
    } else {
      cout << " Thousand and ";
    }
  }
  int k = 0;
  switch (r3) {
  case 0:
    cout << " ";

    break;
  case 1:
    cout << c[1];
    break;
  case 2:
    cout << c[2];
    break;
  case 3:
    cout << c[3];
    break;
  case 4:
    cout << c[4];
    break;
  case 5:
    cout << c[5];
    break;
  case 6:
    cout << c[6];
    break;
  case 7:
    cout << c[7];
    break;
  case 8:
    cout << c[8];
    break;
  case 9:
    cout << c[9];
    break;
  }

  if (r3 != 0) {
    if (n6 == 0 && r6 == 0 && r5 == 0 && r4 == 0 && r2 == 0 && r1 == 0) {
      cout << " Hundred ";
    } else {
      cout << " Hundred and ";
    }
  }
  switch (r2) {
  case 0: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << c[k];
      }
    }
  }

  break;
  case 1: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << a[k];
      }
    }
  }

  break;
  case 2: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[2] << " " << c[k];
      }
    }
  }

  break;
  case 3: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[3] << " " << c[k];
      }
    }
  }

  break;
  case 4: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[4] << " " << c[k];
      }
    }
  }

  break;
  case 5: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[5] << " " << c[k];
      }
    }
  }

  break;
  case 6: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[6] << " " << c[k];
      }
    }
  }

  break;
  case 7: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[7] << " " << c[k];
      }
    }
  }

  break;
  case 8: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[8] << " " << c[k];
      }
    }
  }

  break;
  case 9: {
    for (k = 0; k < 10; k++) {
      if (r1 == k) {
        cout << b[9] << " " << c[k];
      }
    }
  }

  break;
  }
  cout<<endl;
  return 0;
}
