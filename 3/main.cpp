#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
/*
 * 3.1
 */
// using std::cout;
// using std::endl;
//int main()
//{
//    int i = 50, sum = 0, maxVal = 100;
//
//    while (i <= maxVal) {
//        sum += i;
//        ++i;
//    }
//
//    cout << "Sum of all integers between 50 & 100 is : "
//              << sum << endl;
//
//    return 0;
//}
//int main()
//{
//    int i = 10, minVal = 0;
//
//    while (i >= minVal) {
//        cout << "\n" << i;
//        --i;
//    }
//
//    cout << endl;
//
//    return 0;
//}
//using std::cin;
//int main()
//{
//    int userVal1, userVal2;
//
//    cout << "Please enter a range of two numbers, this program will promp every integers in this range:"
//              << endl;
//
//    cin >> userVal1 >> userVal2;
//
//    while (userVal1 <= userVal2) {
//        cout << "\n" << userVal1;
//        ++userVal1;
//    }
//
//    cout << endl;
//
//    return 0;
//}

/*
 * 3.2
 */
//#include <iostream>
//#include <string>
//
//using std::string;
//
//int main()
//{
//    // Line.
//    //for(string user_input; getline(std::cin, user_input); std::cout << user_input << std::endl);
//
//    // Word
//    for (string user_input; std::cin >> user_input; std::cout << user_input << std::endl);
//
//    return 0;
//}

/*
 * 3.3
 *
 * In the case of input (>>) operator whitespace are ignored
 * By using getline() function, whitespaces are kept but new-line are ignored
 * (the name of the function explain well what it does, it get the line, line are separated by a newline character).
 */

/*
 * 3.4
 */
//#include <iostream>
//#include <string>
//
//using std::string;

//int main()
//{
//    string string1, string2, report;
//
//    getline(std::cin, string1);
//    getline(std::cin, string2);
//
////    if (string1 == string2) {
////        report = "Strings are equals";
////    } else if (string1 > string2) {
////        report = "string1 is larger than 2";
////    } else {
////        report = "string2 is larger than 1";
////    }
//
//    if (string1.size() == string2.size()) {
//        report = "Strings have the same length";
//    } else if (string1.size() > string2.size()) {
//        report = "string1 size is larger than 2";
//    } else {
//        report = "string2 size is larger than 1";
//    }
//
//    std::cout << report << std::endl;
//
//    return 0;
//}

/*
 * 3.5
 */
//int main()
//{
//    string user_i, result;
//
//    for (user_i = ""; std::cin >> user_i; result += user_i + " ");
//
//    std::cout << result << std::endl;
//
//    return 0;
//}

/*
 * 3.6
 */
//int main()
//{
//    string user_i;
//
//    for (user_i = ""; std::cin >> user_i;) {
//        for (auto &c : user_i) {
//            c = '*';
//        }
//        std::cout << user_i << std::endl;
//    }
//
//    return 0;
//}

/*
 * 3.7
 *
 * If we change the type of the variable into loop control to char, it will work because our string
 * is just a collection of char.
 */
//int main()
//{
//    string user_i;
//
//    while(std::cin >> user_i) {
//        for (char &c : user_i) {
//            c = '*';
//        }
//        std::cout << user_i << std::endl;
//    }
//
//    return 0;
//}

/*
 * 3.8
 *
 * I prefer the while statement for this one because we don't have to make an useless first
 * expression as we do in for.
 */

/*
 * 3.9
 *
 * Programm is valid, but as s1 is an empty string (declared but not initialized) so there is no substrip into s1.
 * So s1[0] is undefined.
 */

/*
 * 3.10
 */
//int main()
//{
//    string user_i, result;
//
//    while (getline(std::cin, user_i)) {
//        for (char c : user_i) {
//            if (!ispunct(c))
//                result += c;
//        }
//
//        std::cout << result << std::endl;
//        result = "";
//    }
//
//    return 0;
//}

