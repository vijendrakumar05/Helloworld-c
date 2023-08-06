#include<stdio.h>
void square(int n);
int main(){
  int number=4;
  square(number);
  printf("number = %d\n",number);
  return 0;
}
void square(int n){
  n=n*n;
  printf("square =%d \n",n);
}

/*
int main(){
  int i=5;
  int *ptr = &i;
  int **pptr = &ptr;
  printf("%d\n",**pptr);
  return 0;
}
*/

/*
int main(){ //only samjhne ke liye 
float price=100.00;
float *ptr=&price;
float **pptr=&ptr; // this is pointer to pointer 

return  0;
}
*/


/*
int main(){
  int x;
int *ptr;
ptr =&x;
*ptr =0;
printf("x=%d\n",x); 
printf("*ptr=%d\n",*ptr );
*ptr +=5;//5
printf("x=%d\n",x);//5
printf("*ptr=%d\n",*ptr );//5
(*ptr)++; //yeha per ptr value me ++ ho raha hai
printf("x=%d\n",x);//6
printf("*ptr=%d\n",*ptr );//6

return 0;
}
*/

/*
  int main(){
  int age =22;
  int *ptr =&age;
  //value
 printf("%d \n",age);
  printf("%d \n",*ptr);
   printf("%d \n",*(&age));
  return 0;
}
*/

/*
int main(){
  int age =22;
  int *ptr =&age;
  //address 
  printf("%u \n",&age);
  printf("%u \n",ptr);
   printf("%u \n",&ptr);
  //printf("%p \n",&age);// you don't warry alg - alg system me alg alg o/p aa skata hai 
// %p is hexadecimal hai isme hume o/p nahi smjha me aay ga 
// %u is unsigned hai isiliye usd kar rahe hai ise 
  return 0;
}
*/

/*
int main(){
int age =22;
int *ptr=&age;
int _age=*ptr;
printf("%d", _age);
return 0;  
}
*/


// chapter 6
/*
int fib( int n);// Q No.34
int main (){
printf("%d ",fib(6));

return 0;
}
int fib( int n){
if(n==0 ){
  return 0;
}
if(n==1){
  return 1;
  }
  int fibNm1= fib(n-1);
  int fibNm2 = fib(n-2);
    int fibN=fibNm1+fibNm2;
    //printf("fib of %d is : %d",n,fibN);
    return fibN;
}
*/

/*
int calcPersentage(int scinse ,int math ,int sanskrit);// Q No. 33
int main(){
int sc =98;
int math =95;
int sanskrit = 98;
printf("persentage is: %d \n", calcPersentage(sc,math ,sanskrit));

  return 0;
}
int calcPersentage(int scince ,int math ,int sanskrit){
  return ((scince + math + sanskrit ) /3);
}
*/

/*
float convertTemp(float celsius );// Q No.32 

int main(){
  float far = convertTemp(37);// 37 is body temp
  printf("far : %f",far );
  return 0;
}
float convertTemp(float celsius ){
  float far = celsius  * (9.0/5.0) + 32;
  return far;
}
*/

/*
int fact(int n);// base case don't miss // program crash ho jayega 
int main (){
  printf("factorial is :%d",fact(5));
  return 0;
  
}
int fact(int n){
  // if(n==0){
  //   return 1;
  // }
  printf("calculate fact of n :%d \n",n);
  int factNm1 = fact(n-1);
  int factN = factNm1 * n;
  return factN;
}
*/

/*
int fact(int n);// Q NO.31
int main (){
  printf("factorial is :%d",fact(5));
  return 0;
  
}
int fact(int n){
  if(n==0){
    return 1;
  }
  int factNm1 = fact(n-1);
  int factN = factNm1 * n;
  return factN;
}
*/

/*
int sum(int n);
int main(){
printf("sum is : %d ",sum(5));
  return 0;
}
  // recursive function 
int sum(int n){
  if(n == 1 ){
    return 1;
  }
  int sumNm1 = sum(n-1);
  int sumN = sumNm1 + n;
  return sumN;
}
*/

