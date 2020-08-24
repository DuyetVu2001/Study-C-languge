#include<stdio.h>
int cong(int a , int b){
    int c = a + b;
    return c;

}
int tru(int a , int b){
    int c = a - b;
    return c;
}
int nhan(int a , int b){
    int c = a * b;
    return c;
}
int chia(int a , int b){
    if(b==0)
    {
        printf("Khong thuc hien duoc phep chia!!!");

    }
    else
    {
        float c = a / b;
        return c;

    }
    void nhap(int *a , int *b){
        printf("nhap so nguyen a: ");
        scanf("%d",a);
        printf("Nhap so nguyen b: ");
        scanf("%d",b);
    }
    int main(){
        int a , b;
        nhap( &a , &b);
        printf("Tong cua 2 so la: %d",cong(a,b));
        printf("Hieu cua 2 so la: %d",hieu(a , b));
        printf("tich cua 2 so la: %d",tich(a , b));
        pritnf("thuong cua 2 so la: %f", thuong(a , b));
        
    }
}

