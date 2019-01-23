#include <iostream>

/*
 * Exercise 2.1
 *
 * short, int, long, long long are types that can hold integer, they differ by the size of the integer it can contain.
 * They also differ by the number of bytes they used when saved into computer memory.
 *
 * signed int can take negative and positive integer, unsigned can't.
 *
 * float and double are floating point numbers (ex: 1.45), they differ by the number of digits they can hold
 * (6 for the float, 10 for the double).
 *
 * Char type define how a integer is computed on 8bits (1 machine byte)
 * 1 char = 1 byte = 8 bits = 2*2*2*2*2*2*2*2 = 2⁸ = 256 values possibles.
 * So for signed integer (only positives): values possibles are [0,255]
 * For unsigned integer (negatives & positives): we have to address 256 consecutives values, 0 included :
 * So it's [-128,127].
 */

 /*
  * Exercise 2.2
  *
  * rate : float - percentile like (4.5 %)
  * principal : double - it can be a large number with digits (ex: 250 241 440.75 €)
  * payment : float - smaller number than principal, can have digits
  *
  */

 /*
  * Exercise 2.3 & 2.4
  */
//int main() {
//
//    unsigned int sum1, sum2;
//    int sum3, sum4;
//    int a = 42, b = 10;
//
//    sum1 = a - b; // will print 32, in the range of signed int.
//    sum2 = b - a; // negative value, not in range of signed int, will print undefined values (lile maxSignedIntPossible - 32).
//    sum3 = a - b; //will print 32.
//    sum4 = b - a; // will print -32 because -32 is in range of signed int.
//
//    std::cout << sum1 << " "
//              << sum2 << " "
//              << sum3 << " "
//              << sum4 << " "
//              << std::endl;
//
//    return 0;
//}

/*
 * Exercise 2.5
 *
 * 'a' = char literal (8bits, char), L'a' (32 bits, w_char) = wide char literal, "a" = string literal (16 bits, char[]), L"a" = wide string literal (64 bits, w_char[])
 * 10 = signed int literal, 10u = unsigned int literal, 10L = signed long literal, 10uL = unsigned long literal, 012 = octal literal representation of integer, 0xC = hexal literal representation of integer
 * 3.14 = double literal, 3.14f = float literal, 3.14L = long double literal
 * 10 = integer literal, 10u = unsigned int liteal, 10. = double literal, 10e-2 = double literal
 */

/*
 * Exercise 2.6
 *
 * The difference between the two definitions is one use int literal expression and other octal representation of a int literal.
 * For var day the result is the same but for month in one case it's 9 and in the other it doesnt exist (illegal).
 */

/*
 * Exercise 2.7
 *
 * - String literal with two caracters represented with octal \145 & \012
 * - Float literal with value : 3.14*10^-1
 * - Float literal with value : 1024.0
 * - Long double literal with value 3.14
 */

/*
 * Exercise 2.8
 */
//int main()
//{
//    char octal_2 = '\062';
//    char octal_M = '\115';
//
//    std::cout << octal_2 << octal_M << "\n" << std::endl;
//    std::cout << octal_2 << "\v" << octal_M << "\n" << std::endl;
//
//    return 0;
//}

/*
 * Exercise 2.9
 *
 * a) Read an instruction from user keyword, declare a int variable and store that value into it (if it can).
 * Illegal. Variable must be declared first to be correct.
 * b) Illegal. Curly braces are used only for initialization and we cant put a float in a int variable at initialization.
 * Can be corrected by declaring variable first or just by : int i = 3.14.
 * c) Illegal. wage variable must be declared first. Instruction will assign 9999.9 into variable wage and then,
 * initialize variable salary with value of variable wage.
 * d) Legal. integer variable i will by initialized by value 3.14 that will be truncated to 3.
 *
 */

/*
 * Exercise 2.10
 *
 * local_int will be initialized with undefined value.
 * local_string will be initialized with an empty string.
 */

/*
 * Exercise 2.11
 *
 * a) it's a declaration and a definition, ix is declared by keyword extern and defined by it's value.
 * b) it's also a declaration and a definition.
 * c) only a declaration, keyword extern declare the name in the program (to be used outside the file),
 * but don't create the associated entity, it's like a name reservation.
 *
 */

/*
 * Exercise 2.12
 *
 * a) false
 * b) true
 * c) false
 * d) true
 * e) true
 */

/*
 * 2.13
 *
 * a) i = 100;
 *
 * 2.14
 * Illegal, no programm entry point main(). If legal, it print 9 and the sum between integer 1 & 9.
 *
 */

/*
 * 2.15
 *
 * Valid : a & c
 * Invalid : b (cannot assign by ref a value, it must be an object),
 * d (reference must be initialized and not just defined).
 */

