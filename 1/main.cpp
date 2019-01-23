#include <iostream>
// Include for exercises 1.19+
#include "Sales_item.h"

/**
 * Exercise 1.3
 *
 * @return
 */
//int main()
//{
//    std::cout << "Hello, World" << std::endl;
//
//    return 0;
//}

/**
 * Exercise 1.4 & 1.5 & 1.6
 * @return
 */
//int main()
//{
//    // 1.4
//    int a = 0, b = 0;
//
//    std::cout << "Enter two number, press enter to continue :" << std::endl;
//    std::cin >> a >> b;
//
//    // 1.5
//    std::cout << "You entered " << a << " and " << b << "\nThe product of them is : "
//              << a * b << std::endl;
//
//    // 1.6
//    std::cout << "You entered ";
//    std::cout << a;
//    std::cout << " and ";
//    std::cout << b;
//    std::cout << "\n";
//    std::cout << "The product of them is : ";
//    std::cout << a * b;
//    std::cout << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.6
 *
 * This code is invalid because the two last instructions are missing the left-hand operand.
 *
 */

/*
 * Exercise 1.7 & 1.8
 */
//int main()
//{
//    std::cout << "/*";
//    std::cout << "*/";
//    std::cout << /* "*/" */";
//    std::cout << /* "*/" /* "/*" */;
//
//    return 0;
//}

/*
 * Exercise 1.9
 */
//int main()
//{
//    int i = 50, sum = 0, maxVal = 100;
//
//    while (i <= maxVal) {
//        sum += i;
//        ++i;
//    }
//
//    std::cout << "Sum of all integers between 50 & 100 is : "
//              << sum << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.10
 */
//int main()
//{
//    int i = 10, minVal = 0;
//
//    while (i >= minVal) {
//        std::cout << "\n" << i;
//        --i;
//    }
//
//    std::cout << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.11
 */
//int main()
//{
//    int userVal1, userVal2;
//
//    std::cout << "Please enter a range of two numbers, this program will promp every integers in this range:"
//              << std::endl;
//
//    std::cin >> userVal1 >> userVal2;
//
//    while (userVal1 <= userVal2) {
//        std::cout << "\n" << userVal1;
//        ++userVal1;
//    }
//
//    std::cout << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.12
 *
 * The code make the sum of all relative integers between -100 and 100, the final sum will be 0.
 */

/*
 * Exercise 1.13
 */
//int main()
//{
//    int minVal, maxVal = 100, sum = 0;
//
//    for (minVal = 50; minVal <= maxVal; ++minVal) {
//        sum += minVal;
//    }
//
//    std::cout << "Sum of all integers between 50 & 100 is : "
//              << sum << std::endl;
//
//    minVal = 0, sum = 0;
//    for (maxVal = 10; maxVal >= minVal; --maxVal) {
//        std::cout << "\n" << maxVal;
//    }
//
//    return 0;
//}

/*
 * Exercise 1.14
 *
 * For statement :
 * - less comprehensive than while
 * + no need for an intermediate instruction.
 */

/*
 * Exercise 1.15
 */
//int main()
//{
//    // Type error.
//    int val = "Hello";
//
//    // Declaration error.
//    std::cout << "\n" << value;
//
//    // Syntax error.
//    std::cout << "Syntax Error" << std::endl
//}

/*
 * Exercise 1.16
 */
//int main()
//{
//    int sum = 0;
//
//    for (int userVal; std::cin >> userVal; sum += userVal);
//
//    std::cout << "Final sum is : " << sum
//              << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.17
 *
 * If user enter val x times, we will stay in the first condition of ifelse block,
 * only val be printed x times and final counter will display : "val occurs x times".
 *
 * If they are no duplicated values, we will only go on the 2nd statement of ifelse block,
 * each value will be printed one time and final counter will display all value in a row like this:
 * val1 occurs 1 times
 * val2 occurs 1 times
 * val3 occurs 1 times
 * ...
 */

/**
 * Exercise 1.18
 */
