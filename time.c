int main () 
{ 
 time(&curtime);
  printf("Current time = %s", ctime(&curtime));
  getch();
  	 return(0); 
 }
