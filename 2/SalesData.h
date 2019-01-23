#ifndef SALESDATA_H
#define SALESDATA_H
#include <string>
struct SalesData
{
    std::string isbn;
    unsigned int unitsSold = 0;
    double unitPrice = 0.0;
};
#endif