//int main()
//{
//     int initialVal, userVal, count;
//
//     std::cout << "Please enter an integer :" << std::endl;
//     std::cin >> initialVal;
//     count = 1;
//
//     std::cout << "Now enter any integer you want :" << std::endl;
//
//     for (userVal = 0; std::cin >> userVal;)
//     {
//         if (userVal == initialVal) {
//             ++count;
//         } else {
//             std::cout << "\n" << initialVal
//                       << " occured " << count
//                       << " times." << std::endl;
//
//             initialVal = userVal;
//             count = 1;
//         }
//     }
//
//    std::cout << "\n" << initialVal
//              << " occured " << count
//              << " times." << std::endl;
//
//     return 0;
//}

/*
 * Exercise 1.19
 */
//int main()
//{
//    int userVal1, userVal2;
//
//    std::cout << "Please enter a range of two numbers, this program will promp every integers in this range:"
//              << std::endl;
//
//    std::cin >> userVal1 >> userVal2;
//
//    if (userVal1 < userVal2) {
//        while (userVal1 <= userVal2) {
//            std::cout << "\n" << userVal1;
//            ++userVal1;
//        }
//    } else if (userVal1 > userVal2) {
//        while (userVal1 >= userVal2) {
//            std::cout << "\n" << userVal1;
//            --userVal1;
//        }
//    } else {
//        std::cout << "You entered two times the same value."
//                  << std::endl;
//    }
//
//    std::cout << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.20 & 1.21
 */
//int main()
//{
//    Sales_item transac1, transac2;
//    std::cin >> transac1 >> transac2;
//
//    // 1.21
//    if (transac1.isbn() == transac2.isbn()) {
//        std::cout << "\n" << "Same ISBN - Sum of transactions : "
//                  << transac1 + transac2 << std::endl;
//    } else {
//        // 1.20
//        std::cout << "\n" << transac1;
//        std::cout << "\n" << transac2
//                  << std::endl;
//    }
//
//    return 0;
//}

/*
 * Exercise 1.22
 */
//int main()
//{
//    const char transaction[54] = "Sum of all transactions for the same ISBN recorded : ";
//    Sales_item previousTransac, sum;
//
//    // Initial transaction.
//    std::cin >> previousTransac;
//    sum = previousTransac;
//
//    // The rest of them.
//    for (Sales_item userTransac; std::cin >> userTransac;)
//    {
//        if (previousTransac.isbn() == userTransac.isbn()) {
//            sum += userTransac;
//        } else {
//            std::cout << transaction << sum
//                      << std::endl;
//            sum = userTransac;
//        }
//
//        previousTransac = userTransac;
//    }
//
//    std::cout << transaction << sum
//              << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.23 & 1.24
 */
//int main()
//{
//    Sales_item previousTransac;
//    int occurs = 1;
//
//    // Initial transaction.
//    std::cin >> previousTransac;
//
//    // The rest of them.
//    for (Sales_item userTransac; std::cin >> userTransac;)
//    {
//        if (previousTransac.isbn() == userTransac.isbn()) {
//            ++occurs;
//        } else {
//            std::cout << "Transaction for book ISBN " << previousTransac.isbn()
//                      << " occurs " << occurs << " times." << std::endl;
//            occurs = 1;
//        }
//
//        previousTransac = userTransac;
//    }
//
//    std::cout << "Transaction for book ISBN " << previousTransac.isbn()
//              << " occurs " << occurs << " times." << std::endl;
//
//    return 0;
//}

/*
 * Exercise 1.25
 */
int main()
{
    const char transaction[54] = "Sum of all transactions for the same ISBN recorded : ";
    Sales_item previousTransac, sum;
    int returnCode = 0;

    // Initial transaction.
    if (std::cin >> previousTransac) {
        sum = previousTransac;

        // The rest of them.
        for (Sales_item userTransac; std::cin >> userTransac;) {
            if (previousTransac.isbn() == userTransac.isbn()) {
                sum += userTransac;
            } else {
                std::cout << transaction << sum
                          << std::endl;
                sum = userTransac;
            }

            previousTransac = userTransac;
        }

        std::cout << transaction << sum
                  << std::endl;
    } else {
        std::cerr << "Program failure: No valid data passed."
                  << std::endl;

        returnCode = -1;
    }

    return returnCode;
}