/*
void printHW(int count);//4:39 time
int main() {
printHW(5);
return 0;
}
// recursive function
void printHW(int count){
  if(count==0){
    return;
  }
  printf("hello world \n");
  printHW(count-1);
}
*/
// yeha se #include<math.h> not use 
/*
float squareArea(float side);
float circleArea(float rad );
float rectangleArea(float a, float b);

int main (){ // Q No.31 
float a= 5.0;
float b = 10.0;
printf("rectangleArea is %f",rectangleArea(a,b));

  return 0;
} 
float squareArea(float side){
  return side*side;
}
float circleArea(float rad ){
  return 3.14 * rad * rad;
}
float rectangleArea(float a, float b){
  return a * b;
}
*/

/*
int main (){ // Q No.29 square 
int n=4;
printf("%f \n",pow(n,2)); // double keliye bhi %f ka use kar skate hai 

  return 0;
} 
*/
// yaha se #include<math.h> use ho raha hai
/*
void calculatePrice(float value);// calculate the price with gst
int main () {
  float value = 100.0;
  calculatePrice(value);
  //printf("value is : %f \n",value); and also print original value bina gst ka 

  return 0;
}
void calculatePrice(float value){
  value = value + (0.18 * value);
  printf("final price is : %f \n",value);
}
*/

/*
void printTable(int n);
int main (){
  int n;
printf("enter number :");
scanf("%d ",&n);
printTable(n);// funtion call // argument/ actual parameter

  return 0;
}

void printTable(int n){ // parameter
  for(int i=1; i<=10; i++){
    printf("%d \n ",i*n);
  }
}
*/

/*
int sum(int a, int b);// 4:20
int main (){
  int a,b;
  printf("enter first number :");
  scanf("%d",&a);
  printf("enter second number :");
  scanf("%d",&b);
  int s = sum(a,b);
  printf("sum is %d :",s);
  return 0;
}
int sum(int a, int b ){
  return a+b;
}
*/

/* 
void  namaste();// isme hamesh namaste pahle print hoga  kyo ki main 
void bonjour();// funtion pahle namste ko call kar raha hai 
// indiarect bonjour ko call ho raha hai chahe tum pahle f or i lo 
int main (){
  printf("enter f for french & i for indian :");
  char ch;
  scanf("%c",&ch);
  namaste();
  // if(ch =='i')
  // {
  //   namaste(); // funtion call
  //    }
  //   else
  //   {
  //     bonjour();// funtion call
    
  // }
  return 0;
}
void namaste(){
  printf("Namaste \n");
  bonjour();
}
void bonjour(){
  printf("Bonjour \n");
}
*/

/*
void  namaste();// Q No. 28   
void bonjour();
int main (){
  printf("enter f for french & i for indian :");
  char ch;
  scanf("%c",&ch);
  if(ch =='i')
  {
    namaste(); // funtion call
     }
    else
    {
      bonjour();// funtion call
    
  }
  return 0;
}
void namaste(){
  printf("Namaste \n");
}
void bonjour(){
  printf("Bonjour \n");
}
*/

/*
//declaretion / prototype 
void printHello();
void printGoodbye();  // goodbye print karane ke liye 

int main (){
printHello(); // funtion call 
printGoodbye();
  return 0;
}  
//funtion definition  
void printHello() {
  printf("Hello ! \n");
printf(" my name is Rajvijendra\n");
}
void printGoodbye(){ // goodbye print karane ke liye 
  printf("Goodbye \n");
}
/*
//declaretion / prototype 
void printHello();

int main (){
printHello(); // funtion call 
printHello(); // funtion ko call ker kr kitne bar bhi funtion definition ko print kar sakte hai. 
printHello();
  return 0;
}  
//funtion definition  
void printHello() {
  printf("Hello ! \n");
printf(" my name is Rajvijrndra \n");
}
*/

/*
// ex. only this heder #include<stdio.h>
//declaretion / prototype 
void printHello();

int main (){
printHello(); // funtion call 
printHello(); // funtion ko call ker kr kitne bar bhi funtion definition ko print kar sakte hai. 
printHello();
  return 0;
}  
//funtion definition  
void printHello() {
  printf("Hello ! \n");
}
*/