/*
 * 3.11
 *
 * Follow for is a loop control, is will iterate over all the caracters into string s, so it's legal.
 * Type of c is char& (reference to a char).
 */

/*
 * 3.12
 *
 * Legal : a & c. a => declaration of an empty vector of vector of int, c => declare a vector of string and
 * initialize it with 10 strings "null".
 * Illegal : b. b => cannot cast elements of type vector<int> into string.
 */

/*
 * 3.13
 *
 * a) no elements.
 * b) 10 int elements with value 0.
 * c) 10 int elements with value 42.
 * d) one int element with value 10.
 * e) two int elements with respectives values: 10, 42.
 * f) 10 empty strings
 * g) 10 string elements with values: "hi!".
 *
 */

/*
 * 3.14
 */
//int main()
//{
//    vector<int> iuser;
//    int user_i;
//
//    while (std::cin >> user_i) {
//        iuser.push_back(user_i);
//    }
//
//    return 0;
//}

/*
 * 3.15
 */
//int main()
//{
//    vector<string> suser;
//    string user_s;
//
//    while (std::cin >> user_s) {
//        suser.push_back(user_s);
//        std::cout << "size : " << suser.size() << std::endl;
//    }
//
//    std::cout << "size : " << suser.size() << std::endl;
//    return 0;
//}

/*
 * 3.16
 */
//int main ()
//{
//    vector<int> v1;
//    vector<int> v2(10);
//    vector<int> v3(10, 42);
//    vector<int> v4{10};
//    vector<int> v5{10, 42};
//    vector<string> v6{10};
//    vector<string> v7{10, "hi!"};
//
//    std::cout << "Size of v1:" << v1.size() << std::endl;
//    std::cout << "Elements of v1:" << std::endl;
//    for (auto elem : v1) {
//        std::cout << elem << std::endl;
//    }
//    std::cout << "\n" << std::endl;
//
//    std::cout << "Size of v2:" << v2.size() << std::endl;
//    std::cout << "Elements of v2:" << std::endl;
//    for (auto elem : v2) {
//        std::cout << elem << std::endl;
//    }
//    std::cout << "\n" << std::endl;
//
//    std::cout << "Size of v3:" << v3.size() << std::endl;
//    std::cout << "Elements of v3:" << std::endl;
//    for (auto elem : v3) {
//        std::cout << elem << std::endl;
//    }
//    std::cout << "\n" << std::endl;
//
//    std::cout << "Size of v4:" << v4.size() << std::endl;
//    std::cout << "Elements of v4:" << std::endl;
//    for (auto elem : v4) {
//        std::cout << elem << std::endl;
//    }
//    std::cout << "\n" << std::endl;
//
//    std::cout << "Size of v5:" << v5.size() << std::endl;
//    std::cout << "Elements of v5:" << std::endl;
//    for (auto elem : v5) {
//        std::cout << elem << std::endl;
//    }
//    std::cout << "\n" << std::endl;
//
//    std::cout << "Size of v6:" << v6.size() << std::endl;
//    std::cout << "Elements of v6:" << std::endl;
//    for (auto elem : v6) {
//        std::cout << elem << std::endl;
//    }
//    std::cout << "\n" << std::endl;
//
//    std::cout << "Size of v7:" << v7.size() << std::endl;
//    std::cout << "Elements of v7:" << std::endl;
//    for (auto elem : v7) {
//        std::cout << elem << std::endl;
//    }
//    std::cout << "\n" << std::endl;
//
//    return 0;
//}

/*
 * 3.17
 */
//int main()
//{
//    vector<string> suser;
//    string user_s, result;
//    int count = 0;
//
//    while(std::cin >> user_s) {
//        suser.push_back(user_s);
//    }
//
//    for (string elem : suser) {
//        for (char &c : elem) {
//            c = toupper(c);
//        }
//
//        if (count % 8 != 0) {
//            result += " " + elem;
//        } else {
//            std::cout << "\n" << result << std::endl;
//            result = elem;
//        }
//
//        ++count;
//    }
//
//    // Print the rest of result.
//    std::cout << "\n" << result << std::endl;
//
//    return 0;
//}