/*
 * 2.16
 *
 * a) valid, d = r2 = 3.14159
 * b) valid, copy the value of r1 and cast int to double (which is int 0 to r2 which is referenced to double  d, so d = r2 = 0).
 * c) valid, copy the value of r2 to i (cast double to int). r1 = i = r2 = 0;
 * d) valid, copy the value of d to r1 so to i (cast double to int). i = r1 = d = 0
 */

/*
 * 2.17
 *
 * Programm will print : "10 10"
 */

/*
 * 2.18
 */
//int main()
//{
//    float i = 3.14, *p = nullptr;
//
//    p = &i;
//    std::cout << p << " p:" << *p << std::endl;
//
//    *p = 15.45;
//    std::cout << p << " i: " << i << std::endl;
//
//    return 0;
//}

/*
 * 2.19
 *
 * Pointer can be defined without initialization, reference can't.
 * Pointer hold the memory address of an object, references hold the object directly (they share the same address).
 * Pointer can be reassigned, references don't
 * Pointer can be NULL, reference can't.
 * Point have a void* type that can hold address of any object (regardless types) but no value assignment
 * and arythmetic operation can be done on it.
 *
 */

/*
 * 2.20
 *
 * This program initialize a pointer to an int object then
 * it replace the value of that object by it square (i * i = *p * *p)/
 */

/*
 * 2.21
 *
 * a) Invalid. type of double pointer dp defer from int i.
 * b) Invalid. cannot assign an int value to a pointer.
 * c) Valid. p assigned with the address of int variable i.
 */

/*
 * 2.22
 *
 * if(*p) will check if there is a value into its pointing object (i in this case).
 * if(p) will check if p point to an address (true if p isn't a nullptr).
 */

/*
 * 2.23
 *
 * We can't know if the address hold by the pointer point to a valid object,
 * because we don't know of the memory address hold by the pointer is still used by an object.
 */

/*
 * 2.24
 *
 * Initialization of p is legal bacause it's a void* pointer, so it can hold the address of any object
 * (despite the type).
 * Initialization of *lp is illegal because it's a double pointer so it can't hold the address of an object
 * of another type than double (int in this case).
 */

/*
 * 2.25
 *
 * a) int* p (pointer to an int), i (int), &r (reference to an int)
 * b) int i (int), *ip = 0 (null pointer to an int)
 * c) int* ip (pointer to an int), ip2 (int)
 */

/*
 * 2.26
 *
 * a) illegal, const must be initialized with a value
 * b) legal
 * c) legal
 * d) illegal, value of a const is immutable
 */

/*
 * 2.27
 *
 * a) illegal, reference must bu initialized with an object not a value
 * b) legal const pointer p2 pointing to a int i2 (value of p2 cannont be changed but i2 can)
 * c) illegal, same as a
 * d) legal, const pointer p3 pointing to a const int i2 (value of p3 and i2 (thought p3) cannot be changed)
 * e) lebal, same as b
 * f) illegal, const reference can't exists (reference isnt an object) ans must be initialized with an object
 * g) legal, const int i2 take the value of i at init, reference r to a const int hold i as object,
 * ( value of i cannot be change by r or by itself).
 */

/*
 * 2.28
 *
 * a) declare int i, and const pointer p. illegal because as p is a const it must be initialized with a value.
 * b) declare pointer p1 to an int, const pointer p2 to an int. Illegal, same as a) for p2.
 * c) declare const int ic and reference to a const int r init with ic. Illegal, same as a) for ic.
 * d) declare const pointer p3 to a const int, illegal same as a) for p3
 * e) declare a pointer to a const int with no initialiazation. legal
 */

/*
 * 2.29
 *
 * a) i = ic. legal, variable int i get the value of const int ic
 * b) p1 = p3. legal, pointer to a int p1 get the adress holded by const pointer p3, p1
 * now may point to a const int (p1 can change but the value of the object pointed cannot be changed by p1).
 * c) p1 = &ic. illegal but transform as legal by compiler. point p1 to int hold the address of a temp object that
 * contain value of const int ic.
 * d) p3 = &ic. legal. const p3 pointer to a const int point now on a const int ic.
 * e) p2 = p1. illlegal. const pointer to an int p2 cant change it value.
 * f) ic = *p3. illegal. const int ic cant change it value.
 */

/*
 * 2.30
 *
 * top level const : p3
 * low level const : v2 p2 p3
 */

/*
 * 2.31
 *
 * r1 = v2; legal, r1 refer to a int, so value of const int v2 is copied to r1 and v1.
 * p1 = p2; illegal, not the same low level const. p1 is typed as a pointer to an int but it will be remplaced by
 * a pointer to a const int.
 * p2 = p1; legal, not the same low level const, but its an exception in this case an int* can be cast to a const int*.
 * p1 = p3; illegal, not the same low level const const int * cannot be int *
 * p2 = p3; legal, same low level const.
 *
 */
