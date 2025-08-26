int smallestEvenMultiple(int n) {
    int x, y, rest;

    x = n;
    y = 2;

    do {
        rest = x % y;

        x = y;
        y = rest;
    }while(rest != 0);

    return (n*2) / x;
}