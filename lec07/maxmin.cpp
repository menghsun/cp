#include <iostream>
#define N 10
using namespace std;
void max_min(int a[], int n, int *max, int *min);
int main()
{
  int b[N], i, big, small;

  cout << "Enter " << N << " numbers: ";
  for (i = 0; i < N; i++) 
    cin >> b[i];

  max_min(b, N, &big, &small);

  cout << "Largest: " << big << endl;
  cout << "Smallest: " << small << endl;
  return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
  int i;

  *max = *min = a[0];
  for (i = 1; i < n; i++) {
    if (a[i] > *max)
      *max = a[i];
    else if (a[i] < *min)
      *min = a[i];
  }
}