/*
// chapter 5
//declaretion / prototype 
void printHello();

int main (){
printHello(); // funtion call 

  return 0;
}  
//funtion definition  
void printHello() {
  printf("Hello !");
}
*/
// chapter 5

  /*
  int sum =0;// Q No. 23  sum 5 t0 50
for(int i=5; i<=50; i++){
  sum =sum +i; // or sum += i;
}
printf("sum is %d ",sum); 
*/

/*
int n;// Q No. 22
printf("enter n number:");
scanf("%d",&n);
for(int i=10; i>=1; i--){
  printf("%d \n",n*i);
}
*/

/*
int n;
printf("enter n number:");
scanf("%d",&n);
printf("%d \n",n);// you can live this laine 
int fact =1;
for(int i=1; i<=n; i++){
  fact=fact*i;
}
printf("final factorial is %d \n",fact);
*/

  /*
for(int i=5; i<=50; i++){
if(i % 2!=0){ // odd 
  printf("%d \n",i);
   }
}
*/

/*
for(int i=1; i<=10; i++) { // Q No. 19
if(i==6){
      continue;
   }
 printf("%d \n",i);  
  
}
*/

/*
 for(int i=1; i<=5; i++) {
if(i==3){
      continue;
   }
 printf("%d \n",i);  
  
}

*/

/*
int n;// Q No.17 until odd 
 do{
  printf("enter number :");
  scanf("%d",&n);
  printf("%d \n",n);
 if(n % 7 ==0){ // multipal of 7
  break;
 }
 }while(1);
printf("thank you");
*/

/*
int n;// Q No.17 until odd 
 do{
  printf("enter number :");
  scanf("%d",&n);
  printf("%d \n",n);
 if(n % 2 !=0){
  break;
 }
 }while(1);
printf("thank you");
*/

 /*
 int n;//Q No.16 
 do{
  printf("enter number :");
  scanf("%d",&n);
  printf("%d \n",n);
 if(n % 2 !=0){
  break;
 }
 }while(1);
printf("thank you");
*/

 /*
 for(int i=1; i<=5; i++){ // break statement 
  if(i==3){
    break;
  }
  printf("%d \n",i);
 }
 printf("end");
*/

/*
int n;// Q No.16 table print
printf("enter n number :");
scanf("%d" ,&n);
for(int i=1; i<=10; i++) {
  printf("%d \n",n*i);
}
*/

/*
int n;// Q No.15
printf("enter n number :");
scanf("%d" ,&n);
int sum =0;
for(int i= 1, j=n; i<=n && j>=1; i++,j--) {

sum =sum+i;  //or sum += i
printf("%d \n", j);
}
printf("sum is %d \n:",sum);
*/

/*
int n;// Q No.15 // revers order
printf("enter n number ");
scanf("%d" ,&n);
int sum =0;
for(int i= 1; i<=n; i++){
sum =sum+i;  //or sum += i
}
printf("sum is %d \n:",sum);

  for(int i=n; i>=1; i--){
printf("%d \n",i);
  }
  */

/*
int n;// Q No.15
printf("enter n number :");
scanf("%d" ,&n);
int sum =0;
for(int i= 1; i<=n; i++){
sum =sum+i;  //or sum += i
}
printf("sum is %d \n:",sum);
*/

  /*
  int i=5;//this is revers also do while loop 
  do{
    printf("%d \n ",i);
    i--;
  }while(i>=1);
  */

  /*
  int i=1;//by do while loop 
  do{
    printf("%d \n ",i);
    i++;
  }while(i<=5);
  */

/*
int n;// Q No. 14 by for loop
printf("enter n numbre ");
scanf("%d",&n);
for(int i = 0; i<=n; i++){
printf("%d \n",i);
}
*/

/*
int n;// Q No. 14 by while loop 
printf("enter n numbre ");
scanf("%d",&n);
int i=0;
while(i <= n){
  printf("%d \n ",i);
  i++;
}
*/

/*
int i=1;
while(i<=5){
  printf("hello world \n");
i++;
}
*/

 /*
 for(int i=1;  ; i++){ //this is infinit loop don't use warna program cras ho jayega 
    printf("hello world \n");
 }
 */
  
  /*
  for(char ch='a'; ch<='z'; ch++){ // special things
    printf("%c \n",ch);
  }
  for(float i=1.0; i<=5.0; i++){
    printf("%f \n",i);
  }
  */