/*
 * 3.18
 *
 * Illegal. To fix it you can use thoses :
 * vector<int> ivec = {42}; // at init.
 * vector<int> ivec(1, 42); // at init.
 * ivec.push_back(42);
 * ivec = {42}
 */

/*
 * 3.19
 *
 * vector<int> ivec = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
 * vector<int> ivec{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
 * vector<int> ivec(10, 42);
 *
 * Last one is my favorite, more elegent and short.
 */

/*
 * 3.20
 */
//// Incremental pairs.
//int main()
//{
//    vector<int> ivec_useri;
//    int i_useri, count = 0, sum = 0;
//
//    while(std::cin >> i_useri) {
//        ivec_useri.push_back(i_useri);
//    }
//
//    for (int ielem : ivec_useri) {
//        if (count % 2 == 0 && count != 0) {
//            std::cout << sum << " ";
//            sum = ielem;
//        } else {
//            sum += ielem;
//        }
//
//        ++count;
//    }
//
//    std::cout << sum << " ";
//
//    return 0;
//}

// Symetric pairs.
/*
int main()
{
    int useri, sum = 0;
    vector<int> vec_useri;

    while(std::cin >> useri) {
        vec_useri.push_back(useri);
    }

    if (vec_useri.empty()) {
        std::cerr << "ERR: Invalid data";
        return -1;
    }

    auto vec_size = vec_useri.size(), vec_max_index = vec_size - 1;
    bool is_pair = (vec_size % 2 == 0);
    decltype(vec_size) i, max_subscript_to_check = vec_max_index/2;

    for (i = 0; i <= max_subscript_to_check; ++i) {
        if (i == max_subscript_to_check && !is_pair) {
            sum = vec_useri[i];
        } else {
            sum = vec_useri[i] + vec_useri[vec_size - (i + 1)];
        }

        std::cout << sum << " ";
    }

    std::cout << std::endl;

    return 0;
}
*/

/*
 * 3.21 & 3.22
 */
//int main()
//{
//    const int wordsByLine = 8;
//    int words = 0;
//    string suser, result;
//    vector<string> vstring;
//
//    while (std::cin >> suser) {
//        string usersWhiteline = suser + ' ';
//
//        if (words < wordsByLine) {
//            result += usersWhiteline;
//            words++;
//        } else {
//            vstring.push_back(result);
//            result = usersWhiteline;
//            // There already is one word.
//            words = 1;
//        }
//    }
//
//    if (!result.empty()) {
//        vstring.push_back(result);
//    }
//
//    if (vstring.begin() == vstring.end()) {
//        return -1;
//    }
//
//    auto *firstParagraph = &vstring[0];
//    for (auto is = (*firstParagraph).begin(); is != firstParagraph->end(); ++is) {
//        if (!isspace(*is)) {
//            *is = toupper(*is);
//        }
//    }
//
//    for (auto s: vstring) {
//        std::cout << s << std::endl;
//    }
//
//    return 0;
//}

/*
 * 3.23
 */
//int main()
//{
//    vector<int> vint{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//    for (auto it = vint.begin(); it != vint.end(); ++it) {
//        *it = *it * 2;
//    }
//
//    for (auto i : vint) {
//        std::cout << i << std::endl;
//    }
//
//    return 0;
//}

/*
 * 3.24
 */
//int main()
//{
//    int useri;
//    vector<int> vuseri, mirrorSum;
//
//    while (std::cin >> useri) {
//        vuseri.push_back(useri);
//    }
//
//    auto mid = vuseri.begin() + vuseri.size() / 2;
//    auto end = vuseri.end() - 1;
//
//    for (auto i = vuseri.begin(); i != mid; ++i) {
//        int sum = *i + *end;
//        mirrorSum.push_back(sum);
//        --end;
//    }
//
//    if (vuseri.size() % 2 != 0) {
//        mirrorSum.push_back(*mid);
//    }
//
//    for (auto val : mirrorSum) {
//        std::cout << val << std::endl;
//    }
//
//    return 0;
//}

