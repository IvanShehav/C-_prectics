int main() {
    int n;
    int* a = (int*)malloc(n*sizeof(int));

    cout << "Vvedite chislo elementov: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int s, k, f;
    cout << "Vvedite s, k (s>k): ";
    cin >> s >> k;

    f = a[s];                      /// s > K
                                  /// сдвинуть от k до s-1
    for (int i = s; i >= k; i--) { //двигаем K-elements
        a[i] = a[i-1];
    }

    a[k] = f;

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
     delete [] a;
       return 0;
}