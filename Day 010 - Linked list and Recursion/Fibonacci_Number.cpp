//************ Recursive Approach ***********
int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1) + fib(n-2);
}
//  T.C.= O(2^n)  S.C.= O(n)

//*********** Better Approach *************
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0;
    int b = 1;
    int result = 0;

    for(int i=2;i<=n;i++){
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}
