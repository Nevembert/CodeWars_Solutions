bool is_square(int n)
{
  bool red = false;
  for(int i = 0; i * i <= n; i++){
    if(n < 0){
      break;
    }
    if(i * i == n){
      red = true;
      break;
    } 
  }
  return red;
}