// int i=1;
// printf("%d \n",--i);//decrement than use 
// printf("%d \n",i);
// printf("%d \n",i--);//use than decrement
// printf("%d \n",i);

 /* 
 int i=1;
 // i++ (ko post increment kahte hai )
//++i ( ko pre increment kahte hai)
 / printf("%d \n",i++);//use than increase
 //printf("%d \n",i);//ab yaha per i ka value 2 ho chuka hai kyo ki i++ me 1 add ho chuka hai
  printf("%d \n",++i);//increase than use///ab yaha per bhi i ka value 2 ho chuka hai
  printf("%d \n",i);//ab yaha per bhi i ka value 2 ho chuka hai
  */

/*
for(int i=0 ; i<=10 ; i=i+1){// Q No. 13 this is for loop 100 tak num print
   printf("%d \n",i); 
  }
  */
  //iterator ; counter
   /*
   for(int i=10; i>=1; i = i-1){ // this is for loop. revers  num print
   printf("%d \n",i); 
  }
  */

  /*
  for(int i=1 ; i<=100 ; i++){// this is for loop . num print
      printf("%d \n",i); 
   }
   */
//for(int i=1 ; i<=5 ; i++){// thisisforloop 5bar helloWorld karane keliye
  //   printf("hello worid \n");
  // }
  // chapter 4

  /*
  char ch;//Q No.12
  printf("enter character");
  scanf("%c",&ch);
  if(ch >='A' && ch <= 'Z' ){
    printf("upper case\n");
  }
  else if(ch >='a' && ch <= 'z' ){
     printf("lower case \n");
  }
  else{
    printf("not english letter \n");
  }
  */

  /*
  int x = 2;//Q No.11
  if(x=1){
    printf("x is equal to 1");
  }else {
    printf("x is not equal to 1");
  }
  */

   /*
   int marks;// Q No. 10
  printf("enter number (0-100):");
   scanf("%d",&marks);
   if(marks >=0 && marks <= 30){
   printf("c \n");
  }
  else if (marks >= 30 && marks <= 70) {
    printf("B \n"); 
  }
   else if (marks >= 70 && marks <= 90) {
    printf("A \n");
  }
   else{
    printf("A+ \n");
  }
  */

  /*
  int marks;// Q No. 9
  printf("enter number (0-100):");
   scanf("%d",&marks);
   if(marks >=0 && marks <= 30){
    printf("fail \n");
  }
  else if (marks > 30 && marks <= 100) {
    printf("pass \n");
  }else{
    printf("not valid marks or worng marks");
  }
  */

  /*
  int number;//nested 
  printf("enter number :");
  scanf("%d",&number);
  if (number >= 0){
    printf("positive \n");
    if(number % 2==0){
      printf("even \n");
    }else {
      printf("ood \n");
    }

  }else {
    printf("negativ \n");
    
  }
  */

/*
char day;//m-mon; t-tuse;w-wed;......S-sun;// this is swtich loop
 printf("enter day(1-7):");
 scanf("%s",&day);
 switch (day) {
  case 'm':printf("monday \n");
         break; 
  case 't' :printf("tuesday \n");
          break;
  case 'w' :printf("wednesday \n");
          break;
  case 'T' :printf("thursday \n");
          break;
  case 'f' :printf("friday \n");
          break;
  case 's':printf("saturday \n");
          break; 
 case 'S' :printf("sunday \n");
          break;
 default :printf("not a valiad day ! \n");      

 }
 */

 /*
 int day;//1-mon; 2-tuse;3-wed;......7-sun;
 printf("enter day(1-7):");
 scanf("%d",&day);
 switch (day) {
  case 1 :printf("monday \n");
         break; 
  case 2 :printf("tuesday \n");
          break;
  case 3 :printf("wednesday \n");
          break;
  case 4 :printf("thursday \n");
          break;
  case 5 :printf("friday \n");
          break;
  case 6 :printf("saturday \n");
          break; 
 case 7 :printf("sunday \n");
          break;
 default :printf("not a valiad day ! \n");      

 }
 */
  
 /*
 int age ; 
  printf("enter age : ");
  scanf("%d",&age);
  age >= 18 ? printf("adult \n"): printf("not adult \n");
  */
  
  /*
  int age;//this is else if
  printf("enter age : ");

  scanf("%d",&age);
  if(age > 18){
    printf("adult \n");
  }
else if (age > 13 && age < 18) {
  printf("teenager \n");

}
else {
  printf("child");
}
*/

  /*int age;//this is if else 
  printf("enter age : ");

  scanf("%d",&age);
  if(age > 18){
    printf("adult \n");
    printf("they can vote \n");
      printf("they can drive \n");
  }
else{
  printf("not adult \n");
  printf("they can not vote \n");
  printf("they can not drive \n");
}
printf("thank you \n");
*/
 
 /*int x;// Q no 8 
  printf("enter a number :");
  scanf("%d ", &x);
  printf("%d \n", x>9 && x<100);
  */

