int centuryFromYear(int year) 
{
  int k = year / 100;
  if(year % 100 !=0) k++;
return k;
}
