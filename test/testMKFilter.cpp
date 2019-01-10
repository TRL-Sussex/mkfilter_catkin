#include <iostream>
#include <mkfilter/MKFilter.h>

int main()
{
    double gain;
    std::vector<double> coefIn;
    std::vector<double> coefOut;

    mkfilter::MKFilter(
        mkfilter::FilterType_t::Bessel,
        mkfilter::PassType_t::Lowpass,
        0.0,
        3, 0.25, 0.0,
        coefIn, coefOut, gain);

    std::cout << "gain = " << gain << std::endl;
    for (size_t i=0;i<coefIn.size();i++) {
        std::cout << "CoefIn[" << i << "] = " << coefIn[i] << std::endl;
    }
    for (size_t i=0;i<coefOut.size();i++) {
        std::cout << "CoefOut[" << i << "] = " << coefOut[i] << std::endl;
    }

    return 0;
}