/*
int isMonday = 1;
int isRaining = 0;
//int isRaining = 1;
printf("%d \n",isMonday || isRaining);
*/

/* 
int isSunday = 0; 
//int isSunday = 1;
int isSnowing = 1;
printf("%d \n",isSunday && isSnowing);
*/

/*
 //Q no. 8 till
  //char star = '*';//vliad Q no. 7
  char star = '**';//invliad
 int x, int y =x;// invlaid
int x;int y =x;// vlaid
 printf("%d",8^8);//return 0 // valid
 */ 

  /*
  //even ->>1
  //odd ->>0
  int x;//Q no. 6 even or odd 
  printf("enter a number:");
  scanf("%d",&x);
  printf("%d",x %2 ==0);
  */

 /*
  int x;//Q no. 5 dividual by 2
  printf("enter a number:");
  scanf("%d",&x);
  printf("%d",x %2 ==0);
*/

  /*
  int a=1;//this is assignment opreators
  int b = 4;
  a *=b;
  printf("%d \n",a);
  */

  /*
  int a = 1;//this is assignment opreators
   int b = 4;
  // a = a+b ;//ise bhi print kra skate ho
   a += b ;//or ise bhi print kra skate ho
   printf("%d \n",a);
   */
  
/*
printf(" %d \n", !(4>3) );  //0 this is not operator 
printf(" %d \n", !(4>5) );//1
printf(" %d \n", !((5>1) && (3>4)) );//1 
printf(" %d \n", !(4>3) && (3>2) ); //0 
*/  

/*
printf(" %d \n", 4>3 || 3>2);//1 this is or operator
//printf(" %d \n", 4>3 || 3>4);//1
//printf(" %d \n", 4>5 || 3>4);//0
*/

//printf(" %d \n", 4>3 && 3>2);//return t mean 1 this is (and operator)
//printf(" %d \n", 4>3 && 3>4);//return f mean 0

/*
printf(" %d \n", 4 != 4);
printf(" %d \n", 4 != 3);
printf(" %d \n", 4==4);
printf(" %d \n", 4==3);
*/

//printf(" %d \n", 4>=4);
//printf(" %d \n", 4==4);
 /* int d = 5+2/2*3;
  printf("%d \n",d);
  */
/*
int c = 5*(2/2)*3;
printf("%d \n",c);
*/

  /*
  int b = 5*2/2*3;
  printf("%d \n",b);
  */

  /*
  int a = 5*2-2*3;
  printf("%d \n ",a);
  */

  /*
  int a = 4*3/6*2;//associativity rule l to r
  printf("%d \n",a);
  */ 

  /*
  int a=1.999999;//a value 1 or 2 come so check
  printf("%d \n",a);
  */

/* 
int b,c;//power function
b= 12;
 c = 12;
int power  = pow(b,c);
printf("power is :%d",power);

*/
//printf("remend is :%d",16%10);//remender (modulo %)
//printf("%d \n",2*2);//multiplay int to int
//printf("%d \n",2.0*2);//error int to float
//printf("%f \n",2.0*2.0);// float to float 
                          
