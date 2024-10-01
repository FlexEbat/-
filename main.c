#include <stdio.h>
 
/*
TEXT
*/
typedef unsigned char BYTE; // typedef




int main()                  
{   
	int number = 3;
	int number2 = 2;
	int number3 = 1;
	//number = 3;
	printf("Your number = %d \n", number); // Для вывода числа используется "... = %d"  
	printf("Your number = %d \n", number2 ); // Для вывода числа используется "... = %d"  
	printf("Your number = %d \n", number3 ); // Для вывода числа используется "... = %d"  
    //printf("Hola");  

    // Целочисленные типы
    int age = 38;
    signed int number4 = 38;     
    signed temps = -3; // целое число со знаком
    printf("Your number = %d \n", number4);
    printf("Temperatures = %d \n", temps);
    printf("123 = %d \n", age);


// Если нужно хранить Только положительные числа
//При выводе таких чисел на консоль применяется спецификатор %u.
    unsigned number5 = 4294967294u;
    unsigned int number6 = 22U;
    printf("Unsigned number = %u\n", number5 );
    printf("Unsigned int number2 = %u\n", number6 );


// Числа с плавающей запятой
    double number7 = 34.5;
    printf("Number 7 = %f \n", number7);
    long double number8 = 123456.789l;
    printf("Number 7 = %Lf \n", number8);
    char letter = 'A';
    printf("Letter = %c \n", letter);

    // typedef
   BYTE byte = 22;
   printf("byte = %d \n", byte);

   //sizeoff()
    long double number9 = 123456.789l;
    printf("Number 9 = %Lf \n", number9);
    printf("sizeof(number9) = %d \n", sizeof(number9));

    const int number10 = 124;
    printf("Number10 = %d \n", number10);


    // Преобразование
  	int a = 10;
  	int b = 4;
  	int c = a / b;
  	double d = a / b;
  	double e = (double)a / (double)b;
  	printf("C = %d \n", c);
  	printf("D = %f \n", d);
  	printf("E = %f \n", e);
    return 0;
}                           