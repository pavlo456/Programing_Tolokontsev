int main()
{
    int n=1234, res = 0;
	printf("\nВизначення зворотнього числа для заданого числа %d\n", n);
    for(;n!=0;){
         res = 10*res + n%10;
         n /= 10;
    }
//    do {
//        res = 10*res + n%10;
//        n /= 10;
//    }while(n);
//    while(n) {
//      res = 10*res + n%10;
//      n /= 10;
//    }
   printf("Зворотне число дорівнює %d\n",res);
   return 0;
}