/*
 * 3.25
 */
//int main()
//{
//    int grade;
//    string result;
//    vector<int> vgrades(11, 0);
//
//    while (std::cin >> grade) {
//        if (grade <= 100) {
//            auto it = vgrades.begin() + grade/10;
//            ++(*it);
//        }
//    }
//
//    for (int val : vgrades) {
//        result += std::to_string(val) + ' ';
//    }
//
//    std::cout << result << std::endl;
//    return 0;
//}

/*
 * 3.26
 *
 * We can't use + operator between two iterators. What we can is calculate the distance
 * between them (with -) and add this number on the begin iterator to have the result expected.
 */

/*
 * 3.27
 *
 * Only const expr can define the array size. So only b is legal. (unsigned buf_size is not a const).
 * c illegal because function txt_size must be declared as a constexpr function.
 * d is illegal too, size 11 cannot contain word fundamental and a nullchar.
 */

/*
 * 3.28
 *
 * int ia2[10] : 10 null ints.
 * string sa2[10]: 10 null strings.
 */

/*
 * 3.29
 *
 * Compared to vectors : array have a fixed size and can't be assigned to another array but offer better runtime performances.
 */

/*
 * 3.30
 *
 * The error is in the for loop, counter used to walk through the array, must be stricly inferior to the variable used to define it.
 * To correct it we must write the look like this (size_t ix = 0; ix < array_size; ++ix) or (auto i : ia).
 */

/*
 * 3.31 + 3.32
 */
//int main()
//{
//    int array[10], count = 0;
//    int arrayCopy[10];
//
//    for (auto &item : array) {
//        arrayCopy[count] = item = count;
//        ++count;
//    }
//
//    return 0;
//}
//int main()
//{
//    vector<int> v1(10), v2;
//    int count = 0;
//
//    for (auto it = v1.begin(); it != v1.end(); ++it, ++count) {
//        *it = count;
//    }
//
//    v2 = v1;
//
//    return 0;
//}

/*
 * 3.33
 *
 * If array scores not initialized, it cannot have 11 values set to 0, so we couldnt increment that value in the while loop.
 */

/*
 * 3.34
 *
 * p1 += p2 - p1; Calculate difference between element2 and element1, and add this to p1. In fact, this code move p1 to p2.
 * No invalid values because a diff can be negative.
 */
//int main()
//{
//    int arr[4] = {0, 1, 2, 3};
//    int *p1 = &arr[3], *p2 = &arr[1];
//
//    p1 += p2 - p1;
//
//    std::cout << *p1 << std::endl;
//
//    return 0;
//}

/*
 * 3.35
 */
//int main()
//{
//    int arr[4] = {5,4,7,1};
//    int *pb = std::begin(arr), *pe = std::end(arr);
//
//    while (pb != pe) {
//        *pb = 0;
//        ++pb;
//    }
//
//    return 0;
//}

/*
 * 3.36 - array
 */
//int main()
//{
//    int arr1[4] = {5,4,7,1};
//    int arr2[5] = {5,4,7,1};
//    int *pb1 = std::begin(arr1), *pb2 = std::begin(arr2), *pe = std::end(arr1);
//    bool sameArray = true;
//
//    while (sameArray && pb1 != pe) {
//        sameArray = (*pb1 == *pb2);
//        ++pb1; ++pb2;
//    }
//
//    if (!sameArray) {
//        return -1;
//    }
//
//    return 0;
//}

/*
 * 3.36 - vectors
 */
//int main()
//{
//    vector<int> v1 = {1,2,3}, v2 = {1,3,3};
//    bool sameVector = (v1.size() == v2.size());
//    auto v1b = v1.begin(), v2b = v2.begin(), v1e = v1.end();
//
//    while (v1b != v1e && sameVector) {
//        sameVector = (*v1b == *v2b);
//        ++v1b; ++v2b;
//    }
//
//    if (!sameVector) {
//        return -1;
//    }
//
//    return 0;
//}

