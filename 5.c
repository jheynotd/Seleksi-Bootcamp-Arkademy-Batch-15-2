    #include <stdio.h>
    void fibo(int a, int b);
    int main() {
        int a,b;
        printf("Masukkan elemen untuk menampilkan deret Fibonacci(x,y)= ");
        scanf("%d,%d",&a, &b);
        int n=a*b;
        fibo(a, b);    
    }
    
    void fibo(int a, int b){
        int k=1,n=a*b;
        int list[n];
        list[1]=0;
        list[2]=1;
        int fib[a][b];

        for(int i = 3; i <= n; i++) {
            list[i] = list[i-1]+list[i-2]; 
        }

        printf("\n");
        for (int p = 1; p <= a; p++){
            for (int q = 1 ; q <= b; q++){
                fib[p][q]=list[k];
                k++;
                printf("%d\t", fib[p][q]);
            }
            
            printf("\n");
        }
    }
    
