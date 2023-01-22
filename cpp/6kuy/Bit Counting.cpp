unsigned int countBits(unsigned long long n){
  char s[400];  // для int хватит
  int i = 0, k = 0;
  for(i ; n; i++) {
    s[i] = n % 2;
    n /= 2;
  }
  for(i--; i>=0; i--){
    if((int)s[i] == 1){
      k++;
    }
  }
  return k;
}