/*
 * 3.37
 *
 * This programm prints all chars into C-style string ca.
 */

/*
 * 3.38
 *
 * Trying to add two pointers is illegal and meaningless. A pointer is a memory address, such addition, if legal, would create a pointer to an
 * undefined address.
 */

/*
 * 3.39 - Comparing std::strings
 */
//int main()
//{
//    std::string s1 = "Salut tu vas bien ?", s2 = "Oui et toi bro ?";
//    std::string s1Inferior = (s1 < s2) ? "true" : "false";
//
//    std::cout << "s1 smaller than s2 : " << s1Inferior << std::endl;
//
//    return 0;
//}
/*
 * 3.39 - Comparing C-style strings
 */
//#include <cstring>
//int main()
//{
//    char s1[] = "Salut tu vas bien ?", s2[] = "Oui et toi bro ?";
//    bool s1Inferior = (strcmp(s1, s2) < 0);
//
//    std::cout << "s1 smaller than s2 : " << s1Inferior << std::endl;
//
//    return 0;
//}

/*
 * 3.40
 */
//#include <cstring>
//int main()
//{
//    char s1[] = "Salut tu vas bien ?", s2[] = "Oui et toi bro ?";
//    char sConcat[37];
//
//    strcpy(strcat(sConcat, s2), strcat(sConcat, s1));
//
//    return 0;
//}

/*
 * 3.41
 */
//int main()
//{
//    int a1[] = {1,2,3,4};
//    vector<int> v1(std::begin(a1), std::end(a1));
//
//    return 0;
//}

/*
 * 3.42
 */
//int main()
//{
//    vector<int> v1 = {1,2,3,4};
//    int a1[v1.size()], *pa1 = a1;
//
//    for (int v : v1) {
//        *pa1 = v;
//        ++pa1;
//    }
//
//    return 0;
//}

/*
 * 3.43 - 3.44 - 3.45
 * 1 - Range for
 * 2 - Ordinary for with subscripts
 * 3 - Ordinary for with pointers
 */

/*
 * 3.43 - 1
 */
//int main()
//{
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (int (&row)[4] : ia) {
//        for (int col : row) {
//            std::cout << col << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.43 - 2
 */
//int main()
//{
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (int x = 0; x < 3; ++x) {
//        for (int y = 0; y < 4; ++y) {
//            std::cout << ia[x][y] << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.43 - 3
 */
//int main()
//{
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (int (*x)[4] = ia; x != std::end(ia); ++x) {
//        for (int *y = *x; y != std::end(*x); ++y) {
//            std::cout << *y << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.44 - 1
 */
//int main()
//{
//    using int_array4 = int[4];
//
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (int_array4 &row : ia) {
//        for (int col : row) {
//            std::cout << col << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.44 - 2
 */
//int main()
//{
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (int x = 0; x < 3; ++x) {
//        for (int y = 0; y < 4; ++y) {
//            std::cout << ia[x][y] << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.44 - 3
 */
//int main()
//{
//    using int_array4 = int[4];
//
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (int_array4 *x = ia; x != std::end(ia); ++x) {
//        for (int *y = *x; y != std::end(*x); ++y) {
//            std::cout << *y << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.45 - 1
 */
//int main()
//{
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (auto &row : ia) {
//        for (auto col : row) {
//            std::cout << col << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.45 - 2
 */
//int main()
//{
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (auto x = 0; x < 3; ++x) {
//        for (auto y = 0; y < 4; ++y) {
//            std::cout << ia[x][y] << std::endl;
//        }
//    }
//
//    return 0;
//}

/*
 * 3.45 - 3
 */
//int main()
//{
//    int ia[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };
//
//    for (auto *x = ia; x != std::end(ia); ++x) {
//        for (auto *y = *x; y != std::end(*x); ++y) {
//            std::cout << *y << std::endl;
//        }
//    }
//
//    return 0;
//}

