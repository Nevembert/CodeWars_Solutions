int digital_root(int n)
{
  while(1) {
      if(n > 9){
        int k = n;
        n = 0;
        for(int i = 0; k > 0; i++){
          n += k % 10;
          k /= 10;
        }
      } else {
        return n;
        break;
      }
    }
}