//int main ()
//{
//    const int v2 = 0;
//    int v1 = 0;
//    int *p1 = &v1, &r1 = v1;
//    const int *p2 = &v2, *const p3 = &v2, &r2 = v2;
//}

/*
 * 2.32
 *
 * int null = 0, *p = null.
 *
 * We cannot initialize pointer p with the value of an int variable.
 * They are several ways to correct it.
 * If you want to bind p to var null : *p = &null;
 * If you want p to be null at initialization : *p = nullptr; OR *p = 0;
 */

/*
 * 2.33
 *
 * a = 42; ok since a is an int.
 * b = 42; ok b is an int.
 * c = 42; ok c is an int.
 * d = 42; error, d is a int*, we must use the depointer operator or replace it by a int*
 * e = 42; error, e is a const int*
 * g = 42; error, g is a const int& bind to ci, we cannot change it value
 */

/*
 * 2.34
 */
//int main()
//{
//    auto i = 0, &r = i;
//    auto a = r;
//    const int ci = i, &cr = ci;
//    auto b = ci;
//    auto c = cr;
//    auto d = &i;
//    auto e = &ci;
//    auto &g = ci;
//
//    a = 42;
//    b = 42;
//    c = 42;
//    d = 42;
//    e = 42;
//    g = 42;
//
//    return 0;
//}

/*
 * 2.35
 *
 * const int i = 42;
 * auto j = i;
 * const auto &k = i;
 * auto *p = &i;
 * const auto j2 = i, &k2 = j;
 *
 * i => const int, j => int, k => const int&, p => const int*, j2 => const int, k2 => const int&
 */
//int main()
//{
//    const int i = 42;
//    auto j = i;
//    const auto &k = i;
//    auto *p = &i;
//    const auto j2 = i, &k2 = j;
//
//    return 0;
//}

/*
 * 2.36
 *
 * a, b, c => int, d => int&
 * a = 4, b = 4, c = 4, d = 4
 */

/*
 * 2.37
 *
 * a, b, c => int
 * d => int&
 */

/*
 * 2.38
 *
 * decltype => compiler determine type by the result of an expression.
 * auto => compiler determine type by the assignent made to the variable.
 *
 * ex:
 * int a = 0;
 * decltype(a) b = a; [AND] auto b = a; are the same.
 *
 * [BUT]
 * int a = 0, b = 1;
 * decltype (a = b) c = b [AND] auto c = a = b, not the same. The first case c is0 int&, the second c is int.
 *
 */

/*
 * 2.39
 *
 * Error message rises by compiler is : "expected ‘;’ after struct definition".
 */
//struct Foo {}
//int main()
//{
//    return 0;
//}

/*
 * 2.40
 */
//struct SalesData
//{
//    std::string isbn;
//    unsigned int unitsSold = 0;
//    double revenue = 0.0;
//};

//int main()
//{
//    SalesData sd;
//
//    sd.isbn = "45-X";
//    sd.unitsSold = 4;
//    sd.revenue = 78.5;
//
//    std::cout << sd.isbn << " "
//              << sd.unitsSold << " "
//              << sd.revenue << std::endl;
//
//    return 0;
//}

/**
 * 2.41
 */
//struct SalesData
//{
//    std::string isbn;
//    unsigned int unitsSold = 0;
//    double unitPrice = 0.0;
//};

/**
 * 2.42
 */
#include "SalesData.h"
int main ()
{
    using SD = SalesData;

    SD sd_init;
    double sum = 0.0;
    int total_units_sold = 0;
    int return_code = 0;

    if (std::cin >> sd_init.isbn >> sd_init.unitsSold >> sd_init.unitPrice) {
        sum += sd_init.unitsSold * sd_init.unitPrice;

        for (SD sd_user; std::cin >> sd_user.isbn >> sd_user.unitsSold >> sd_user.unitPrice;) {
            if (sd_user.isbn == sd_init.isbn) {
                total_units_sold += sd_user.unitsSold;
                sum += sd_user.unitsSold * sd_user.unitPrice;
            } else {
                std::cout << sd_init.isbn << " "
                          << total_units_sold << " "
                          << sum << " "
                          << sum/total_units_sold << " "
                          << std::endl;

                total_units_sold = sd_user.unitsSold;
                sum = sd_user.unitsSold * sd_user.unitPrice;
            }

            sd_init = sd_user;
        }

        std::cout << sd_init.isbn << " "
                  << total_units_sold << " "
                  << sum << " "
                  << sum/total_units_sold << " "
                  << std::endl;
    } else {
        return_code = -1;
        std::cerr << "Invalid data." << std::endl;
    }

    return return_code;
}